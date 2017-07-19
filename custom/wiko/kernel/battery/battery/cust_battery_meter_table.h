#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-30,124607},
        {-25,94918},
        {-20,73035},
        {-15,56734},
        {-10,44468},
        { -5,35150},
        {  0,28008},
        {  5,22486},
        { 10,18182},
        { 15,14803},
        { 20,12129},
        { 25,10000},
        { 30,8292},
        { 35,6914},
        { 40,5795},
        { 45,4872},
        { 50,4101},
        { 55,3467},
        { 60,2936},
        { 65,2494},
        { 70,2130},
        { 75,1817},
        { 80,1562}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
//DOD0  OCV -10
{ 0,	4164 },
{ 2,	4127 },
{ 3,	4091 },
{ 5,	4053 },
{ 7,	4019 },
{ 8,	3998 },
{ 10,	3984 },
{ 12,	3975 },
{ 14,	3965 },
{ 15,	3957 },
{ 17,	3949 },
{ 19,	3941 },
{ 20,	3933 },
{ 22,	3924 },
{ 24,	3912 },
{ 25,	3904 },
{ 27,	3896 },
{ 29,	3887 },
{ 30,	3878 },
{ 32,	3866 },
{ 34,	3856 },
{ 35,	3845 },
{ 37,	3833 },
{ 39,	3822 },
{ 41,	3814 },
{ 42,	3806 },
{ 44,	3801 },
{ 46,	3802 },
{ 47,	3797 },
{ 49,	3791 },
{ 51,	3787 },
{ 52,	3788 },
{ 54,	3786 },
{ 56,	3785 },
{ 57,	3785 },
{ 59,	3784 },
{ 61,	3783 },
{ 62,	3781 },
{ 64,	3780 },
{ 66,	3778 },
{ 68,	3777 },
{ 69,	3774 },
{ 71,	3772 },
{ 73,	3768 },
{ 74,	3762 },
{ 76,	3758 },
{ 78,	3752 },
{ 79,	3743 },
{ 81,	3733 },
{ 83,	3721 },
{ 84,	3706 },
{ 86,	3688 },
{ 88,	3666 },
{ 89,	3638 },
{ 91,	3609 },
{ 93,	3581 },
{ 95,	3553 },
{ 96,	3524 },
{ 98,	3481 },
{ 100,	3410 },
{ 100,	3376 },
{ 100,	3218 },
{ 100,	2942 },
{ 100,	2942 },
{ 100,	2942 },
{ 100,	2942 },
{ 100,	2942 },
{ 100,	2942 },
{ 100,	2942 },
{ 100,	2942 }
};              
                
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
//DOD0	OCV 0
{ 0,	4172 },
{ 2,	4139 },
{ 3,	4099 },
{ 5,	4077 },
{ 7,	4056 },
{ 8,	4034 },
{ 10,	4013 },
{ 11,	3996 },
{ 13,	3985 },
{ 15,	3977 },
{ 16,	3969 },
{ 18,	3959 },
{ 20,	3951 },
{ 21,	3941 },
{ 23,	3931 },
{ 25,	3923 },
{ 26,	3913 },
{ 28,	3903 },
{ 29,	3894 },
{ 31,	3883 },
{ 33,	3873 },
{ 34,	3863 },
{ 36,	3851 },
{ 38,	3839 },
{ 39,	3847 },
{ 41,	3828 },
{ 42,	3814 },
{ 44,	3807 },
{ 46,	3800 },
{ 47,	3795 },
{ 49,	3792 },
{ 51,	3788 },
{ 52,	3786 },
{ 54,	3785 },
{ 56,	3784 },
{ 57,	3784 },
{ 59,	3784 },
{ 60,	3783 },
{ 62,	3781 },
{ 64,	3781 },
{ 65,	3781 },
{ 67,	3780 },
{ 69,	3778 },
{ 70,	3778 },
{ 72,	3776 },
{ 74,	3774 },
{ 75,	3769 },
{ 77,	3764 },
{ 78,	3756 },
{ 80,	3743 },
{ 82,	3727 },
{ 83,	3708 },
{ 85,	3685 },
{ 87,	3661 },
{ 88,	3633 },
{ 90,	3606 },
{ 92,	3578 },
{ 93,	3556 },
{ 95,	3533 },
{ 96,	3533 },
{ 98,	3497 },
{ 100,	3421 },
{ 100,	3304 },
{ 100,	3172 },
{ 100,	3172 },
{ 100,	3172 },
{ 100,	3172 },
{ 100,	3172 },
{ 100,	3172 },
{ 100,	3172 }

};              

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
//DOD0	OCV 25	
{ 0,	4171 },
{ 1,	4147 },
{ 3,	4128 },
{ 4,	4111 },
{ 6,	4095 },
{ 7,	4079 },
{ 9,	4066 },
{ 10,	4053 },
{ 12,	4038 },
{ 13,	4023 },
{ 15,	4009 },
{ 16,	3997 },
{ 18,	3987 },
{ 19,	3977 },
{ 21,	3966 },
{ 22,	3958 },
{ 24,	3946 },
{ 25,	3937 },
{ 27,	3927 },
{ 28,	3917 },
{ 30,	3909 },
{ 31,	3900 },
{ 33,	3892 },
{ 34,	3885 },
{ 36,	3877 },
{ 37,	3870 },
{ 39,	3862 },
{ 40,	3854 },
{ 42,	3845 },
{ 43,	3835 },
{ 45,	3823 },
{ 46,	3814 },
{ 48,	3804 },
{ 49,	3796 },
{ 51,	3790 },
{ 52,	3784 },
{ 54,	3780 },
{ 55,	3777 },
{ 57,	3775 },
{ 58,	3772 },
{ 60,	3772 },
{ 61,	3771 },
{ 63,	3771 },
{ 64,	3770 },
{ 66,	3769 },
{ 67,	3770 },
{ 69,	3770 },
{ 70,	3769 },
{ 72,	3766 },
{ 73,	3765 },
{ 75,	3764 },
{ 76,	3760 },
{ 78,	3757 },
{ 79,	3750 },
{ 81,	3741 },
{ 82,	3731 },
{ 84,	3716 },
{ 85,	3696 },
{ 87,	3676 },
{ 88,	3654 },
{ 90,	3629 },
{ 91,	3601 },
{ 93,	3575 },
{ 94,	3555 },
{ 96,	3536 },
{ 97,	3515 },
{ 99,	3483 },
{ 100,	3398 },
{ 100,	3280 },
{ 100,	3079 }

};              

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
//DOD0	OCV 50	
{ 0,	4177 },
{ 2,	4155 },
{ 3,	4135 },
{ 5,	4116 },
{ 7,	4098 },
{ 8,	4082 },
{ 10,	4067 },
{ 11,	4051 },
{ 13,	4038 },
{ 15,	4023 },
{ 16,	4007 },
{ 18,	3997 },
{ 20,	3984 },
{ 21,	3971 },
{ 23,	3960 },
{ 24,	3947 },
{ 26,	3935 },
{ 28,	3925 },
{ 29,	3915 },
{ 31,	3908 },
{ 33,	3897 },
{ 34,	3888 },
{ 36,	3879 },
{ 38,	3872 },
{ 39,	3863 },
{ 41,	3855 },
{ 42,	3847 },
{ 44,	3836 },
{ 46,	3824 },
{ 47,	3812 },
{ 49,	3801 },
{ 51,	3793 },
{ 52,	3785 },
{ 54,	3782 },
{ 55,	3778 },
{ 57,	3772 },
{ 59,	3770 },
{ 60,	3770 },
{ 62,	3766 },
{ 64,	3767 },
{ 65,	3766 },
{ 67,	3765 },
{ 69,	3765 },
{ 70,	3763 },
{ 72,	3762 },
{ 73,	3757 },
{ 75,	3749 },
{ 77,	3747 },
{ 78,	3742 },
{ 80,	3733 },
{ 82,	3725 },
{ 83,	3713 },
{ 85,	3697 },
{ 86,	3677 },
{ 88,	3655 },
{ 90,	3631 },
{ 91,	3604 },
{ 93,	3577 },
{ 95,	3554 },
{ 96,	3535 },
{ 98,	3504 },
{ 100,	3430 },
{ 100,	3322 },
{ 100,	3149 },
{ 100,	3149 },
{ 100,	3149 },
{ 100,	3149 },
{ 100,	3149 },
{ 100,	3149 },
{ 100,	3149 }

};              

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
//DOD0	R -10
{ 363,	4164 },	
{ 347,	4127 },	
{ 383,	4091 },	
{ 454,	4053 },	
{ 539,	4019 },	
{ 584,	3998 },	
{ 603,	3984 },	
{ 616,	3975 },	
{ 620,	3965 },	
{ 626,	3957 },	
{ 632,	3949 },	
{ 643,	3941 },	
{ 644,	3933 },	
{ 653,	3924 },	
{ 647,	3912 },	
{ 657,	3904 },	
{ 658,	3896 },	
{ 663,	3887 },	
{ 660,	3878 },	
{ 655,	3866 },	
{ 660,	3856 },	
{ 646,	3845 },	
{ 640,	3833 },	
{ 634,	3822 },	
{ 631,	3814 },	
{ 630,	3806 },	
{ 633,	3801 },	
{ 634,	3802 },	
{ 637,	3797 },	
{ 636,	3791 },	
{ 640,	3787 },	
{ 658,	3788 },	
{ 654,	3786 },	
{ 659,	3785 },	
{ 666,	3785 },	
{ 672,	3784 },	
{ 675,	3783 },	
{ 679,	3781 },	
{ 687,	3780 },	
{ 695,	3778 },	
{ 702,	3777 },	
{ 709,	3774 },	
{ 716,	3772 },	
{ 719,	3768 },	
{ 726,	3762 },	
{ 737,	3758 },	
{ 749,	3752 },	
{ 768,	3743 },	
{ 794,	3733 },	
{ 822,	3721 },	
{ 859,	3706 },	
{ 904,	3688 },	
{ 939,	3666 },	
{ 955,	3638 },	
{ 982,	3609 },	
{ 1013,	3581 },	
{ 1070,	3553 },	
{ 1155,	3524 },	
{ 1295,	3481 },	
{ 1584,	3410 },	
{ 191,	3376 },	
{ 371,	3218 },	
{ 1266,	2942 },	
{ 1266,	2942 },	
{ 1266,	2942 },	
{ 1266,	2942 },	
{ 1266,	2942 },	
{ 1266,	2942 },	
{ 1266,	2942 },	
{ 1266,	2942 }

};           

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
//DOD0	R 0
{ 233,	4172 },	
{ 239,	4139 },	
{ 298,	4099 },	
{ 355,	4077 },	
{ 368,	4056 },	
{ 378,	4034 },	
{ 378,	4013 },	
{ 383,	3996 },	
{ 390,	3985 },	
{ 397,	3977 },	
{ 402,	3969 },	
{ 402,	3959 },	
{ 410,	3951 },	
{ 413,	3941 },	
{ 417,	3931 },	
{ 425,	3923 },	
{ 425,	3913 },	
{ 425,	3903 },	
{ 427,	3894 },	
{ 422,	3883 },	
{ 416,	3873 },	
{ 413,	3863 },	
{ 409,	3851 },	
{ 397,	3839 },	
{ 437,	3847 },	
{ 202,	3828 },	
{ 378,	3814 },	
{ 386,	3807 },	
{ 383,	3800 },	
{ 383,	3795 },	
{ 389,	3792 },	
{ 391,	3788 },	
{ 394,	3786 },	
{ 398,	3785 },	
{ 397,	3784 },	
{ 404,	3784 },	
{ 409,	3784 },	
{ 412,	3783 },	
{ 412,	3781 },	
{ 416,	3781 },	
{ 424,	3781 },	
{ 425,	3780 },	
{ 428,	3778 },	
{ 431,	3778 },	
{ 440,	3776 },	
{ 444,	3774 },	
{ 447,	3769 },	
{ 449,	3764 },	
{ 461,	3756 },	
{ 465,	3743 },	
{ 481,	3727 },	
{ 506,	3708 },	
{ 529,	3685 },	
{ 545,	3661 },	
{ 550,	3633 },	
{ 554,	3606 },	
{ 570,	3578 },	
{ 605,	3556 },	
{ 650,	3533 },	
{ 797,	3533 },	
{ 967,	3497 },	
{ 1318,	3421 },	
{ 1201,	3304 },	
{ 873,	3172 },	
{ 873,	3172 },	
{ 873,	3172 },	
{ 873,	3172 },	
{ 873,	3172 },	
{ 873,	3172 },	
{ 873,	3172 }	

};           

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
//DOD0	R 25
{ 150,	4171 },	
{ 173,	4147 },	
{ 178,	4128 },	
{ 175,	4111 },	
{ 178,	4095 },	
{ 176,	4079 },	
{ 178,	4066 },	
{ 178,	4053 },	
{ 180,	4038 },	
{ 184,	4023 },	
{ 183,	4009 },	
{ 184,	3997 },	
{ 194,	3987 },	
{ 194,	3977 },	
{ 198,	3966 },	
{ 208,	3958 },	
{ 202,	3946 },	
{ 208,	3937 },	
{ 210,	3927 },	
{ 211,	3917 },	
{ 218,	3909 },	
{ 216,	3900 },	
{ 222,	3892 },	
{ 228,	3885 },	
{ 233,	3877 },	
{ 234,	3870 },	
{ 232,	3862 },	
{ 234,	3854 },	
{ 230,	3845 },	
{ 220,	3835 },	
{ 205,	3823 },	
{ 199,	3814 },	
{ 191,	3804 },	
{ 183,	3796 },	
{ 178,	3790 },	
{ 173,	3784 },	
{ 175,	3780 },	
{ 175,	3777 },	
{ 172,	3775 },	
{ 176,	3772 },	
{ 180,	3772 },	
{ 180,	3771 },	
{ 180,	3771 },	
{ 184,	3770 },	
{ 183,	3769 },	
{ 184,	3770 },	
{ 187,	3770 },	
{ 189,	3769 },	
{ 192,	3766 },	
{ 192,	3765 },	
{ 198,	3764 },	
{ 195,	3760 },	
{ 198,	3757 },	
{ 189,	3750 },	
{ 190,	3741 },	
{ 198,	3731 },	
{ 198,	3716 },	
{ 201,	3696 },	
{ 212,	3676 },	
{ 220,	3654 },	
{ 222,	3629 },	
{ 214,	3601 },	
{ 212,	3575 },	
{ 225,	3555 },	
{ 237,	3536 },	
{ 255,	3515 },	
{ 292,	3483 },	
{ 248,	3398 },	
{ 290,	3280 },	
{ 403,	3079 }

};           

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
//DOD0	R 50
{ 123,	4177 },	
{ 143,	4155 },	
{ 143,	4135 },	
{ 140,	4116 },	
{ 189,	4098 },	
{ 187,	4082 },	
{ 184,	4067 },	
{ 185,	4051 },	
{ 193,	4038 },	
{ 190,	4023 },	
{ 183,	4007 },	
{ 194,	3997 },	
{ 192,	3984 },	
{ 191,	3971 },	
{ 190,	3960 },	
{ 192,	3947 },	
{ 191,	3935 },	
{ 197,	3925 },	
{ 192,	3915 },	
{ 205,	3908 },	
{ 202,	3897 },	
{ 206,	3888 },	
{ 207,	3879 },	
{ 217,	3872 },	
{ 217,	3863 },	
{ 219,	3855 },	
{ 220,	3847 },	
{ 214,	3836 },	
{ 200,	3824 },	
{ 188,	3812 },	
{ 175,	3801 },	
{ 164,	3793 },	
{ 164,	3785 },	
{ 162,	3782 },	
{ 161,	3778 },	
{ 153,	3772 },	
{ 161,	3770 },	
{ 160,	3770 },	
{ 157,	3766 },	
{ 163,	3767 },	
{ 163,	3766 },	
{ 168,	3765 },	
{ 172,	3765 },	
{ 171,	3763 },	
{ 175,	3762 },	
{ 171,	3757 },	
{ 164,	3749 },	
{ 175,	3747 },	
{ 181,	3742 },	
{ 181,	3733 },	
{ 188,	3725 },	
{ 200,	3713 },	
{ 214,	3697 },	
{ 219,	3677 },	
{ 224,	3655 },	
{ 235,	3631 },	
{ 237,	3604 },	
{ 229,	3577 },	
{ 237,	3554 },	
{ 266,	3535 },	
{ 355,	3504 },	
{ 451,	3430 },	
{ 630,	3322 },	
{ 198,	3149 },	
{ 198,	3149 },	
{ 198,	3149 },	
{ 198,	3149 },	
{ 198,	3149 },	
{ 198,	3149 },	
{ 198,	3149 }	

}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

