#ifndef __CUST_KEY_H__
#define __CUST_KEY_H__

#include<cust_kpd.h>

#if 0
#define MT65XX_FACTORY_KEY	32
#define MT65XX_META_KEY		42	/* KEY_2 */
#define MT65XX_PMIC_RST_KEY	32 /*for pmic key use*/
#define MT_CAMERA_KEY 		10

#define MT65XX_BOOT_MENU_KEY       0   /* KEY_VOLUMEUP */
#define MT65XX_MENU_SELECT_KEY     MT65XX_BOOT_MENU_KEY   
#define MT65XX_MENU_OK_KEY         32 /* KEY_VOLUMEDOWN */

#else

#define MT65XX_META_KEY		42	/* KEY_2 */
//LINE <FCHAN ENABLE> <DATE20130816> <FCHAN ENABLE> zhangxiaofei
//#define MT65XX_PMIC_RST_KEY	MT65XX_FACTORY_KEY //11 /*invaild key*/
#define MT_CAMERA_KEY 		10

//Start modified by mickal.ma
#define MT65XX_BOOT_MENU_KEY       MT65XX_RECOVERY_KEY   /* KEY_VOLUMEUP */
#define MT65XX_MENU_SELECT_KEY     MT65XX_BOOT_MENU_KEY   
#define MT65XX_MENU_OK_KEY         MT65XX_FACTORY_KEY /* KEY_VOLUMEDOWN */
//End modified by mickal.ma

#endif

#endif /* __CUST_KEY_H__ */
