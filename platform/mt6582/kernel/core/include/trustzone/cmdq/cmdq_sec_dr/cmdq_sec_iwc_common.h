#ifndef __CMDQ_SEC_IWC_COMMON_H__
#define __CMDQ_SEC_IWC_COMMON_H__


#define CMDQ_MAX_BLOCK_SIZE     (32 * 1024)

#define CMDQ_IWC_MAX_CMD_LENGTH (32 * 1024 / 4)

#define CMDQ_IWC_MAX_ADDR_LIST_LENGTH (12)
#define CMDQ_IWC_MAX_PORT_LIST_LENGTH (5)

//
// profile setting enum
// .default is 0, not enable profile, otherwise we enalbe it depends on profile bit
//
typedef enum CMDQ_IWC_PROF_ENUM
{
    CMDQ_IWC_PROF_LOG,
    CMDQ_IWC_PROF_SYSTRACE,
}CMDQ_IWC_PROF_ENUM;

// IWC systrace tag enum
typedef enum CMDQ_IWC_SYSTRACE_TAG_ENUM
{
    // used by cmdqSecTL
    CMDQ_IST_CMD_ALLOC,
    CMDQ_IST_H2PAS,
    CMDQ_IST_PORT_ON,
    CMDQ_IST_PORT_OFF,
    CMDQ_IST_DAPC_ON,
    CMDQ_IST_DAPC_OFF,
    CMDQ_IST_SUBMIT,

    // used by cmdqSecDR
    CMDQ_IST_CMDQ_TASK_ACQ,
    CMDQ_IST_CMDQ_TASK_REL,
    CMDQ_IST_CMDQ_HW,
    CMDQ_IST_CMDQ_SIG_WAIT,

    // always at the end
    CMDQ_IST_MAX_COUNT,
}CMDQ_IWC_SYSTRACE_TAG_ENUM;


//
// IWC message
//
typedef struct
{
    uint32_t instrIndex; // _d, indicate x-th instruction
    uint32_t baseHandle; // _h, secure handle
    uint32_t offset;     // _b, buffser offset to secure handle

    // mva config
    bool     isMVA;
    uint32_t size;
    uint32_t port;
} iwcCmdqAddrMetadata_t;

typedef struct
{
    uint32_t port;
    bool     useMVA;
} iwcCmdqPortMetadata_t;

typedef struct {
    int32_t logLevel;
    int32_t enableProfile;
} iwcCmdqDebugConfig_t;

typedef struct {
    uint64_t startTime; // start timestamp
    uint64_t endTime;   // end timestamp
} iwcCmdqSystraceLog_t;

typedef struct {
    uint32_t addrListLength;
    uint32_t portListLength;
    iwcCmdqAddrMetadata_t addrList[CMDQ_IWC_MAX_ADDR_LIST_LENGTH];
    iwcCmdqPortMetadata_t portList[CMDQ_IWC_MAX_PORT_LIST_LENGTH];

    iwcCmdqDebugConfig_t debug;
    iwcCmdqSystraceLog_t systraceRec[CMDQ_IST_MAX_COUNT];
}iwcCmdqMetadata_t;

//
// linex kernel and mobicore has their own MMU tables,
// the latter's is used to map world shared memory and physical address
// so mobicore dose not understand linux virtual address mapping.
//
// if we want to transact a large buffer in TCI/DCI, there are 2 method (both need 1 copy):
// 1. use mc_map, to map normal world buffer to WSM, and pass secure_virt_addr in TCI/DCI buffer
//    note mc_map implies a memcopy to copy content from normal world to WSM
// 2. declare a fixed lenth array in TCI/DCI struct, and its size must be < 1M
//
typedef struct {
    union
    {
        uint32_t cmd;   // [IN] command id
        int32_t rsp;    // [OUT] 0 for success, < 0 for error
    };

    uint32_t thread;
    uint32_t scenario;
    uint32_t priority;
    uint32_t engineFlag;
    uint32_t pVABase[CMDQ_IWC_MAX_CMD_LENGTH];
    uint32_t blockSize;

    iwcCmdqMetadata_t metadata;
} iwcCmdqMessage_t, *iwcCmdqMessage_ptr;


// CMDQ secure engine
// the engine id should be same as the normal CMDQ
typedef enum CMDQ_ENG_SEC_ENUM
{
    // CAM
    CMDQ_ENG_SEC_ISP_IMGI   = 0,
    CMDQ_ENG_SEC_ISP_IMGO   = 1,
    CMDQ_ENG_SEC_ISP_IMG2O  = 2,

    // MDP
    CMDQ_ENG_SEC_MDP_RDMA0  = 3,
    CMDQ_ENG_SEC_MDP_CAMIN  = 4,
    CMDQ_ENG_SEC_MDP_SCL0   = 5,
    CMDQ_ENG_SEC_MDP_SCL1   = 6,
    CMDQ_ENG_SEC_MDP_TDSHP  = 7,
    CMDQ_ENG_SEC_MDP_WROT   = 8,
    CMDQ_ENG_SEC_MDP_WDMA1  = 9,

    CMDQ_ENG_SEC_LSCI   = 10,
    CMDQ_ENG_SEC_CMDQ   = 11,

    CMDQ_ENG_SEC_ISP_Total  = 12,
}CMDQ_ENG_SEC_ENUM;


//
// ERROR code number (ERRNO)
// note the error result returns negative value, i.e, -(ERRNO)
//
#define	CMDQ_ERR_NOMEM		(12)	// out of memory
#define	CMDQ_ERR_FAULT		(14)	// bad address

#define CMDQ_ERR_ADDR_CONVERT_HANDLE_2_PA (1000)
#define CMDQ_ERR_ADDR_CONVER_PA (1200)
#define CMDQ_ERR_ADDR_CONVERT_ALLOC_MVA   (1100)
#define CMDQ_ERR_ADDR_CONVERT_FREE_MVA    (1200)
#define CMDQ_ERR_PORT_CONFIG              (1300)

#define CMDQ_TL_ERR_UNKNOWN_IWC_CMD       (5000)

#define CMDQ_ERR_DR_IPC_EXECUTE_SESSION   (5001)
#define CMDQ_ERR_DR_IPC_CLOSE_SESSION     (5002)
#define CMDQ_ERR_DR_EXEC_FAILED           (5003)



#endif // __CMDQ_SEC_TLAPI_H__
