/*
 * File: INS.h
 *
 * Code generated for Simulink model 'INS'.
 *
 * Model version                  : 1.3911
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Aug 17 14:41:30 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_INS_h_
#define RTW_HEADER_INS_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef INS_COMMON_INCLUDES_
# define INS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* INS_COMMON_INCLUDES_ */

#include "arm_math.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_INS_T RT_MODEL_INS_T;

#ifndef DEFINED_TYPEDEF_FOR_IMU_Bus_
#define DEFINED_TYPEDEF_FOR_IMU_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T gyr_x;
  real32_T gyr_y;
  real32_T gyr_z;
  real32_T acc_x;
  real32_T acc_y;
  real32_T acc_z;
} IMU_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MAG_Bus_
#define DEFINED_TYPEDEF_FOR_MAG_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T mag_x;
  real32_T mag_y;
  real32_T mag_z;
} MAG_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Barometer_Bus_
#define DEFINED_TYPEDEF_FOR_Barometer_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T pressure;
  real32_T temperature;
} Barometer_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_GPS_uBlox_Bus_
#define DEFINED_TYPEDEF_FOR_GPS_uBlox_Bus_

typedef struct {
  uint32_T timestamp;
  uint32_T iTOW;
  uint16_T year;
  uint8_T month;
  uint8_T day;
  uint8_T hour;
  uint8_T min;
  uint8_T sec;
  uint8_T valid;
  uint32_T tAcc;
  int32_T nano;
  uint8_T fixType;
  uint8_T flags;
  uint8_T reserved1;
  uint8_T numSV;
  int32_T lon;
  int32_T lat;
  int32_T height;
  int32_T hMSL;
  uint32_T hAcc;
  uint32_T vAcc;
  int32_T velN;
  int32_T velE;
  int32_T velD;
  int32_T gSpeed;
  int32_T heading;
  uint32_T sAcc;
  uint32_T headingAcc;
  uint16_T pDOP;
  uint16_T reserved2;
} GPS_uBlox_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Rangefinder_Bus_
#define DEFINED_TYPEDEF_FOR_Rangefinder_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T distance;
} Rangefinder_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Optical_Flow_Bus_
#define DEFINED_TYPEDEF_FOR_Optical_Flow_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T vx;
  real32_T vy;
  uint8_T quality;
  uint8_T reserved1;
  uint16_T reserved2;
} Optical_Flow_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AirSpeed_Bus_
#define DEFINED_TYPEDEF_FOR_AirSpeed_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T diff_pressure;
  real32_T temperature;
} AirSpeed_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_External_Pos_Bus_
#define DEFINED_TYPEDEF_FOR_External_Pos_Bus_

typedef struct {
  uint32_T timestamp;
  uint32_T field_valid;
  real32_T x;
  real32_T y;
  real32_T z;
  real32_T phi;
  real32_T theta;
  real32_T psi;
} External_Pos_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_INS_Out_Bus_
#define DEFINED_TYPEDEF_FOR_INS_Out_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T phi;
  real32_T theta;
  real32_T psi;
  real32_T quat[4];
  real32_T p;
  real32_T q;
  real32_T r;
  real32_T ax;
  real32_T ay;
  real32_T az;
  real32_T vn;
  real32_T ve;
  real32_T vd;
  real32_T airspeed;
  real_T lat;
  real_T lon;
  real_T alt;
  real_T lat_0;
  real_T lon_0;
  real_T alt_0;
  real_T dx_dlat;
  real_T dy_dlon;
  real32_T x_R;
  real32_T y_R;
  real32_T h_R;
  real32_T h_AGL;
  uint32_T flag;
  uint32_T status;
} INS_Out_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TYt7YeNdxIDXfczXumtXXB_
#define DEFINED_TYPEDEF_FOR_struct_TYt7YeNdxIDXfczXumtXXB_

typedef struct {
  uint32_T period;
  int8_T model_info[16];
} struct_TYt7YeNdxIDXfczXumtXXB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_6ZFSSBscNEvOifNJsobUVH_
#define DEFINED_TYPEDEF_FOR_struct_6ZFSSBscNEvOifNJsobUVH_

typedef struct {
  real32_T GPS_HOR_Q_BIAS;
  real32_T GPS_HOR_Q_SCALE;
  real32_T GPS_VER_Q_BIAS;
  real32_T GPS_VER_Q_SCALE;
  real32_T GPS_VEL_Q_BIAS;
  real32_T GPS_VEL_Q_SCALE;
  real32_T ATT_GAIN;
  real32_T HEADING_GAIN;
  real32_T MAG_GAIN;
  real32_T HOVER_MAG_GAIN;
  uint8_T MAG_AIR_EN;
  real32_T BIAS_G_GAIN;
  real32_T GPS_POS_GAIN;
  real32_T GPS_ALT_GAIN;
  real32_T GPS_VEL_GAIN;
  real32_T GPS_BIAS_A_GAIN;
  uint32_T GPS_POS_DELAY;
  uint32_T GPS_VEL_DELAY;
  real32_T OPF_VEL_GAIN;
  real32_T OPF_BIAS_A_GAIN;
  uint32_T OPF_VEL_DELAY;
  real32_T BARO_H_GAIN;
  real32_T BARO_VZ_GAIN;
  real32_T BARO_BIAS_AZ_GAIN;
  uint32_T BARO_H_DELAY;
  real32_T RF_H_GAIN;
  real32_T RF_VZ_GAIN;
  real32_T RF_BIAS_AZ_GAIN;
  uint32_T RF_H_DELAY;
  real32_T EXTPOS_POS_GAIN;
  real32_T EXTPOS_VEL_GAIN;
  real32_T EXTPOS_BIAS_A_GAIN;
  uint32_T EXTPOS_POS_DELAY;
} struct_6ZFSSBscNEvOifNJsobUVH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Gsh1YUlqR57cYRpVuxG74E_
#define DEFINED_TYPEDEF_FOR_struct_Gsh1YUlqR57cYRpVuxG74E_

typedef struct {
  real_T dt;
  real32_T g;
  real32_T wmm_mag[629];
  real32_T wmm_dec[629];
  real32_T wmm_inc[629];
} struct_Gsh1YUlqR57cYRpVuxG74E;

#endif

/* Block signals (default storage) */
typedef struct {
  real_T DataTypeConversion;           /* '<S403>/Data Type Conversion' */
  real_T DataTypeConversion1;          /* '<S403>/Data Type Conversion1' */
  real_T Multiply2;                    /* '<S419>/Multiply2' */
  real_T Rm;                           /* '<S419>/Product3' */
  real32_T Divide;                     /* '<S377>/Divide' */
  real32_T Merge;                      /* '<S280>/Merge' */
  real32_T Merge_e;                    /* '<S281>/Merge' */
  real32_T Merge_n[2];                 /* '<S230>/Merge' */
  real32_T rf_height_bias;             /* '<S273>/Switch' */
  real32_T Sum1[3];                    /* '<S267>/Sum1' */
  real32_T Sum1_p[3];                  /* '<S258>/Sum1' */
  real32_T Sum1_c[3];                  /* '<S249>/Sum1' */
  real32_T Sum1_pu[3];                 /* '<S240>/Sum1' */
  real32_T Saturation;                 /* '<S240>/Saturation' */
  real32_T DataTypeConversion_n[2];    /* '<S231>/Data Type Conversion' */
  real32_T Sum1_f[6];                  /* '<S220>/Sum1' */
  real32_T Sum1_o[6];                  /* '<S210>/Sum1' */
  real32_T Sum1_b[6];                  /* '<S201>/Sum1' */
  real32_T Merge_l[4];                 /* '<S145>/Merge' */
  real32_T OutportBufferForquat_0[4];  /* '<S129>/DCM To Quaternion' */
  real32_T Integrator[3];              /* '<S92>/Integrator' */
} BlockIO_INS_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay1_DSTATE;                /* '<S359>/Delay1' */
  real_T Delay_DSTATE[2];              /* '<S360>/Delay' */
  real_T Delay1_DSTATE_o[2];           /* '<S360>/Delay1' */
  real32_T Delay_2_DSTATE;             /* '<Root>/Delay' */
  real32_T Delay_3_DSTATE;             /* '<Root>/Delay' */
  real32_T Delay_4_DSTATE;             /* '<Root>/Delay' */
  real32_T Delay_8_DSTATE[9];          /* '<Root>/Delay' */
  real32_T DiscreteTimeIntegrator5_DSTATE[2];/* '<S448>/Discrete-Time Integrator5' */
  real32_T DiscreteTimeIntegrator_DSTATE;/* '<S436>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_DSTATE;/* '<S436>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator1_DSTAT_g;/* '<S416>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator1_DSTAT_m;/* '<S417>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator_DSTATE_k;/* '<S416>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_l;/* '<S417>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE_a;             /* '<S391>/Delay' */
  real32_T Delay_DSTATE_d;             /* '<S377>/Delay' */
  real32_T Delay_4_DSTATE_k;           /* '<S56>/Delay' */
  real32_T Delay_5_DSTATE;             /* '<S56>/Delay' */
  real32_T Delay_6_DSTATE;             /* '<S56>/Delay' */
  real32_T DiscreteTimeIntegrator_DSTATE_f;/* '<S312>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_DSTAT_h;/* '<S312>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator_DSTATE_b;/* '<S328>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_c;/* '<S340>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_n;/* '<S327>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_h;/* '<S339>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTAT_k3;/* '<S341>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE_b[3];          /* '<S277>/Delay' */
  real32_T Delay_DSTATE_l[6];          /* '<S226>/Delay' */
  real32_T h_delay_DSTATE[3];          /* '<S271>/h_delay' */
  real32_T h_delay_DSTATE_l[75];       /* '<S262>/h_delay' */
  real32_T vd_delay_DSTATE[50];        /* '<S262>/vd_delay' */
  real32_T Delay_DSTATE_p[3];          /* '<S251>/Delay' */
  real32_T x_delay_DSTATE[25];         /* '<S253>/x_delay' */
  real32_T Delay_DSTATE_m;             /* '<S255>/Delay' */
  real32_T Delay_DSTATE_dr[3];         /* '<S242>/Delay' */
  real32_T x_delay_DSTATE_b[5];        /* '<S244>/x_delay' */
  real32_T Delay_DSTATE_h;             /* '<S246>/Delay' */
  real32_T vn_delay_DSTATE[3];         /* '<S224>/vn_delay' */
  real32_T ve_delay_DSTATE[3];         /* '<S224>/ve_delay' */
  real32_T x_delay_DSTATE_k[75];       /* '<S214>/x_delay' */
  real32_T x_delay1_DSTATE[75];        /* '<S214>/x_delay1' */
  real32_T vn_delay_DSTATE_n[50];      /* '<S214>/vn_delay' */
  real32_T vn_delay1_DSTATE[50];       /* '<S214>/vn_delay1' */
  real32_T x_delay_DSTATE_l[25];       /* '<S205>/x_delay' */
  real32_T x_delay1_DSTATE_m[25];      /* '<S205>/x_delay1' */
  real32_T Delay_DSTATE_k[2];          /* '<S207>/Delay' */
  real32_T DiscreteTimeIntegrator5_DSTAT_o[2];/* '<S181>/Discrete-Time Integrator5' */
  real32_T DiscreteTimeIntegrator5_DSTAT_m;/* '<S179>/Discrete-Time Integrator5' */
  real32_T DiscreteTimeIntegrator5_DSTA_ow;/* '<S180>/Discrete-Time Integrator5' */
  real32_T Delay_4_DSTATE_d;           /* '<S57>/Delay' */
  real32_T Delay_7_DSTATE[9];          /* '<S57>/Delay' */
  real32_T Delay_8_DSTATE_l[9];        /* '<S57>/Delay' */
  real32_T Delay_10_DSTATE[3];         /* '<S57>/Delay' */
  real32_T DiscreteTimeIntegrator_DSTAT_kk[4];/* '<S113>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator2_DSTATE[3];/* '<S114>/Discrete-Time Integrator2' */
  real32_T DiscreteTimeIntegrator1_DSTAT_o[3];/* '<S89>/Discrete-Time Integrator1' */
  real32_T Delay_DSTATE_lv[600];       /* '<S87>/Delay' */
  real32_T DiscreteTimeIntegrator_DSTAT_lq[3];/* '<S89>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE_b3;            /* '<S94>/Delay' */
  real32_T DiscreteTimeIntegrator1_DSTA_m3[3];/* '<S105>/Discrete-Time Integrator1' */
  real32_T Delay_DSTATE_lt;            /* '<S101>/Delay' */
  real32_T DiscreteTimeIntegrator_DSTAT_hs[3];/* '<S105>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_DSTAT_b[3];/* '<S111>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator_DSTAT_ce[3];/* '<S111>/Discrete-Time Integrator' */
  real32_T Integrator_DSTATE[3];       /* '<S92>/Integrator' */
  real32_T Integrator1_DSTATE[3];      /* '<S92>/Integrator1' */
  real32_T DiscreteTimeIntegrator_DSTAT_bo;/* '<S12>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTAT_hi;/* '<S15>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTAT_b3;/* '<S17>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTAT_ca;/* '<S11>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_e;/* '<S13>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTAT_kg;/* '<S14>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_a;/* '<S16>/Discrete-Time Integrator' */
  int32_T UnitDelay_DSTATE;            /* '<S412>/Unit Delay' */
  uint32_T DelayInput1_DSTATE;         /* '<S458>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTAT_e3;/* '<S454>/Discrete-Time Integrator' */
  uint32_T DiscreteTimeIntegrator_DSTAT_cv;/* '<S455>/Discrete-Time Integrator' */
  uint32_T DelayInput1_DSTATE_k;       /* '<S450>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTATE_g;/* '<S447>/Discrete-Time Integrator' */
  uint32_T DelayInput1_DSTATE_n;       /* '<S443>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTAT_lg;/* '<S429>/Discrete-Time Integrator' */
  uint32_T DelayInput1_DSTATE_h;       /* '<S423>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTAT_lp;/* '<S421>/Discrete-Time Integrator' */
  uint32_T DelayInput1_DSTATE_i;       /* '<S415>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTATE_i;/* '<S406>/Discrete-Time Integrator' */
  uint32_T DelayInput1_DSTATE_b;       /* '<S397>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTAT_nj;/* '<S389>/Discrete-Time Integrator' */
  uint32_T DelayInput1_DSTATE_g;       /* '<S380>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_c;       /* '<S383>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTAT_nm;/* '<S376>/Discrete-Time Integrator' */
  uint32_T Delay_DSTATE_f;             /* '<S378>/Delay' */
  uint32_T Delay1_DSTATE_i;            /* '<S377>/Delay1' */
  uint32_T DelayInput1_DSTATE_l;       /* '<S268>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_d;       /* '<S259>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_a;       /* '<S250>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_lg;      /* '<S241>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_m;       /* '<S221>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_d0;      /* '<S211>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_no;      /* '<S202>/Delay Input1' */
  uint32_T Delay_DSTATE_i;             /* '<S138>/Delay' */
  uint32_T Delay_DSTATE_n;             /* '<S135>/Delay' */
  uint32_T DiscreteTimeIntegrator_DSTATE_d;/* '<S99>/Discrete-Time Integrator' */
  uint32_T Output_DSTATE;              /* '<S4>/Output' */
  real32_T Memory_PreviousInput;       /* '<S273>/Memory' */
  real32_T Memory_PreviousInput_f[3];  /* '<S269>/Memory' */
  real32_T Memory_PreviousInput_b;     /* '<S264>/Memory' */
  real32_T Memory_PreviousInput_e[3];  /* '<S260>/Memory' */
  real32_T Memory_PreviousInput_n[6];  /* '<S222>/Memory' */
  real32_T Memory_PreviousInput_d[2];  /* '<S217>/Memory' */
  real32_T Memory_PreviousInput_h[6];  /* '<S212>/Memory' */
  real32_T Memory_PreviousInput_m[6];  /* '<S203>/Memory' */
  uint8_T Delay_DSTATE_j;              /* '<S459>/Delay' */
  uint8_T Delay_DSTATE_fp;             /* '<S444>/Delay' */
  uint8_T Delay_DSTATE_bw;             /* '<S424>/Delay' */
  uint8_T Delay_DSTATE_e;              /* '<S390>/Delay' */
  uint8_T DelayInput1_DSTATE_cn;       /* '<S392>/Delay Input1' */
  uint8_T Delay_DSTATE_g;              /* '<S398>/Delay' */
  uint8_T Delay_DSTATE_gj;             /* '<S393>/Delay' */
  uint8_T Delay_DSTATE_i1;             /* '<S384>/Delay' */
  boolean_T Delay_1_DSTATE;            /* '<Root>/Delay' */
  boolean_T Delay_DSTATE_c;            /* '<S451>/Delay' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S321>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_hg;     /* '<S337>/Delay Input1' */
  boolean_T Delay_DSTATE_kh;           /* '<S328>/Delay' */
  boolean_T DelayInput1_DSTATE_j;      /* '<S322>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S350>/Delay Input1' */
  boolean_T Delay_DSTATE_k4;           /* '<S340>/Delay' */
  boolean_T Delay_DSTATE_ng;           /* '<S327>/Delay' */
  boolean_T DelayInput1_DSTATE_kh;     /* '<S332>/Delay Input1' */
  boolean_T Delay_DSTATE_c1;           /* '<S339>/Delay' */
  boolean_T DelayInput1_DSTATE_ch;     /* '<S345>/Delay Input1' */
  boolean_T Delay_DSTATE_n2;           /* '<S341>/Delay' */
  boolean_T DelayInput1_DSTATE_jx;     /* '<S355>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_dp;     /* '<S361>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_mw;     /* '<S363>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d2;     /* '<S275>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ib;     /* '<S266>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a4;     /* '<S257>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S248>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_gn;     /* '<S219>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_dp5;    /* '<S209>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_pr;     /* '<S133>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_mm;     /* '<S140>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ff;     /* '<S91>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ii;     /* '<S97>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d2s;    /* '<S108>/Delay Input1' */
  boolean_T Delay_DSTATE_bn;           /* '<S12>/Delay' */
  boolean_T Delay_DSTATE_cx;           /* '<S15>/Delay' */
  boolean_T Delay_DSTATE_l0;           /* '<S17>/Delay' */
  boolean_T Delay_DSTATE_cn;           /* '<S11>/Delay' */
  boolean_T Delay_DSTATE_pk;           /* '<S13>/Delay' */
  boolean_T Delay_DSTATE_db;           /* '<S14>/Delay' */
  boolean_T Delay_DSTATE_ly;           /* '<S16>/Delay' */
  boolean_T DelayInput1_DSTATE_dx;     /* '<S21>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_mu;     /* '<S26>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_dq;     /* '<S31>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f4;     /* '<S36>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ng;     /* '<S41>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_dql;    /* '<S46>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_fq;     /* '<S51>/Delay Input1' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S455>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_k;/* '<S436>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator1_PrevRes;/* '<S436>/Discrete-Time Integrator1' */
  int8_T DiscreteTimeIntegrator1_PrevR_l;/* '<S416>/Discrete-Time Integrator1' */
  int8_T DiscreteTimeIntegrator1_PrevR_j;/* '<S417>/Discrete-Time Integrator1' */
  int8_T DiscreteTimeIntegrator_PrevRe_a;/* '<S416>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_j;/* '<S417>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_h;/* '<S312>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator1_PrevR_d;/* '<S312>/Discrete-Time Integrator1' */
  int8_T DiscreteTimeIntegrator_PrevR_ky;/* '<S328>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_l;/* '<S340>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_d;/* '<S327>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_b;/* '<S339>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevR_kt;/* '<S341>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevR_bk;/* '<S113>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator1_PrevR_p;/* '<S89>/Discrete-Time Integrator1' */
  int8_T DiscreteTimeIntegrator_PrevRe_f;/* '<S89>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator1_PrevR_m;/* '<S105>/Discrete-Time Integrator1' */
  int8_T DiscreteTimeIntegrator_PrevRe_n;/* '<S99>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_e;/* '<S105>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator1_PrevR_o;/* '<S111>/Discrete-Time Integrator1' */
  int8_T DiscreteTimeIntegrator_PrevR_nh;/* '<S111>/Discrete-Time Integrator' */
  int8_T Integrator_PrevResetState;    /* '<S92>/Integrator' */
  int8_T Integrator1_PrevResetState;   /* '<S92>/Integrator1' */
  int8_T DiscreteTimeIntegrator_PrevR_nf;/* '<S12>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_m;/* '<S15>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevR_dj;/* '<S17>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevR_h1;/* '<S11>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevR_as;/* '<S13>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_o;/* '<S14>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevR_ar;/* '<S16>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator5_IC_LOAD;/* '<S448>/Discrete-Time Integrator5' */
  uint8_T DiscreteTimeIntegrator1_IC_LOAD;/* '<S436>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator1_IC_LO_j;/* '<S416>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator1_IC_LO_e;/* '<S417>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator1_IC_LO_k;/* '<S312>/Discrete-Time Integrator1' */
  uint8_T icLoad;                      /* '<S271>/h_delay' */
  uint8_T icLoad_o;                    /* '<S262>/h_delay' */
  uint8_T icLoad_f;                    /* '<S262>/vd_delay' */
  uint8_T icLoad_p;                    /* '<S253>/x_delay' */
  uint8_T icLoad_a;                    /* '<S244>/x_delay' */
  uint8_T icLoad_h;                    /* '<S224>/vn_delay' */
  uint8_T icLoad_j;                    /* '<S224>/ve_delay' */
  uint8_T icLoad_op;                   /* '<S214>/x_delay' */
  uint8_T icLoad_i;                    /* '<S214>/x_delay1' */
  uint8_T icLoad_m;                    /* '<S214>/vn_delay' */
  uint8_T icLoad_jp;                   /* '<S214>/vn_delay1' */
  uint8_T icLoad_hw;                   /* '<S205>/x_delay' */
  uint8_T icLoad_od;                   /* '<S205>/x_delay1' */
  uint8_T DiscreteTimeIntegrator5_IC_LO_p;/* '<S181>/Discrete-Time Integrator5' */
  uint8_T DiscreteTimeIntegrator5_IC_LO_n;/* '<S179>/Discrete-Time Integrator5' */
  uint8_T DiscreteTimeIntegrator5_IC_L_ns;/* '<S180>/Discrete-Time Integrator5' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S113>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator1_IC_LO_i;/* '<S89>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator1_IC_LO_m;/* '<S105>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator1_IC_LO_l;/* '<S111>/Discrete-Time Integrator1' */
  uint8_T Integrator1_IC_LOADING;      /* '<S92>/Integrator1' */
  boolean_T Relay_Mode;                /* '<S447>/Relay' */
  boolean_T Relay_Mode_n;              /* '<S315>/Relay' */
  boolean_T Relay1_Mode;               /* '<S315>/Relay1' */
  boolean_T Relay_Mode_n5;             /* '<S130>/Relay' */
  boolean_T Relay_Mode_nf;             /* '<S93>/Relay' */
  boolean_T Relay1_Mode_l;             /* '<S72>/Relay1' */
  boolean_T Relay1_Mode_j;             /* '<S9>/Relay1' */
  boolean_T Reference_Height_MODE;     /* '<S375>/Reference_Height' */
  boolean_T Rangefinder_Correct_MODE;  /* '<S239>/Rangefinder_Correct' */
  boolean_T GPS_Correct_MODE;          /* '<S238>/GPS_Correct' */
  boolean_T ExternalPos_Correct_MODE;  /* '<S237>/ExternalPos_Correct' */
  boolean_T Baro_Correct_MODE;         /* '<S236>/Baro_Correct' */
  boolean_T OptFlow_Correct_MODE;      /* '<S200>/OptFlow_Correct' */
  boolean_T GPS_Correct_MODE_o;        /* '<S199>/GPS_Correct' */
  boolean_T ExternalPos_Correct_MODE_k;/* '<S198>/ExternalPos_Correct' */
  boolean_T GPS_Meas_Acc_MODE;         /* '<S88>/GPS_Meas_Acc' */
} D_Work_INS_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState WGS84_Model_Trig_ZCE;     /* '<S368>/WGS84_Model' */
  ZCSigState h_delay_Reset_ZCE;        /* '<S271>/h_delay' */
  ZCSigState h_delay_Reset_ZCE_m;      /* '<S262>/h_delay' */
  ZCSigState vd_delay_Reset_ZCE;       /* '<S262>/vd_delay' */
  ZCSigState x_delay_Reset_ZCE;        /* '<S253>/x_delay' */
  ZCSigState x_delay_Reset_ZCE_l;      /* '<S244>/x_delay' */
  ZCSigState vn_delay_Reset_ZCE;       /* '<S224>/vn_delay' */
  ZCSigState ve_delay_Reset_ZCE;       /* '<S224>/ve_delay' */
  ZCSigState x_delay_Reset_ZCE_b;      /* '<S214>/x_delay' */
  ZCSigState x_delay1_Reset_ZCE;       /* '<S214>/x_delay1' */
  ZCSigState vn_delay_Reset_ZCE_p;     /* '<S214>/vn_delay' */
  ZCSigState vn_delay1_Reset_ZCE;      /* '<S214>/vn_delay1' */
  ZCSigState x_delay_Reset_ZCE_lr;     /* '<S205>/x_delay' */
  ZCSigState x_delay1_Reset_ZCE_b;     /* '<S205>/x_delay1' */
} PrevZCSigStates_INS_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  IMU_Bus IMU;                         /* '<Root>/IMU' */
  MAG_Bus MAG;                         /* '<Root>/MAG' */
  Barometer_Bus Barometer;             /* '<Root>/Barometer' */
  GPS_uBlox_Bus GPS_uBlox;             /* '<Root>/GPS_uBlox' */
  Rangefinder_Bus Rangefinder;         /* '<Root>/Rangefinder' */
  Optical_Flow_Bus Optical_Flow;       /* '<Root>/Optical_Flow' */
  AirSpeed_Bus AirSpeed;               /* '<Root>/AirSpeed' */
  External_Pos_Bus External_Pos;       /* '<Root>/External_Pos' */
} ExternalInputs_INS_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  INS_Out_Bus INS_Out;                 /* '<Root>/INS_Out' */
} ExternalOutputs_INS_T;

/* Parameters for system: '<S281>/Baro_Velocity' */
struct rtP_Baro_Velocity_INS_T_ {
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S285>/Constant'
                                        */
};

/* Parameters for system: '<S281>/Baro_Velocity' */
typedef struct rtP_Baro_Velocity_INS_T_ rtP_Baro_Velocity_INS_T;

/* Parameters (default storage) */
struct Parameters_INS_T_ {
  struct_Gsh1YUlqR57cYRpVuxG74E INS_CONST;/* Variable: INS_CONST
                                           * Referenced by:
                                           *   '<S432>/Declination_Lookup_Table'
                                           *   '<S432>/Inclination_Lookup_Table'
                                           *   '<S432>/Magnitude_Lookup_Table'
                                           *   '<S69>/Constant'
                                           *   '<S278>/Constant1'
                                           */
  real_T WMM_LUT_resolution;           /* Mask Parameter: WMM_LUT_resolution
                                        * Referenced by: '<S432>/rad_to_index'
                                        */
  int32_T valid_samples_const;         /* Mask Parameter: valid_samples_const
                                        * Referenced by: '<S413>/Constant'
                                        */
  real32_T Sensor_Valid_acc_max;       /* Mask Parameter: Sensor_Valid_acc_max
                                        * Referenced by: '<S425>/Upper Limit'
                                        */
  real32_T Sensor_Valid_acc_min;       /* Mask Parameter: Sensor_Valid_acc_min
                                        * Referenced by: '<S425>/Lower Limit'
                                        */
  real32_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S98>/Constant'
                                        */
  real32_T CompareToConstant_const_g;  /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S102>/Constant'
                                        */
  real32_T CompareToConstant_const_h;  /* Mask Parameter: CompareToConstant_const_h
                                        * Referenced by: '<S109>/Constant'
                                        */
  real32_T CompareToConstant_const_n;  /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S110>/Constant'
                                        */
  real32_T CompareToConstant_const_p;  /* Mask Parameter: CompareToConstant_const_p
                                        * Referenced by: '<S131>/Constant'
                                        */
  real32_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S132>/Constant'
                                        */
  real32_T Sensor_Valid_gyr_max;       /* Mask Parameter: Sensor_Valid_gyr_max
                                        * Referenced by: '<S426>/Upper Limit'
                                        */
  real32_T Sensor_Valid_gyr_min;       /* Mask Parameter: Sensor_Valid_gyr_min
                                        * Referenced by: '<S426>/Lower Limit'
                                        */
  real32_T IntervalTest_lowlimit;      /* Mask Parameter: IntervalTest_lowlimit
                                        * Referenced by: '<S134>/Lower Limit'
                                        */
  real32_T Sensor_Valid_mag_max;       /* Mask Parameter: Sensor_Valid_mag_max
                                        * Referenced by: '<S445>/Upper Limit'
                                        */
  real32_T Sensor_Valid_mag_min;       /* Mask Parameter: Sensor_Valid_mag_min
                                        * Referenced by: '<S445>/Lower Limit'
                                        */
  real32_T Sensor_Valid_max_alt;       /* Mask Parameter: Sensor_Valid_max_alt
                                        * Referenced by: '<S460>/Upper Limit'
                                        */
  real32_T Sensor_Valid_max_pressure;  /* Mask Parameter: Sensor_Valid_max_pressure
                                        * Referenced by: '<S385>/Upper Limit'
                                        */
  real32_T Sensor_Valid_max_temp;      /* Mask Parameter: Sensor_Valid_max_temp
                                        * Referenced by: '<S386>/Upper Limit'
                                        */
  real32_T Sensor_Valid_max_vel;       /* Mask Parameter: Sensor_Valid_max_vel
                                        * Referenced by:
                                        *   '<S452>/Upper Limit'
                                        *   '<S453>/Upper Limit'
                                        */
  real32_T Sensor_Valid_min_alt;       /* Mask Parameter: Sensor_Valid_min_alt
                                        * Referenced by: '<S460>/Lower Limit'
                                        */
  real32_T Sensor_Valid_min_pressure;  /* Mask Parameter: Sensor_Valid_min_pressure
                                        * Referenced by: '<S385>/Lower Limit'
                                        */
  real32_T Sensor_Valid_min_temp;      /* Mask Parameter: Sensor_Valid_min_temp
                                        * Referenced by: '<S386>/Lower Limit'
                                        */
  real32_T Sensor_Valid_min_vel;       /* Mask Parameter: Sensor_Valid_min_vel
                                        * Referenced by:
                                        *   '<S452>/Lower Limit'
                                        *   '<S453>/Lower Limit'
                                        */
  real32_T valid_check2_time_out;      /* Mask Parameter: valid_check2_time_out
                                        * Referenced by: '<S23>/Constant'
                                        */
  real32_T valid_check5_time_out;      /* Mask Parameter: valid_check5_time_out
                                        * Referenced by: '<S38>/Constant'
                                        */
  real32_T valid_check8_time_out;      /* Mask Parameter: valid_check8_time_out
                                        * Referenced by: '<S48>/Constant'
                                        */
  real32_T valid_check1_time_out;      /* Mask Parameter: valid_check1_time_out
                                        * Referenced by: '<S18>/Constant'
                                        */
  real32_T valid_check3_time_out;      /* Mask Parameter: valid_check3_time_out
                                        * Referenced by: '<S28>/Constant'
                                        */
  real32_T valid_check4_time_out;      /* Mask Parameter: valid_check4_time_out
                                        * Referenced by: '<S33>/Constant'
                                        */
  real32_T valid_check6_time_out;      /* Mask Parameter: valid_check6_time_out
                                        * Referenced by: '<S43>/Constant'
                                        */
  real32_T valid_hold1_time_out;       /* Mask Parameter: valid_hold1_time_out
                                        * Referenced by: '<S334>/Constant'
                                        */
  real32_T valid_hold1_time_out_m;     /* Mask Parameter: valid_hold1_time_out_m
                                        * Referenced by: '<S347>/Constant'
                                        */
  real32_T valid_hold_time_out;        /* Mask Parameter: valid_hold_time_out
                                        * Referenced by: '<S329>/Constant'
                                        */
  real32_T valid_hold_time_out_d;      /* Mask Parameter: valid_hold_time_out_d
                                        * Referenced by: '<S342>/Constant'
                                        */
  real32_T valid_hold2_time_out;       /* Mask Parameter: valid_hold2_time_out
                                        * Referenced by: '<S352>/Constant'
                                        */
  real32_T IntervalTest_uplimit;       /* Mask Parameter: IntervalTest_uplimit
                                        * Referenced by: '<S134>/Upper Limit'
                                        */
  uint32_T xyvalid_BitMask;            /* Mask Parameter: xyvalid_BitMask
                                        * Referenced by: '<S389>/xy valid'
                                        */
  uint32_T heightvalid_BitMask;        /* Mask Parameter: heightvalid_BitMask
                                        * Referenced by: '<S389>/height valid'
                                        */
  uint32_T headingvalid_BitMask;       /* Mask Parameter: headingvalid_BitMask
                                        * Referenced by: '<S389>/heading valid'
                                        */
  uint32_T CompareToConstant4_const;   /* Mask Parameter: CompareToConstant4_const
                                        * Referenced by: '<S103>/Constant'
                                        */
  uint32_T valid_samples_const_k;      /* Mask Parameter: valid_samples_const_k
                                        * Referenced by: '<S142>/Constant'
                                        */
  uint32_T CompareToConstant_const_nb; /* Mask Parameter: CompareToConstant_const_nb
                                        * Referenced by: '<S379>/Constant'
                                        */
  uint32_T CompareToConstant4_const_e; /* Mask Parameter: CompareToConstant4_const_e
                                        * Referenced by: '<S414>/Constant'
                                        */
  uint32_T CompareToConstant_const_d;  /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S410>/Constant'
                                        */
  uint32_T CompareToConstant_const_m;  /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S461>/Constant'
                                        */
  uint32_T IntervalTest3_lowlimit;     /* Mask Parameter: IntervalTest3_lowlimit
                                        * Referenced by: '<S381>/Lower Limit'
                                        */
  uint32_T Sensor_Valid_timeout;       /* Mask Parameter: Sensor_Valid_timeout
                                        * Referenced by: '<S382>/Constant'
                                        */
  uint32_T Sensor_Valid_timeout_e;     /* Mask Parameter: Sensor_Valid_timeout_e
                                        * Referenced by: '<S396>/Constant'
                                        */
  uint32_T Sensor_Valid_timeout_a;     /* Mask Parameter: Sensor_Valid_timeout_a
                                        * Referenced by: '<S422>/Constant'
                                        */
  uint32_T Sensor_Valid_timeout_b;     /* Mask Parameter: Sensor_Valid_timeout_b
                                        * Referenced by: '<S442>/Constant'
                                        */
  uint32_T Sensor_Valid_timeout_ai;    /* Mask Parameter: Sensor_Valid_timeout_ai
                                        * Referenced by: '<S449>/Constant'
                                        */
  uint32_T Sensor_Valid_timeout_p;     /* Mask Parameter: Sensor_Valid_timeout_p
                                        * Referenced by: '<S457>/Constant'
                                        */
  uint32_T IntervalTest3_uplimit;      /* Mask Parameter: IntervalTest3_uplimit
                                        * Referenced by: '<S381>/Upper Limit'
                                        */
  uint32_T DetectChange_vinit;         /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S202>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_i;       /* Mask Parameter: DetectChange_vinit_i
                                        * Referenced by: '<S211>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_l;       /* Mask Parameter: DetectChange_vinit_l
                                        * Referenced by: '<S221>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_m;       /* Mask Parameter: DetectChange_vinit_m
                                        * Referenced by: '<S241>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_j;       /* Mask Parameter: DetectChange_vinit_j
                                        * Referenced by: '<S250>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_h;       /* Mask Parameter: DetectChange_vinit_h
                                        * Referenced by: '<S259>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_g;       /* Mask Parameter: DetectChange_vinit_g
                                        * Referenced by: '<S268>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_d;       /* Mask Parameter: DetectChange_vinit_d
                                        * Referenced by: '<S380>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_n;       /* Mask Parameter: DetectChange_vinit_n
                                        * Referenced by: '<S383>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_lj;      /* Mask Parameter: DetectChange_vinit_lj
                                        * Referenced by: '<S397>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_e;       /* Mask Parameter: DetectChange_vinit_e
                                        * Referenced by: '<S415>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_md;      /* Mask Parameter: DetectChange_vinit_md
                                        * Referenced by: '<S423>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_lp;      /* Mask Parameter: DetectChange_vinit_lp
                                        * Referenced by: '<S443>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_ju;      /* Mask Parameter: DetectChange_vinit_ju
                                        * Referenced by: '<S450>/Delay Input1'
                                        */
  uint32_T DetectChange_vinit_c;       /* Mask Parameter: DetectChange_vinit_c
                                        * Referenced by: '<S458>/Delay Input1'
                                        */
  boolean_T CompareToConstant1_const_m;/* Mask Parameter: CompareToConstant1_const_m
                                        * Referenced by: '<S24>/Constant'
                                        */
  boolean_T CompareToConstant1_const_j;/* Mask Parameter: CompareToConstant1_const_j
                                        * Referenced by: '<S39>/Constant'
                                        */
  boolean_T CompareToConstant1_const_g;/* Mask Parameter: CompareToConstant1_const_g
                                        * Referenced by: '<S49>/Constant'
                                        */
  boolean_T CompareToConstant1_const_e;/* Mask Parameter: CompareToConstant1_const_e
                                        * Referenced by: '<S19>/Constant'
                                        */
  boolean_T CompareToConstant1_const_ei;/* Mask Parameter: CompareToConstant1_const_ei
                                         * Referenced by: '<S29>/Constant'
                                         */
  boolean_T CompareToConstant1_const_ec;/* Mask Parameter: CompareToConstant1_const_ec
                                         * Referenced by: '<S34>/Constant'
                                         */
  boolean_T CompareToConstant1_const_em;/* Mask Parameter: CompareToConstant1_const_em
                                         * Referenced by: '<S44>/Constant'
                                         */
  boolean_T CompareToConstant2_const;  /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S20>/Constant'
                                        */
  boolean_T CompareToConstant2_const_c;/* Mask Parameter: CompareToConstant2_const_c
                                        * Referenced by: '<S25>/Constant'
                                        */
  boolean_T CompareToConstant2_const_n;/* Mask Parameter: CompareToConstant2_const_n
                                        * Referenced by: '<S30>/Constant'
                                        */
  boolean_T CompareToConstant2_const_b;/* Mask Parameter: CompareToConstant2_const_b
                                        * Referenced by: '<S35>/Constant'
                                        */
  boolean_T CompareToConstant2_const_i;/* Mask Parameter: CompareToConstant2_const_i
                                        * Referenced by: '<S40>/Constant'
                                        */
  boolean_T CompareToConstant2_const_l;/* Mask Parameter: CompareToConstant2_const_l
                                        * Referenced by: '<S45>/Constant'
                                        */
  boolean_T CompareToConstant2_const_i1;/* Mask Parameter: CompareToConstant2_const_i1
                                         * Referenced by: '<S50>/Constant'
                                         */
  boolean_T CompareToConstant1_const_i;/* Mask Parameter: CompareToConstant1_const_i
                                        * Referenced by: '<S335>/Constant'
                                        */
  boolean_T CompareToConstant2_const_j;/* Mask Parameter: CompareToConstant2_const_j
                                        * Referenced by: '<S336>/Constant'
                                        */
  boolean_T CompareToConstant1_const_a;/* Mask Parameter: CompareToConstant1_const_a
                                        * Referenced by: '<S348>/Constant'
                                        */
  boolean_T CompareToConstant2_const_d;/* Mask Parameter: CompareToConstant2_const_d
                                        * Referenced by: '<S349>/Constant'
                                        */
  boolean_T CompareToConstant1_const_h;/* Mask Parameter: CompareToConstant1_const_h
                                        * Referenced by: '<S330>/Constant'
                                        */
  boolean_T CompareToConstant2_const_a;/* Mask Parameter: CompareToConstant2_const_a
                                        * Referenced by: '<S331>/Constant'
                                        */
  boolean_T CompareToConstant1_const_hv;/* Mask Parameter: CompareToConstant1_const_hv
                                         * Referenced by: '<S343>/Constant'
                                         */
  boolean_T CompareToConstant2_const_dj;/* Mask Parameter: CompareToConstant2_const_dj
                                         * Referenced by: '<S344>/Constant'
                                         */
  boolean_T CompareToConstant1_const_l;/* Mask Parameter: CompareToConstant1_const_l
                                        * Referenced by: '<S353>/Constant'
                                        */
  boolean_T CompareToConstant2_const_h;/* Mask Parameter: CompareToConstant2_const_h
                                        * Referenced by: '<S354>/Constant'
                                        */
  boolean_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                        * Referenced by: '<S21>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_c;/* Mask Parameter: DetectRisePositive_vinit_c
                                        * Referenced by: '<S26>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_m;/* Mask Parameter: DetectRisePositive_vinit_m
                                        * Referenced by: '<S31>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_k;/* Mask Parameter: DetectRisePositive_vinit_k
                                        * Referenced by: '<S36>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_a;/* Mask Parameter: DetectRisePositive_vinit_a
                                        * Referenced by: '<S41>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_f;/* Mask Parameter: DetectRisePositive_vinit_f
                                        * Referenced by: '<S46>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_l;/* Mask Parameter: DetectRisePositive_vinit_l
                                        * Referenced by: '<S51>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit;      /* Mask Parameter: DetectIncrease_vinit
                                        * Referenced by: '<S91>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_i;    /* Mask Parameter: DetectIncrease_vinit_i
                                        * Referenced by: '<S97>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_d;    /* Mask Parameter: DetectIncrease_vinit_d
                                        * Referenced by: '<S108>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_fc;/* Mask Parameter: DetectRisePositive_vinit_fc
                                         * Referenced by: '<S133>/Delay Input1'
                                         */
  boolean_T DetectRisePositive1_vinit; /* Mask Parameter: DetectRisePositive1_vinit
                                        * Referenced by: '<S140>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_m;    /* Mask Parameter: DetectIncrease_vinit_m
                                        * Referenced by: '<S209>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_p;    /* Mask Parameter: DetectIncrease_vinit_p
                                        * Referenced by: '<S219>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_c;    /* Mask Parameter: DetectIncrease_vinit_c
                                        * Referenced by: '<S248>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_j;    /* Mask Parameter: DetectIncrease_vinit_j
                                        * Referenced by: '<S257>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_ji;   /* Mask Parameter: DetectIncrease_vinit_ji
                                        * Referenced by: '<S266>/Delay Input1'
                                        */
  boolean_T DetectIncrease_vinit_g;    /* Mask Parameter: DetectIncrease_vinit_g
                                        * Referenced by: '<S275>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_me;/* Mask Parameter: DetectRisePositive_vinit_me
                                         * Referenced by: '<S321>/Delay Input1'
                                         */
  boolean_T DetectRisePositive_vinit_o;/* Mask Parameter: DetectRisePositive_vinit_o
                                        * Referenced by: '<S337>/Delay Input1'
                                        */
  boolean_T DetectRisePositive1_vinit_h;/* Mask Parameter: DetectRisePositive1_vinit_h
                                         * Referenced by: '<S322>/Delay Input1'
                                         */
  boolean_T DetectRisePositive_vinit_h;/* Mask Parameter: DetectRisePositive_vinit_h
                                        * Referenced by: '<S350>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_d;/* Mask Parameter: DetectRisePositive_vinit_d
                                        * Referenced by: '<S332>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_dn;/* Mask Parameter: DetectRisePositive_vinit_dn
                                         * Referenced by: '<S345>/Delay Input1'
                                         */
  boolean_T DetectRisePositive_vinit_cj;/* Mask Parameter: DetectRisePositive_vinit_cj
                                         * Referenced by: '<S355>/Delay Input1'
                                         */
  boolean_T DetectRisePositive3_vinit; /* Mask Parameter: DetectRisePositive3_vinit
                                        * Referenced by: '<S361>/Delay Input1'
                                        */
  boolean_T DetectRisePositive3_vinit_h;/* Mask Parameter: DetectRisePositive3_vinit_h
                                         * Referenced by: '<S363>/Delay Input1'
                                         */
  uint8_T CompareToConstant1_const_n;  /* Mask Parameter: CompareToConstant1_const_n
                                        * Referenced by: '<S411>/Constant'
                                        */
  uint8_T CompareToConstant_const_i;   /* Mask Parameter: CompareToConstant_const_i
                                        * Referenced by: '<S399>/Constant'
                                        */
  uint8_T CompareToConstant1_const_la; /* Mask Parameter: CompareToConstant1_const_la
                                        * Referenced by: '<S400>/Constant'
                                        */
  uint8_T CompareToConstant2_const_bv; /* Mask Parameter: CompareToConstant2_const_bv
                                        * Referenced by: '<S404>/Constant'
                                        */
  uint8_T Sensor_Valid_q_high;         /* Mask Parameter: Sensor_Valid_q_high
                                        * Referenced by: '<S447>/Relay'
                                        */
  uint8_T Sensor_Valid_q_low;          /* Mask Parameter: Sensor_Valid_q_low
                                        * Referenced by: '<S447>/Relay'
                                        */
  uint8_T DetectIncrease_vinit_pa;     /* Mask Parameter: DetectIncrease_vinit_pa
                                        * Referenced by: '<S392>/Delay Input1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 10e7
                                        * Referenced by: '<S195>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 1e-6
                                        * Referenced by: '<S195>/Saturation'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S195>/Constant'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S359>/Delay1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S360>/Delay'
                                        */
  real_T Delay1_InitialCondition_e;    /* Expression: 0.0
                                        * Referenced by: '<S360>/Delay1'
                                        */
  real_T lon_0_rad_Y0;                 /* Expression: 0
                                        * Referenced by: '<S403>/lon_0_rad'
                                        */
  real_T lat_0_rad_Y0;                 /* Expression: 0
                                        * Referenced by: '<S403>/lat_0_rad'
                                        */
  real_T dx_dlat_Y0;                   /* Expression: 1
                                        * Referenced by: '<S403>/dx_dlat'
                                        */
  real_T dy_dlon_Y0;                   /* Expression: 1
                                        * Referenced by: '<S403>/dy_dlon'
                                        */
  real_T dz_dh_Y0;                     /* Expression: 1
                                        * Referenced by: '<S403>/dz_dh'
                                        */
  real_T Constant_Value_n;             /* Expression: 1
                                        * Referenced by: '<S419>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S419>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 2
                                        * Referenced by: '<S419>/Constant2'
                                        */
  real_T R_Value;                      /* Expression: 6378137
                                        * Referenced by: '<S419>/R'
                                        */
  real_T f_Value;                      /* Expression: 1/298.257223563
                                        * Referenced by: '<S419>/f'
                                        */
  int32_T UnitDelay_InitialCondition;  /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S412>/Unit Delay'
                                        */
  int32_T Saturation_UpperSat_a;       /* Computed Parameter: Saturation_UpperSat_a
                                        * Referenced by: '<S412>/Saturation'
                                        */
  int32_T Saturation_LowerSat_f;       /* Computed Parameter: Saturation_LowerSat_f
                                        * Referenced by: '<S412>/Saturation'
                                        */
  int32_T offset_Value[2];             /* Computed Parameter: offset_Value
                                        * Referenced by: '<S432>/offset'
                                        */
  int32_T Saturation1_UpperSat[2];     /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S432>/Saturation1'
                                        */
  int32_T Saturation1_LowerSat;        /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S432>/Saturation1'
                                        */
  int32_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S401>/Gain'
                                        */
  int32_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S401>/Gain1'
                                        */
  int32_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S401>/Gain2'
                                        */
  int32_T Scalefactor3_Gain;           /* Computed Parameter: Scalefactor3_Gain
                                        * Referenced by: '<S401>/Scalefactor3'
                                        */
  int32_T Scalefactor1_Gain;           /* Computed Parameter: Scalefactor1_Gain
                                        * Referenced by: '<S401>/Scalefactor1'
                                        */
  int32_T Scalefactor2_Gain;           /* Computed Parameter: Scalefactor2_Gain
                                        * Referenced by: '<S401>/Scalefactor2'
                                        */
  real32_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                           * Referenced by: '<S12>/Discrete-Time Integrator'
                                           */
  real32_T DiscreteTimeIntegrator_IC;  /* Computed Parameter: DiscreteTimeIntegrator_IC
                                        * Referenced by: '<S12>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_UpperSat;/* Computed Parameter: DiscreteTimeIntegrator_UpperSat
                                            * Referenced by: '<S12>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerSat;/* Computed Parameter: DiscreteTimeIntegrator_LowerSat
                                            * Referenced by: '<S12>/Discrete-Time Integrator'
                                            */
  real32_T Gain10_Gain;                /* Computed Parameter: Gain10_Gain
                                        * Referenced by: '<S8>/Gain10'
                                        */
  real32_T DiscreteTimeIntegrator_gainva_i;/* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                                            * Referenced by: '<S15>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_i;/* Computed Parameter: DiscreteTimeIntegrator_IC_i
                                        * Referenced by: '<S15>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_UpperS_g;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_g
                                            * Referenced by: '<S15>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_j;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_j
                                            * Referenced by: '<S15>/Discrete-Time Integrator'
                                            */
  real32_T Relay1_OnVal;               /* Computed Parameter: Relay1_OnVal
                                        * Referenced by: '<S9>/Relay1'
                                        */
  real32_T Relay1_OffVal;              /* Computed Parameter: Relay1_OffVal
                                        * Referenced by: '<S9>/Relay1'
                                        */
  real32_T DiscreteTimeIntegrator_gainva_m;/* Computed Parameter: DiscreteTimeIntegrator_gainva_m
                                            * Referenced by: '<S17>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_o;/* Computed Parameter: DiscreteTimeIntegrator_IC_o
                                        * Referenced by: '<S17>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_UpperS_d;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_d
                                            * Referenced by: '<S17>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_n;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_n
                                            * Referenced by: '<S17>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainva_k;/* Computed Parameter: DiscreteTimeIntegrator_gainva_k
                                            * Referenced by: '<S11>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_l;/* Computed Parameter: DiscreteTimeIntegrator_IC_l
                                        * Referenced by: '<S11>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_UpperS_n;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_n
                                            * Referenced by: '<S11>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_l;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_l
                                            * Referenced by: '<S11>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainva_p;/* Computed Parameter: DiscreteTimeIntegrator_gainva_p
                                            * Referenced by: '<S13>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_j;/* Computed Parameter: DiscreteTimeIntegrator_IC_j
                                        * Referenced by: '<S13>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_UpperS_f;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_f
                                            * Referenced by: '<S13>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_f;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_f
                                            * Referenced by: '<S13>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainv_me;/* Computed Parameter: DiscreteTimeIntegrator_gainv_me
                                            * Referenced by: '<S14>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_ig;/* Computed Parameter: DiscreteTimeIntegrator_IC_ig
                                         * Referenced by: '<S14>/Discrete-Time Integrator'
                                         */
  real32_T DiscreteTimeIntegrator_UpperS_m;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_m
                                            * Referenced by: '<S14>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_i;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_i
                                            * Referenced by: '<S14>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainv_my;/* Computed Parameter: DiscreteTimeIntegrator_gainv_my
                                            * Referenced by: '<S16>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_e;/* Computed Parameter: DiscreteTimeIntegrator_IC_e
                                        * Referenced by: '<S16>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_Upper_ml;/* Computed Parameter: DiscreteTimeIntegrator_Upper_ml
                                            * Referenced by: '<S16>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_g;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_g
                                            * Referenced by: '<S16>/Discrete-Time Integrator'
                                            */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S53>/Constant'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S54>/Constant'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S64>/Constant'
                                        */
  real32_T Saturation_UpperSat_h;      /* Computed Parameter: Saturation_UpperSat_h
                                        * Referenced by: '<S64>/Saturation'
                                        */
  real32_T Saturation_LowerSat_m;      /* Computed Parameter: Saturation_LowerSat_m
                                        * Referenced by: '<S64>/Saturation'
                                        */
  real32_T Constant1_Value_o;          /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S64>/Constant1'
                                        */
  real32_T Constant2_Value_d;          /* Computed Parameter: Constant2_Value_d
                                        * Referenced by: '<S64>/Constant2'
                                        */
  real32_T Gain_Gain_f;                /* Computed Parameter: Gain_Gain_f
                                        * Referenced by: '<S63>/Gain'
                                        */
  real32_T Constant_Value_j1;          /* Computed Parameter: Constant_Value_j1
                                        * Referenced by: '<S67>/Constant'
                                        */
  real32_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S67>/Constant1'
                                        */
  real32_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S67>/Constant2'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S67>/Constant3'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S67>/Constant4'
                                        */
  real32_T Gain_Gain_n;                /* Computed Parameter: Gain_Gain_n
                                        * Referenced by: '<S67>/Gain'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S82>/Constant'
                                        */
  real32_T Constant_Value_jy;          /* Computed Parameter: Constant_Value_jy
                                        * Referenced by: '<S83>/Constant'
                                        */
  real32_T gps_acc_O_mPs2_Y0;          /* Computed Parameter: gps_acc_O_mPs2_Y0
                                        * Referenced by: '<S92>/gps_acc_O_mPs2'
                                        */
  real32_T Integrator_gainval;         /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S92>/Integrator'
                                        */
  real32_T Integrator_IC;              /* Computed Parameter: Integrator_IC
                                        * Referenced by: '<S92>/Integrator'
                                        */
  real32_T Integrator1_gainval;        /* Computed Parameter: Integrator1_gainval
                                        * Referenced by: '<S92>/Integrator1'
                                        */
  real32_T gain_Gain;                  /* Computed Parameter: gain_Gain
                                        * Referenced by: '<S92>/gain'
                                        */
  real32_T gain1_Gain;                 /* Computed Parameter: gain1_Gain
                                        * Referenced by: '<S92>/gain1'
                                        */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S95>/Constant'
                                        */
  real32_T Constant_Value_ny;          /* Computed Parameter: Constant_Value_ny
                                        * Referenced by: '<S106>/Constant'
                                        */
  real32_T Constant_Value_g3;          /* Computed Parameter: Constant_Value_g3
                                        * Referenced by: '<S89>/Constant'
                                        */
  real32_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                            * Referenced by: '<S89>/Discrete-Time Integrator1'
                                            */
  real32_T Relay_OnVal;                /* Computed Parameter: Relay_OnVal
                                        * Referenced by: '<S93>/Relay'
                                        */
  real32_T Relay_OffVal;               /* Computed Parameter: Relay_OffVal
                                        * Referenced by: '<S93>/Relay'
                                        */
  real32_T Relay_YOn;                  /* Computed Parameter: Relay_YOn
                                        * Referenced by: '<S93>/Relay'
                                        */
  real32_T Relay_YOff;                 /* Computed Parameter: Relay_YOff
                                        * Referenced by: '<S93>/Relay'
                                        */
  real32_T Delay_InitialCondition_m;   /* Computed Parameter: Delay_InitialCondition_m
                                        * Referenced by: '<S87>/Delay'
                                        */
  real32_T gravity_Value[3];           /* Expression: [0;0;-INS_CONST.g]
                                        * Referenced by: '<S74>/gravity'
                                        */
  real32_T Gain1_Gain_l;               /* Computed Parameter: Gain1_Gain_l
                                        * Referenced by: '<S75>/Gain1'
                                        */
  real32_T Gain2_Gain_i;               /* Computed Parameter: Gain2_Gain_i
                                        * Referenced by: '<S75>/Gain2'
                                        */
  real32_T DeadZone2_Start;            /* Computed Parameter: DeadZone2_Start
                                        * Referenced by: '<S75>/Dead Zone2'
                                        */
  real32_T DeadZone2_End;              /* Computed Parameter: DeadZone2_End
                                        * Referenced by: '<S75>/Dead Zone2'
                                        */
  real32_T Saturation_UpperSat_k;      /* Computed Parameter: Saturation_UpperSat_k
                                        * Referenced by: '<S75>/Saturation'
                                        */
  real32_T Saturation_LowerSat_k;      /* Computed Parameter: Saturation_LowerSat_k
                                        * Referenced by: '<S75>/Saturation'
                                        */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S82>/Switch'
                                        */
  real32_T Switch_Threshold_m;         /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S83>/Switch'
                                        */
  real32_T max_Value;                  /* Computed Parameter: max_Value
                                        * Referenced by: '<S81>/max'
                                        */
  real32_T Saturation_UpperSat_e;      /* Computed Parameter: Saturation_UpperSat_e
                                        * Referenced by: '<S81>/Saturation'
                                        */
  real32_T Saturation_LowerSat_fo;     /* Computed Parameter: Saturation_LowerSat_fo
                                        * Referenced by: '<S81>/Saturation'
                                        */
  real32_T Constant1_Value_n;          /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S81>/Constant1'
                                        */
  real32_T Gain_Gain_o[3];             /* Expression: [INS_PARAM.ATT_GAIN;INS_PARAM.ATT_GAIN;0]
                                        * Referenced by: '<S76>/Gain'
                                        */
  real32_T DiscreteTimeIntegrator_gainva_n;/* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                                            * Referenced by: '<S89>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_a;/* Computed Parameter: DiscreteTimeIntegrator_IC_a
                                        * Referenced by: '<S89>/Discrete-Time Integrator'
                                        */
  real32_T Gain_Gain_p;                /* Computed Parameter: Gain_Gain_p
                                        * Referenced by: '<S89>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<S89>/Gain1'
                                        */
  real32_T Delay_InitialCondition_d;   /* Computed Parameter: Delay_InitialCondition_d
                                        * Referenced by: '<S94>/Delay'
                                        */
  real32_T Gain_Gain_m[3];             /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S71>/Gain'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S105>/Constant'
                                        */
  real32_T DiscreteTimeIntegrator1_gainv_a;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_a
                                            * Referenced by: '<S105>/Discrete-Time Integrator1'
                                            */
  real32_T Gain_Gain_pq;               /* Computed Parameter: Gain_Gain_pq
                                        * Referenced by: '<S100>/Gain'
                                        */
  real32_T Delay_InitialCondition_i;   /* Computed Parameter: Delay_InitialCondition_i
                                        * Referenced by: '<S101>/Delay'
                                        */
  real32_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S104>/Constant'
                                        */
  real32_T Relay1_OnVal_i;             /* Computed Parameter: Relay1_OnVal_i
                                        * Referenced by: '<S72>/Relay1'
                                        */
  real32_T Relay1_OffVal_o;            /* Computed Parameter: Relay1_OffVal_o
                                        * Referenced by: '<S72>/Relay1'
                                        */
  real32_T Relay1_YOn;                 /* Computed Parameter: Relay1_YOn
                                        * Referenced by: '<S72>/Relay1'
                                        */
  real32_T Relay1_YOff;                /* Computed Parameter: Relay1_YOff
                                        * Referenced by: '<S72>/Relay1'
                                        */
  real32_T Gain_Gain_m5[3];            /* Expression: [0; 0; INS_PARAM.HOVER_MAG_GAIN]
                                        * Referenced by: '<S99>/Gain'
                                        */
  real32_T DiscreteTimeIntegrator_gainva_h;/* Computed Parameter: DiscreteTimeIntegrator_gainva_h
                                            * Referenced by: '<S105>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_el;/* Computed Parameter: DiscreteTimeIntegrator_IC_el
                                         * Referenced by: '<S105>/Discrete-Time Integrator'
                                         */
  real32_T Gain_Gain_pl;               /* Computed Parameter: Gain_Gain_pl
                                        * Referenced by: '<S105>/Gain'
                                        */
  real32_T Gain1_Gain_g;               /* Computed Parameter: Gain1_Gain_g
                                        * Referenced by: '<S105>/Gain1'
                                        */
  real32_T Zaxis_Value[3];             /* Computed Parameter: Zaxis_Value
                                        * Referenced by: '<S72>/Z axis'
                                        */
  real32_T Constant_Value_no;          /* Computed Parameter: Constant_Value_no
                                        * Referenced by: '<S111>/Constant'
                                        */
  real32_T DiscreteTimeIntegrator1_gainv_j;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_j
                                            * Referenced by: '<S111>/Discrete-Time Integrator1'
                                            */
  real32_T Saturation2_UpperSat;       /* Computed Parameter: Saturation2_UpperSat
                                        * Referenced by: '<S69>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat;       /* Computed Parameter: Saturation2_LowerSat
                                        * Referenced by: '<S69>/Saturation2'
                                        */
  real32_T DiscreteTimeIntegrator_gainv_kw;/* Computed Parameter: DiscreteTimeIntegrator_gainv_kw
                                            * Referenced by: '<S111>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_m;/* Computed Parameter: DiscreteTimeIntegrator_IC_m
                                        * Referenced by: '<S111>/Discrete-Time Integrator'
                                        */
  real32_T Gain_Gain_i;                /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S111>/Gain'
                                        */
  real32_T Gain1_Gain_i;               /* Computed Parameter: Gain1_Gain_i
                                        * Referenced by: '<S111>/Gain1'
                                        */
  real32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S113>/Constant'
                                        */
  real32_T DiscreteTimeIntegrator_gainva_j;/* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                                            * Referenced by: '<S113>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator2_gainval;/* Computed Parameter: DiscreteTimeIntegrator2_gainval
                                            * Referenced by: '<S114>/Discrete-Time Integrator2'
                                            */
  real32_T DiscreteTimeIntegrator2_IC; /* Computed Parameter: DiscreteTimeIntegrator2_IC
                                        * Referenced by: '<S114>/Discrete-Time Integrator2'
                                        */
  real32_T DiscreteTimeIntegrator2_UpperSa;/* Computed Parameter: DiscreteTimeIntegrator2_UpperSa
                                            * Referenced by: '<S114>/Discrete-Time Integrator2'
                                            */
  real32_T DiscreteTimeIntegrator2_LowerSa;/* Computed Parameter: DiscreteTimeIntegrator2_LowerSa
                                            * Referenced by: '<S114>/Discrete-Time Integrator2'
                                            */
  real32_T Gain2_Gain_i4;              /* Computed Parameter: Gain2_Gain_i4
                                        * Referenced by: '<S113>/Gain2'
                                        */
  real32_T Gain_Gain_e;                /* Computed Parameter: Gain_Gain_e
                                        * Referenced by: '<S124>/Gain'
                                        */
  real32_T Gain1_Gain_pl;              /* Computed Parameter: Gain1_Gain_pl
                                        * Referenced by: '<S124>/Gain1'
                                        */
  real32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S125>/Gain'
                                        */
  real32_T Gain1_Gain_b;               /* Computed Parameter: Gain1_Gain_b
                                        * Referenced by: '<S125>/Gain1'
                                        */
  real32_T Gain_Gain_oz;               /* Computed Parameter: Gain_Gain_oz
                                        * Referenced by: '<S126>/Gain'
                                        */
  real32_T Gain1_Gain_f;               /* Computed Parameter: Gain1_Gain_f
                                        * Referenced by: '<S126>/Gain1'
                                        */
  real32_T Delay_4_InitialCondition;   /* Computed Parameter: Delay_4_InitialCondition
                                        * Referenced by: '<S57>/Delay'
                                        */
  real32_T Delay_7_InitialCondition;   /* Computed Parameter: Delay_7_InitialCondition
                                        * Referenced by: '<S57>/Delay'
                                        */
  real32_T Delay_8_InitialCondition;   /* Computed Parameter: Delay_8_InitialCondition
                                        * Referenced by: '<S57>/Delay'
                                        */
  real32_T Delay_10_InitialCondition;  /* Computed Parameter: Delay_10_InitialCondition
                                        * Referenced by: '<S57>/Delay'
                                        */
  real32_T Constant_Value_c0;          /* Computed Parameter: Constant_Value_c0
                                        * Referenced by: '<S155>/Constant'
                                        */
  real32_T Gain_Gain_eu;               /* Computed Parameter: Gain_Gain_eu
                                        * Referenced by: '<S155>/Gain'
                                        */
  real32_T Gain1_Gain_h;               /* Computed Parameter: Gain1_Gain_h
                                        * Referenced by: '<S155>/Gain1'
                                        */
  real32_T Constant2_Value_az[2];      /* Computed Parameter: Constant2_Value_az
                                        * Referenced by: '<S168>/Constant2'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S168>/Constant1'
                                        */
  real32_T Constant_Value_ae;          /* Computed Parameter: Constant_Value_ae
                                        * Referenced by: '<S169>/Constant'
                                        */
  real32_T Gain_Gain_k;                /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S157>/Gain'
                                        */
  real32_T Gain1_Gain_g4;              /* Computed Parameter: Gain1_Gain_g4
                                        * Referenced by: '<S157>/Gain1'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S157>/Gain3'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S157>/Gain4'
                                        */
  real32_T Constant2_Value_o[2];       /* Computed Parameter: Constant2_Value_o
                                        * Referenced by: '<S173>/Constant2'
                                        */
  real32_T Constant1_Value_l;          /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S173>/Constant1'
                                        */
  real32_T Constant_Value_f2;          /* Computed Parameter: Constant_Value_f2
                                        * Referenced by: '<S174>/Constant'
                                        */
  real32_T Gain_Gain_l;                /* Computed Parameter: Gain_Gain_l
                                        * Referenced by: '<S158>/Gain'
                                        */
  real32_T Gain1_Gain_m;               /* Computed Parameter: Gain1_Gain_m
                                        * Referenced by: '<S158>/Gain1'
                                        */
  real32_T Gain2_Gain_o;               /* Computed Parameter: Gain2_Gain_o
                                        * Referenced by: '<S158>/Gain2'
                                        */
  real32_T Gain3_Gain_e;               /* Computed Parameter: Gain3_Gain_e
                                        * Referenced by: '<S158>/Gain3'
                                        */
  real32_T Constant2_Value_m[2];       /* Computed Parameter: Constant2_Value_m
                                        * Referenced by: '<S163>/Constant2'
                                        */
  real32_T Constant1_Value_a;          /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S163>/Constant1'
                                        */
  real32_T Constant_Value_hd;          /* Computed Parameter: Constant_Value_hd
                                        * Referenced by: '<S164>/Constant'
                                        */
  real32_T Gain_Gain_g;                /* Computed Parameter: Gain_Gain_g
                                        * Referenced by: '<S156>/Gain'
                                        */
  real32_T Gain1_Gain_ig;              /* Computed Parameter: Gain1_Gain_ig
                                        * Referenced by: '<S156>/Gain1'
                                        */
  real32_T Gain2_Gain_m;               /* Computed Parameter: Gain2_Gain_m
                                        * Referenced by: '<S156>/Gain2'
                                        */
  real32_T Gain3_Gain_ea;              /* Computed Parameter: Gain3_Gain_ea
                                        * Referenced by: '<S156>/Gain3'
                                        */
  real32_T Constant_Value_h1;          /* Computed Parameter: Constant_Value_h1
                                        * Referenced by: '<S146>/Constant'
                                        */
  real32_T Constant_Value_aee;         /* Computed Parameter: Constant_Value_aee
                                        * Referenced by: '<S147>/Constant'
                                        */
  real32_T Constant_Value_hp;          /* Computed Parameter: Constant_Value_hp
                                        * Referenced by: '<S148>/Constant'
                                        */
  real32_T quat_0_Y0[4];               /* Computed Parameter: quat_0_Y0
                                        * Referenced by: '<S129>/quat_0'
                                        */
  real32_T Gain_Gain_d;                /* Computed Parameter: Gain_Gain_d
                                        * Referenced by: '<S129>/Gain'
                                        */
  real32_T Switch_Threshold_a;         /* Computed Parameter: Switch_Threshold_a
                                        * Referenced by: '<S146>/Switch'
                                        */
  real32_T Switch_Threshold_f;         /* Computed Parameter: Switch_Threshold_f
                                        * Referenced by: '<S147>/Switch'
                                        */
  real32_T Switch_Threshold_mm;        /* Computed Parameter: Switch_Threshold_mm
                                        * Referenced by: '<S148>/Switch'
                                        */
  real32_T Merge_InitialOutput;        /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S145>/Merge'
                                        */
  real32_T DiscreteTimeIntegrator5_gainval;/* Computed Parameter: DiscreteTimeIntegrator5_gainval
                                            * Referenced by: '<S181>/Discrete-Time Integrator5'
                                            */
  real32_T Gain_Gain_fr;               /* Computed Parameter: Gain_Gain_fr
                                        * Referenced by: '<S181>/Gain'
                                        */
  real32_T DiscreteTimeIntegrator5_gainv_n;/* Computed Parameter: DiscreteTimeIntegrator5_gainv_n
                                            * Referenced by: '<S179>/Discrete-Time Integrator5'
                                            */
  real32_T Gain_Gain_je;               /* Computed Parameter: Gain_Gain_je
                                        * Referenced by: '<S179>/Gain'
                                        */
  real32_T Saturation2_UpperSat_i;     /* Computed Parameter: Saturation2_UpperSat_i
                                        * Referenced by: '<S130>/Saturation2'
                                        */
  real32_T Saturation2_LowerSat_g;     /* Computed Parameter: Saturation2_LowerSat_g
                                        * Referenced by: '<S130>/Saturation2'
                                        */
  real32_T DiscreteTimeIntegrator5_gainv_m;/* Computed Parameter: DiscreteTimeIntegrator5_gainv_m
                                            * Referenced by: '<S180>/Discrete-Time Integrator5'
                                            */
  real32_T Gain_Gain_h;                /* Computed Parameter: Gain_Gain_h
                                        * Referenced by: '<S180>/Gain'
                                        */
  real32_T Relay_OnVal_g;              /* Computed Parameter: Relay_OnVal_g
                                        * Referenced by: '<S130>/Relay'
                                        */
  real32_T Relay_OffVal_f;             /* Computed Parameter: Relay_OffVal_f
                                        * Referenced by: '<S130>/Relay'
                                        */
  real32_T Relay_YOn_k;                /* Computed Parameter: Relay_YOn_k
                                        * Referenced by: '<S130>/Relay'
                                        */
  real32_T Relay_YOff_f;               /* Computed Parameter: Relay_YOff_f
                                        * Referenced by: '<S130>/Relay'
                                        */
  real32_T X_Next_Y0;                  /* Computed Parameter: X_Next_Y0
                                        * Referenced by: '<S201>/X_Next'
                                        */
  real32_T Delay_InitialCondition_e;   /* Computed Parameter: Delay_InitialCondition_e
                                        * Referenced by: '<S207>/Delay'
                                        */
  real32_T Memory_InitialCondition;    /* Computed Parameter: Memory_InitialCondition
                                        * Referenced by: '<S203>/Memory'
                                        */
  real32_T Gain3_Gain_ev;              /* Expression: INS_CONST.dt
                                        * Referenced by: '<S203>/Gain3'
                                        */
  real32_T X_Next_Y0_c;                /* Computed Parameter: X_Next_Y0_c
                                        * Referenced by: '<S210>/X_Next'
                                        */
  real32_T Memory_InitialCondition_l[2];/* Computed Parameter: Memory_InitialCondition_l
                                         * Referenced by: '<S217>/Memory'
                                         */
  real32_T Memory_InitialCondition_o;  /* Computed Parameter: Memory_InitialCondition_o
                                        * Referenced by: '<S212>/Memory'
                                        */
  real32_T Gain3_Gain_o;               /* Expression: INS_CONST.dt
                                        * Referenced by: '<S212>/Gain3'
                                        */
  real32_T Constant_Value_o[2];        /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S223>/Constant'
                                        */
  real32_T X_Next_Y0_k;                /* Computed Parameter: X_Next_Y0_k
                                        * Referenced by: '<S220>/X_Next'
                                        */
  real32_T Memory_InitialCondition_i;  /* Computed Parameter: Memory_InitialCondition_i
                                        * Referenced by: '<S222>/Memory'
                                        */
  real32_T Gain3_Gain_p;               /* Expression: INS_CONST.dt
                                        * Referenced by: '<S222>/Gain3'
                                        */
  real32_T Constant_Value_b[2];        /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S228>/Constant'
                                        */
  real32_T X_0_Y0;                     /* Computed Parameter: X_0_Y0
                                        * Referenced by: '<S231>/X_0'
                                        */
  real32_T Saturation_UpperSat_b;      /* Computed Parameter: Saturation_UpperSat_b
                                        * Referenced by: '<S243>/Saturation'
                                        */
  real32_T Saturation_LowerSat_c;      /* Computed Parameter: Saturation_LowerSat_c
                                        * Referenced by: '<S243>/Saturation'
                                        */
  real32_T X_Next_Y0_m;                /* Computed Parameter: X_Next_Y0_m
                                        * Referenced by: '<S240>/X_Next'
                                        */
  real32_T Delay_InitialCondition_j;   /* Computed Parameter: Delay_InitialCondition_j
                                        * Referenced by: '<S242>/Delay'
                                        */
  real32_T Delay_InitialCondition_mk;  /* Computed Parameter: Delay_InitialCondition_mk
                                        * Referenced by: '<S246>/Delay'
                                        */
  real32_T Gain_Gain_pln;              /* Expression: INS_CONST.dt
                                        * Referenced by: '<S242>/Gain'
                                        */
  real32_T Saturation_UpperSat_as;     /* Computed Parameter: Saturation_UpperSat_as
                                        * Referenced by: '<S240>/Saturation'
                                        */
  real32_T Saturation_LowerSat_e;      /* Computed Parameter: Saturation_LowerSat_e
                                        * Referenced by: '<S240>/Saturation'
                                        */
  real32_T Saturation_UpperSat_hz;     /* Computed Parameter: Saturation_UpperSat_hz
                                        * Referenced by: '<S252>/Saturation'
                                        */
  real32_T Saturation_LowerSat_n;      /* Computed Parameter: Saturation_LowerSat_n
                                        * Referenced by: '<S252>/Saturation'
                                        */
  real32_T X_Next_Y0_j;                /* Computed Parameter: X_Next_Y0_j
                                        * Referenced by: '<S249>/X_Next'
                                        */
  real32_T Delay_InitialCondition_ms;  /* Computed Parameter: Delay_InitialCondition_ms
                                        * Referenced by: '<S251>/Delay'
                                        */
  real32_T Delay_InitialCondition_d2;  /* Computed Parameter: Delay_InitialCondition_d2
                                        * Referenced by: '<S255>/Delay'
                                        */
  real32_T Gain_Gain_ov;               /* Expression: INS_CONST.dt
                                        * Referenced by: '<S251>/Gain'
                                        */
  real32_T X_Next_Y0_i;                /* Computed Parameter: X_Next_Y0_i
                                        * Referenced by: '<S258>/X_Next'
                                        */
  real32_T Memory_InitialCondition_p;  /* Computed Parameter: Memory_InitialCondition_p
                                        * Referenced by: '<S264>/Memory'
                                        */
  real32_T Memory_InitialCondition_c;  /* Computed Parameter: Memory_InitialCondition_c
                                        * Referenced by: '<S260>/Memory'
                                        */
  real32_T Gain3_Gain_k;               /* Expression: INS_CONST.dt
                                        * Referenced by: '<S260>/Gain3'
                                        */
  real32_T Saturation_UpperSat_i;      /* Computed Parameter: Saturation_UpperSat_i
                                        * Referenced by: '<S270>/Saturation'
                                        */
  real32_T Saturation_LowerSat_h;      /* Computed Parameter: Saturation_LowerSat_h
                                        * Referenced by: '<S270>/Saturation'
                                        */
  real32_T X_Next_Y0_mm;               /* Computed Parameter: X_Next_Y0_mm
                                        * Referenced by: '<S267>/X_Next'
                                        */
  real32_T rf_bias_Y0;                 /* Computed Parameter: rf_bias_Y0
                                        * Referenced by: '<S267>/rf_bias'
                                        */
  real32_T Memory_InitialCondition_o5; /* Computed Parameter: Memory_InitialCondition_o5
                                        * Referenced by: '<S273>/Memory'
                                        */
  real32_T Memory_InitialCondition_h;  /* Computed Parameter: Memory_InitialCondition_h
                                        * Referenced by: '<S269>/Memory'
                                        */
  real32_T Gain3_Gain_j;               /* Expression: INS_CONST.dt
                                        * Referenced by: '<S269>/Gain3'
                                        */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S279>/Constant'
                                        */
  real32_T Merge_InitialOutput_g;      /* Computed Parameter: Merge_InitialOutput_g
                                        * Referenced by: '<S280>/Merge'
                                        */
  real32_T Merge_InitialOutput_d;      /* Computed Parameter: Merge_InitialOutput_d
                                        * Referenced by: '<S281>/Merge'
                                        */
  real32_T Delay_InitialCondition_mt;  /* Computed Parameter: Delay_InitialCondition_mt
                                        * Referenced by: '<S277>/Delay'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S278>/Gain1'
                                        */
  real32_T Constant_Value_nn;          /* Computed Parameter: Constant_Value_nn
                                        * Referenced by: '<S278>/Constant'
                                        */
  real32_T Gain_Gain_mr;               /* Expression: INS_CONST.dt
                                        * Referenced by: '<S278>/Gain'
                                        */
  real32_T Merge_InitialOutput_c;      /* Computed Parameter: Merge_InitialOutput_c
                                        * Referenced by: '<S230>/Merge'
                                        */
  real32_T Delay_InitialCondition_g;   /* Computed Parameter: Delay_InitialCondition_g
                                        * Referenced by: '<S226>/Delay'
                                        */
  real32_T Constant_Value_l[2];        /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S227>/Constant'
                                        */
  real32_T Gain_Gain_ic;               /* Expression: INS_CONST.dt
                                        * Referenced by: '<S227>/Gain'
                                        */
  real32_T Relay_OnVal_l;              /* Computed Parameter: Relay_OnVal_l
                                        * Referenced by: '<S315>/Relay'
                                        */
  real32_T Relay_OffVal_p;             /* Computed Parameter: Relay_OffVal_p
                                        * Referenced by: '<S315>/Relay'
                                        */
  real32_T Relay_YOn_b;                /* Computed Parameter: Relay_YOn_b
                                        * Referenced by: '<S315>/Relay'
                                        */
  real32_T Relay_YOff_d;               /* Computed Parameter: Relay_YOff_d
                                        * Referenced by: '<S315>/Relay'
                                        */
  real32_T Relay1_OnVal_b;             /* Computed Parameter: Relay1_OnVal_b
                                        * Referenced by: '<S315>/Relay1'
                                        */
  real32_T Relay1_OffVal_n;            /* Computed Parameter: Relay1_OffVal_n
                                        * Referenced by: '<S315>/Relay1'
                                        */
  real32_T Relay1_YOn_b;               /* Computed Parameter: Relay1_YOn_b
                                        * Referenced by: '<S315>/Relay1'
                                        */
  real32_T Relay1_YOff_a;              /* Computed Parameter: Relay1_YOff_a
                                        * Referenced by: '<S315>/Relay1'
                                        */
  real32_T Constant_Value_oi;          /* Computed Parameter: Constant_Value_oi
                                        * Referenced by: '<S312>/Constant'
                                        */
  real32_T DiscreteTimeIntegrator_gainva_b;/* Computed Parameter: DiscreteTimeIntegrator_gainva_b
                                            * Referenced by: '<S312>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_c;/* Computed Parameter: DiscreteTimeIntegrator_IC_c
                                        * Referenced by: '<S312>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator1_gainv_d;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_d
                                            * Referenced by: '<S312>/Discrete-Time Integrator1'
                                            */
  real32_T Gain_Gain_b;                /* Computed Parameter: Gain_Gain_b
                                        * Referenced by: '<S312>/Gain'
                                        */
  real32_T Gain1_Gain_c;               /* Computed Parameter: Gain1_Gain_c
                                        * Referenced by: '<S312>/Gain1'
                                        */
  real32_T Constant_Value_gd;          /* Computed Parameter: Constant_Value_gd
                                        * Referenced by: '<S310>/Constant'
                                        */
  real32_T DiscreteTimeIntegrator_gainv_bt;/* Computed Parameter: DiscreteTimeIntegrator_gainv_bt
                                            * Referenced by: '<S328>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_g;/* Computed Parameter: DiscreteTimeIntegrator_IC_g
                                        * Referenced by: '<S328>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_UpperS_p;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_p
                                            * Referenced by: '<S328>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_p;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_p
                                            * Referenced by: '<S328>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainv_jo;/* Computed Parameter: DiscreteTimeIntegrator_gainv_jo
                                            * Referenced by: '<S340>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_lb;/* Computed Parameter: DiscreteTimeIntegrator_IC_lb
                                         * Referenced by: '<S340>/Discrete-Time Integrator'
                                         */
  real32_T DiscreteTimeIntegrator_UpperS_j;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_j
                                            * Referenced by: '<S340>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_Lower_f2;/* Computed Parameter: DiscreteTimeIntegrator_Lower_f2
                                            * Referenced by: '<S340>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainv_iy;/* Computed Parameter: DiscreteTimeIntegrator_gainv_iy
                                            * Referenced by: '<S327>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_b;/* Computed Parameter: DiscreteTimeIntegrator_IC_b
                                        * Referenced by: '<S327>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_Upper_jm;/* Computed Parameter: DiscreteTimeIntegrator_Upper_jm
                                            * Referenced by: '<S327>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_d;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_d
                                            * Referenced by: '<S327>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainva_a;/* Computed Parameter: DiscreteTimeIntegrator_gainva_a
                                            * Referenced by: '<S339>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_h;/* Computed Parameter: DiscreteTimeIntegrator_IC_h
                                        * Referenced by: '<S339>/Discrete-Time Integrator'
                                        */
  real32_T DiscreteTimeIntegrator_Upper_fv;/* Computed Parameter: DiscreteTimeIntegrator_Upper_fv
                                            * Referenced by: '<S339>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_LowerS_b;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_b
                                            * Referenced by: '<S339>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_gainv_jp;/* Computed Parameter: DiscreteTimeIntegrator_gainv_jp
                                            * Referenced by: '<S341>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_ms;/* Computed Parameter: DiscreteTimeIntegrator_IC_ms
                                         * Referenced by: '<S341>/Discrete-Time Integrator'
                                         */
  real32_T DiscreteTimeIntegrator_UpperS_e;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_e
                                            * Referenced by: '<S341>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_Lower_no;/* Computed Parameter: DiscreteTimeIntegrator_Lower_no
                                            * Referenced by: '<S341>/Discrete-Time Integrator'
                                            */
  real32_T Delay_4_InitialCondition_h; /* Computed Parameter: Delay_4_InitialCondition_h
                                        * Referenced by: '<S56>/Delay'
                                        */
  real32_T Delay_5_InitialCondition;   /* Computed Parameter: Delay_5_InitialCondition
                                        * Referenced by: '<S56>/Delay'
                                        */
  real32_T Delay_6_InitialCondition;   /* Computed Parameter: Delay_6_InitialCondition
                                        * Referenced by: '<S56>/Delay'
                                        */
  real32_T AirDensity_15C_Value;       /* Computed Parameter: AirDensity_15C_Value
                                        * Referenced by: '<S373>/AirDensity_15C'
                                        */
  real32_T Gain_Gain_ozb;              /* Computed Parameter: Gain_Gain_ozb
                                        * Referenced by: '<S373>/Gain'
                                        */
  real32_T Saturation1_UpperSat_i;     /* Computed Parameter: Saturation1_UpperSat_i
                                        * Referenced by: '<S365>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_n;     /* Computed Parameter: Saturation1_LowerSat_n
                                        * Referenced by: '<S365>/Saturation1'
                                        */
  real32_T h_R_m_Y0;                   /* Computed Parameter: h_R_m_Y0
                                        * Referenced by: '<S377>/h_R_m'
                                        */
  real32_T Delay_InitialCondition_p;   /* Computed Parameter: Delay_InitialCondition_p
                                        * Referenced by: '<S377>/Delay'
                                        */
  real32_T Gain1_Gain_a;               /* Computed Parameter: Gain1_Gain_a
                                        * Referenced by: '<S374>/Gain1'
                                        */
  real32_T p1_Value;                   /* Computed Parameter: p1_Value
                                        * Referenced by: '<S374>/p1'
                                        */
  real32_T aR_g_Value;                 /* Computed Parameter: aR_g_Value
                                        * Referenced by: '<S374>/aR_g'
                                        */
  real32_T T1_Value;                   /* Computed Parameter: T1_Value
                                        * Referenced by: '<S374>/T1'
                                        */
  real32_T a_Value;                    /* Computed Parameter: a_Value
                                        * Referenced by: '<S374>/a'
                                        */
  real32_T Gain_Gain_np;               /* Computed Parameter: Gain_Gain_np
                                        * Referenced by: '<S388>/Gain'
                                        */
  real32_T Delay_InitialCondition_gc;  /* Computed Parameter: Delay_InitialCondition_gc
                                        * Referenced by: '<S391>/Delay'
                                        */
  real32_T Gain_Gain_oy;               /* Computed Parameter: Gain_Gain_oy
                                        * Referenced by: '<S394>/Gain'
                                        */
  real32_T Constant_Value_es;          /* Computed Parameter: Constant_Value_es
                                        * Referenced by: '<S395>/Constant'
                                        */
  real32_T Constant1_Value_ok;         /* Computed Parameter: Constant1_Value_ok
                                        * Referenced by: '<S395>/Constant1'
                                        */
  real32_T Constant2_Value_n;          /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S395>/Constant2'
                                        */
  real32_T Constant3_Value_i;          /* Computed Parameter: Constant3_Value_i
                                        * Referenced by: '<S395>/Constant3'
                                        */
  real32_T Constant4_Value_b;          /* Computed Parameter: Constant4_Value_b
                                        * Referenced by: '<S395>/Constant4'
                                        */
  real32_T Gain_Gain_mn;               /* Computed Parameter: Gain_Gain_mn
                                        * Referenced by: '<S395>/Gain'
                                        */
  real32_T Constant_Value_n5;          /* Computed Parameter: Constant_Value_n5
                                        * Referenced by: '<S416>/Constant'
                                        */
  real32_T Saturation1_UpperSat_m;     /* Computed Parameter: Saturation1_UpperSat_m
                                        * Referenced by: '<S407>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_d;     /* Computed Parameter: Saturation1_LowerSat_d
                                        * Referenced by: '<S407>/Saturation1'
                                        */
  real32_T DiscreteTimeIntegrator1_gainv_b;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_b
                                            * Referenced by: '<S416>/Discrete-Time Integrator1'
                                            */
  real32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S417>/Constant'
                                        */
  real32_T Saturation_UpperSat_l;      /* Computed Parameter: Saturation_UpperSat_l
                                        * Referenced by: '<S408>/Saturation'
                                        */
  real32_T Saturation_LowerSat_ku;     /* Computed Parameter: Saturation_LowerSat_ku
                                        * Referenced by: '<S408>/Saturation'
                                        */
  real32_T DiscreteTimeIntegrator1_gainv_e;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_e
                                            * Referenced by: '<S417>/Discrete-Time Integrator1'
                                            */
  real32_T DiscreteTimeIntegrator_gainva_g;/* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                                            * Referenced by: '<S416>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_d;/* Computed Parameter: DiscreteTimeIntegrator_IC_d
                                        * Referenced by: '<S416>/Discrete-Time Integrator'
                                        */
  real32_T Gain_Gain_j2;               /* Computed Parameter: Gain_Gain_j2
                                        * Referenced by: '<S416>/Gain'
                                        */
  real32_T Gain1_Gain_kf;              /* Computed Parameter: Gain1_Gain_kf
                                        * Referenced by: '<S416>/Gain1'
                                        */
  real32_T DiscreteTimeIntegrator_gainv_mf;/* Computed Parameter: DiscreteTimeIntegrator_gainv_mf
                                            * Referenced by: '<S417>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_f;/* Computed Parameter: DiscreteTimeIntegrator_IC_f
                                        * Referenced by: '<S417>/Discrete-Time Integrator'
                                        */
  real32_T Gain_Gain_gh;               /* Computed Parameter: Gain_Gain_gh
                                        * Referenced by: '<S417>/Gain'
                                        */
  real32_T Gain1_Gain_cj;              /* Computed Parameter: Gain1_Gain_cj
                                        * Referenced by: '<S417>/Gain1'
                                        */
  real32_T default_mag_quality_Value;  /* Computed Parameter: default_mag_quality_Value
                                        * Referenced by: '<S430>/default_mag_quality'
                                        */
  real32_T Constant_Value_hy;          /* Computed Parameter: Constant_Value_hy
                                        * Referenced by: '<S440>/Constant'
                                        */
  real32_T Switch_Threshold_b;         /* Computed Parameter: Switch_Threshold_b
                                        * Referenced by: '<S440>/Switch'
                                        */
  real32_T Constant1_Value_l1;         /* Computed Parameter: Constant1_Value_l1
                                        * Referenced by: '<S441>/Constant1'
                                        */
  real32_T Constant_Value_a1;          /* Computed Parameter: Constant_Value_a1
                                        * Referenced by: '<S439>/Constant'
                                        */
  real32_T Constant1_Value_i;          /* Computed Parameter: Constant1_Value_i
                                        * Referenced by: '<S439>/Constant1'
                                        */
  real32_T Constant2_Value_mb;         /* Computed Parameter: Constant2_Value_mb
                                        * Referenced by: '<S439>/Constant2'
                                        */
  real32_T Constant4_Value_c;          /* Computed Parameter: Constant4_Value_c
                                        * Referenced by: '<S439>/Constant4'
                                        */
  real32_T Gain_Gain_gg;               /* Computed Parameter: Gain_Gain_gg
                                        * Referenced by: '<S431>/Gain'
                                        */
  real32_T Gain_Gain_bo;               /* Computed Parameter: Gain_Gain_bo
                                        * Referenced by: '<S439>/Gain'
                                        */
  real32_T Constant3_Value_f;          /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S439>/Constant3'
                                        */
  real32_T Gauss_to_uT_Gain;           /* Computed Parameter: Gauss_to_uT_Gain
                                        * Referenced by: '<S370>/Gauss_to_uT'
                                        */
  real32_T Gain1_Gain_o;               /* Computed Parameter: Gain1_Gain_o
                                        * Referenced by: '<S434>/Gain1'
                                        */
  real32_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S434>/Constant2'
                                        */
  real32_T gain_Gain_g;                /* Computed Parameter: gain_Gain_g
                                        * Referenced by: '<S434>/gain'
                                        */
  real32_T Saturation_UpperSat_g;      /* Computed Parameter: Saturation_UpperSat_g
                                        * Referenced by: '<S434>/Saturation'
                                        */
  real32_T Saturation_LowerSat_a;      /* Computed Parameter: Saturation_LowerSat_a
                                        * Referenced by: '<S434>/Saturation'
                                        */
  real32_T Nominal_Magnitude_Value;    /* Computed Parameter: Nominal_Magnitude_Value
                                        * Referenced by: '<S435>/Nominal_Magnitude'
                                        */
  real32_T Constant1_Value_c;          /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S435>/Constant1'
                                        */
  real32_T gain_Gain_m;                /* Computed Parameter: gain_Gain_m
                                        * Referenced by: '<S435>/gain'
                                        */
  real32_T Saturation_UpperSat_gv;     /* Computed Parameter: Saturation_UpperSat_gv
                                        * Referenced by: '<S435>/Saturation'
                                        */
  real32_T Saturation_LowerSat_p;      /* Computed Parameter: Saturation_LowerSat_p
                                        * Referenced by: '<S435>/Saturation'
                                        */
  real32_T Constant_Value_fn;          /* Computed Parameter: Constant_Value_fn
                                        * Referenced by: '<S436>/Constant'
                                        */
  real32_T DiscreteTimeIntegrator_gainv_bm;/* Computed Parameter: DiscreteTimeIntegrator_gainv_bm
                                            * Referenced by: '<S436>/Discrete-Time Integrator'
                                            */
  real32_T DiscreteTimeIntegrator_IC_mb;/* Computed Parameter: DiscreteTimeIntegrator_IC_mb
                                         * Referenced by: '<S436>/Discrete-Time Integrator'
                                         */
  real32_T DiscreteTimeIntegrator1_gainv_m;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_m
                                            * Referenced by: '<S436>/Discrete-Time Integrator1'
                                            */
  real32_T Gain_Gain_c;                /* Computed Parameter: Gain_Gain_c
                                        * Referenced by: '<S436>/Gain'
                                        */
  real32_T Gain1_Gain_bn;              /* Computed Parameter: Gain1_Gain_bn
                                        * Referenced by: '<S436>/Gain1'
                                        */
  real32_T DiscreteTimeIntegrator5_gainv_c;/* Computed Parameter: DiscreteTimeIntegrator5_gainv_c
                                            * Referenced by: '<S448>/Discrete-Time Integrator5'
                                            */
  real32_T Gain_Gain_ca;               /* Computed Parameter: Gain_Gain_ca
                                        * Referenced by: '<S448>/Gain'
                                        */
  real32_T Delay_2_InitialCondition;   /* Computed Parameter: Delay_2_InitialCondition
                                        * Referenced by: '<Root>/Delay'
                                        */
  real32_T Delay_3_InitialCondition;   /* Computed Parameter: Delay_3_InitialCondition
                                        * Referenced by: '<Root>/Delay'
                                        */
  real32_T Delay_4_InitialCondition_m; /* Computed Parameter: Delay_4_InitialCondition_m
                                        * Referenced by: '<Root>/Delay'
                                        */
  real32_T Delay_8_InitialCondition_m; /* Computed Parameter: Delay_8_InitialCondition_m
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint32_T Gain1_Gain_ap;              /* Computed Parameter: Gain1_Gain_ap
                                        * Referenced by: '<S10>/Gain1'
                                        */
  uint32_T Gain9_Gain;                 /* Computed Parameter: Gain9_Gain
                                        * Referenced by: '<S8>/Gain9'
                                        */
  uint32_T Gain1_Gain_po;              /* Computed Parameter: Gain1_Gain_po
                                        * Referenced by: '<S407>/Gain1'
                                        */
  uint32_T Gain5_Gain;                 /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<S408>/Gain5'
                                        */
  uint32_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S4>/Output'
                                        */
  uint32_T Constant_Value_pt;          /* Computed Parameter: Constant_Value_pt
                                        * Referenced by: '<S8>/Constant'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S12>/Delay'
                                        */
  uint32_T Delay_DelayLength_l;        /* Computed Parameter: Delay_DelayLength_l
                                        * Referenced by: '<S15>/Delay'
                                        */
  uint32_T Delay_DelayLength_k;        /* Computed Parameter: Delay_DelayLength_k
                                        * Referenced by: '<S17>/Delay'
                                        */
  uint32_T Delay_DelayLength_j;        /* Computed Parameter: Delay_DelayLength_j
                                        * Referenced by: '<S11>/Delay'
                                        */
  uint32_T Delay_DelayLength_lg;       /* Computed Parameter: Delay_DelayLength_lg
                                        * Referenced by: '<S13>/Delay'
                                        */
  uint32_T Delay_DelayLength_m;        /* Computed Parameter: Delay_DelayLength_m
                                        * Referenced by: '<S14>/Delay'
                                        */
  uint32_T Delay_DelayLength_f;        /* Computed Parameter: Delay_DelayLength_f
                                        * Referenced by: '<S16>/Delay'
                                        */
  uint32_T Constant_Value_lm;          /* Computed Parameter: Constant_Value_lm
                                        * Referenced by: '<S10>/Constant'
                                        */
  uint32_T Delay_DelayLength_g;        /* Computed Parameter: Delay_DelayLength_g
                                        * Referenced by: '<S94>/Delay'
                                        */
  uint32_T Delay_DelayLength_e;        /* Computed Parameter: Delay_DelayLength_e
                                        * Referenced by: '<S101>/Delay'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_io;/* Computed Parameter: DiscreteTimeIntegrator_IC_io
                                         * Referenced by: '<S99>/Discrete-Time Integrator'
                                         */
  uint32_T DiscreteTimeIntegrator_UpperS_c;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_c
                                            * Referenced by: '<S99>/Discrete-Time Integrator'
                                            */
  uint32_T DiscreteTimeIntegrator_LowerS_m;/* Computed Parameter: DiscreteTimeIntegrator_LowerS_m
                                            * Referenced by: '<S99>/Discrete-Time Integrator'
                                            */
  uint32_T Delay_4_DelayLength;        /* Computed Parameter: Delay_4_DelayLength
                                        * Referenced by: '<S57>/Delay'
                                        */
  uint32_T Delay_7_DelayLength;        /* Computed Parameter: Delay_7_DelayLength
                                        * Referenced by: '<S57>/Delay'
                                        */
  uint32_T Delay_8_DelayLength;        /* Computed Parameter: Delay_8_DelayLength
                                        * Referenced by: '<S57>/Delay'
                                        */
  uint32_T Delay_10_DelayLength;       /* Computed Parameter: Delay_10_DelayLength
                                        * Referenced by: '<S57>/Delay'
                                        */
  uint32_T Delay_DelayLength_fi;       /* Computed Parameter: Delay_DelayLength_fi
                                        * Referenced by: '<S138>/Delay'
                                        */
  uint32_T Delay_InitialCondition_n;   /* Computed Parameter: Delay_InitialCondition_n
                                        * Referenced by: '<S138>/Delay'
                                        */
  uint32_T Saturation_UpperSat_k5;     /* Computed Parameter: Saturation_UpperSat_k5
                                        * Referenced by: '<S138>/Saturation'
                                        */
  uint32_T Saturation_LowerSat_hb;     /* Computed Parameter: Saturation_LowerSat_hb
                                        * Referenced by: '<S138>/Saturation'
                                        */
  uint32_T Delay_DelayLength_md;       /* Computed Parameter: Delay_DelayLength_md
                                        * Referenced by: '<S135>/Delay'
                                        */
  uint32_T Delay_InitialCondition_ij;  /* Computed Parameter: Delay_InitialCondition_ij
                                        * Referenced by: '<S135>/Delay'
                                        */
  uint32_T Saturation_UpperSat_p;      /* Computed Parameter: Saturation_UpperSat_p
                                        * Referenced by: '<S135>/Saturation'
                                        */
  uint32_T Saturation_LowerSat_mo;     /* Computed Parameter: Saturation_LowerSat_mo
                                        * Referenced by: '<S135>/Saturation'
                                        */
  uint32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S141>/Constant'
                                        */
  uint32_T x_delay_DelayLength;        /* Expression: INS_PARAM.EXTPOS_POS_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S205>/x_delay'
                                        */
  uint32_T x_delay1_DelayLength;       /* Expression: INS_PARAM.EXTPOS_POS_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S205>/x_delay1'
                                        */
  uint32_T Delay_DelayLength_k2;       /* Computed Parameter: Delay_DelayLength_k2
                                        * Referenced by: '<S207>/Delay'
                                        */
  uint32_T x_delay_DelayLength_j;      /* Expression: INS_PARAM.GPS_POS_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S214>/x_delay'
                                        */
  uint32_T x_delay1_DelayLength_j;     /* Expression: INS_PARAM.GPS_POS_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S214>/x_delay1'
                                        */
  uint32_T vn_delay_DelayLength;       /* Expression: INS_PARAM.GPS_VEL_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S214>/vn_delay'
                                        */
  uint32_T vn_delay1_DelayLength;      /* Expression: INS_PARAM.GPS_VEL_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S214>/vn_delay1'
                                        */
  uint32_T vn_delay_DelayLength_l;     /* Expression: INS_PARAM.OPF_VEL_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S224>/vn_delay'
                                        */
  uint32_T ve_delay_DelayLength;       /* Expression: INS_PARAM.OPF_VEL_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S224>/ve_delay'
                                        */
  uint32_T Delay_DelayLength_fx;       /* Computed Parameter: Delay_DelayLength_fx
                                        * Referenced by: '<S242>/Delay'
                                        */
  uint32_T x_delay_DelayLength_m;      /* Expression: INS_PARAM.BARO_H_DELAY/INS_EXPORT_VALUE.period
                                        * Referenced by: '<S244>/x_delay'
                                        */
  uint32_T Delay_DelayLength_d;        /* Computed Parameter: Delay_DelayLength_d
                                        * Referenced by: '<S246>/Delay'
                                        */
  uint32_T Delay_DelayLength_mb;       /* Computed Parameter: Delay_DelayLength_mb
                                        * Referenced by: '<S251>/Delay'
                                        */
  uint32_T x_delay_DelayLength_o;      /* Expression: INS_PARAM.EXTPOS_POS_DELAY/INS_EXPORT_VALUE.period
                                        * Referenced by: '<S253>/x_delay'
                                        */
  uint32_T Delay_DelayLength_b;        /* Computed Parameter: Delay_DelayLength_b
                                        * Referenced by: '<S255>/Delay'
                                        */
  uint32_T h_delay_DelayLength;        /* Expression: INS_PARAM.GPS_POS_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S262>/h_delay'
                                        */
  uint32_T vd_delay_DelayLength;       /* Expression: INS_PARAM.GPS_VEL_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S262>/vd_delay'
                                        */
  uint32_T h_delay_DelayLength_c;      /* Expression: INS_PARAM.RF_H_DELAY/INS_EXPORT.period
                                        * Referenced by: '<S271>/h_delay'
                                        */
  uint32_T Delay_DelayLength_p;        /* Computed Parameter: Delay_DelayLength_p
                                        * Referenced by: '<S277>/Delay'
                                        */
  uint32_T Delay_DelayLength_ly;       /* Computed Parameter: Delay_DelayLength_ly
                                        * Referenced by: '<S226>/Delay'
                                        */
  uint32_T Delay_DelayLength_a;        /* Computed Parameter: Delay_DelayLength_a
                                        * Referenced by: '<S328>/Delay'
                                        */
  uint32_T Delay_DelayLength_gi;       /* Computed Parameter: Delay_DelayLength_gi
                                        * Referenced by: '<S340>/Delay'
                                        */
  uint32_T Delay_DelayLength_c;        /* Computed Parameter: Delay_DelayLength_c
                                        * Referenced by: '<S327>/Delay'
                                        */
  uint32_T Delay_DelayLength_d0;       /* Computed Parameter: Delay_DelayLength_d0
                                        * Referenced by: '<S339>/Delay'
                                        */
  uint32_T Delay_DelayLength_dm;       /* Computed Parameter: Delay_DelayLength_dm
                                        * Referenced by: '<S341>/Delay'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S359>/Delay1'
                                        */
  uint32_T Delay_DelayLength_ch;       /* Computed Parameter: Delay_DelayLength_ch
                                        * Referenced by: '<S360>/Delay'
                                        */
  uint32_T Delay1_DelayLength_o;       /* Computed Parameter: Delay1_DelayLength_o
                                        * Referenced by: '<S360>/Delay1'
                                        */
  uint32_T Delay_4_DelayLength_i;      /* Computed Parameter: Delay_4_DelayLength_i
                                        * Referenced by: '<S56>/Delay'
                                        */
  uint32_T Delay_5_DelayLength;        /* Computed Parameter: Delay_5_DelayLength
                                        * Referenced by: '<S56>/Delay'
                                        */
  uint32_T Delay_6_DelayLength;        /* Computed Parameter: Delay_6_DelayLength
                                        * Referenced by: '<S56>/Delay'
                                        */
  uint32_T Constant1_Value_f;          /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S377>/Constant1'
                                        */
  uint32_T Delay_DelayLength_jx;       /* Computed Parameter: Delay_DelayLength_jx
                                        * Referenced by: '<S377>/Delay'
                                        */
  uint32_T Delay1_DelayLength_p;       /* Computed Parameter: Delay1_DelayLength_p
                                        * Referenced by: '<S377>/Delay1'
                                        */
  uint32_T Delay1_InitialCondition_k;  /* Computed Parameter: Delay1_InitialCondition_k
                                        * Referenced by: '<S377>/Delay1'
                                        */
  uint32_T Saturation1_UpperSat_n;     /* Computed Parameter: Saturation1_UpperSat_n
                                        * Referenced by: '<S377>/Saturation1'
                                        */
  uint32_T Saturation1_LowerSat_m;     /* Computed Parameter: Saturation1_LowerSat_m
                                        * Referenced by: '<S377>/Saturation1'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_iu;/* Computed Parameter: DiscreteTimeIntegrator_IC_iu
                                         * Referenced by: '<S376>/Discrete-Time Integrator'
                                         */
  uint32_T Delay_DelayLength_ew;       /* Computed Parameter: Delay_DelayLength_ew
                                        * Referenced by: '<S384>/Delay'
                                        */
  uint32_T Delay_DelayLength_dn;       /* Computed Parameter: Delay_DelayLength_dn
                                        * Referenced by: '<S378>/Delay'
                                        */
  uint32_T Delay_InitialCondition_nt;  /* Computed Parameter: Delay_InitialCondition_nt
                                        * Referenced by: '<S378>/Delay'
                                        */
  uint32_T Saturation_UpperSat_f;      /* Computed Parameter: Saturation_UpperSat_f
                                        * Referenced by: '<S378>/Saturation'
                                        */
  uint32_T Saturation_LowerSat_pw;     /* Computed Parameter: Saturation_LowerSat_pw
                                        * Referenced by: '<S378>/Saturation'
                                        */
  uint32_T Delay_DelayLength_pl;       /* Computed Parameter: Delay_DelayLength_pl
                                        * Referenced by: '<S390>/Delay'
                                        */
  uint32_T Delay_DelayLength_n;        /* Computed Parameter: Delay_DelayLength_n
                                        * Referenced by: '<S391>/Delay'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_jj;/* Computed Parameter: DiscreteTimeIntegrator_IC_jj
                                         * Referenced by: '<S389>/Discrete-Time Integrator'
                                         */
  uint32_T Delay_DelayLength_fr;       /* Computed Parameter: Delay_DelayLength_fr
                                        * Referenced by: '<S398>/Delay'
                                        */
  uint32_T Delay_DelayLength_n3;       /* Computed Parameter: Delay_DelayLength_n3
                                        * Referenced by: '<S393>/Delay'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_p;/* Computed Parameter: DiscreteTimeIntegrator_IC_p
                                        * Referenced by: '<S406>/Discrete-Time Integrator'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_ba;/* Computed Parameter: DiscreteTimeIntegrator_IC_ba
                                         * Referenced by: '<S421>/Discrete-Time Integrator'
                                         */
  uint32_T Delay_DelayLength_d3;       /* Computed Parameter: Delay_DelayLength_d3
                                        * Referenced by: '<S424>/Delay'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_k;/* Computed Parameter: DiscreteTimeIntegrator_IC_k
                                        * Referenced by: '<S429>/Discrete-Time Integrator'
                                        */
  uint32_T Delay_DelayLength_bx;       /* Computed Parameter: Delay_DelayLength_bx
                                        * Referenced by: '<S444>/Delay'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_n;/* Computed Parameter: DiscreteTimeIntegrator_IC_n
                                        * Referenced by: '<S447>/Discrete-Time Integrator'
                                        */
  uint32_T Delay_DelayLength_b4;       /* Computed Parameter: Delay_DelayLength_b4
                                        * Referenced by: '<S451>/Delay'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_f4;/* Computed Parameter: DiscreteTimeIntegrator_IC_f4
                                         * Referenced by: '<S454>/Discrete-Time Integrator'
                                         */
  uint32_T Delay_DelayLength_ca;       /* Computed Parameter: Delay_DelayLength_ca
                                        * Referenced by: '<S459>/Delay'
                                        */
  uint32_T DiscreteTimeIntegrator_IC_n1;/* Computed Parameter: DiscreteTimeIntegrator_IC_n1
                                         * Referenced by: '<S455>/Discrete-Time Integrator'
                                         */
  uint32_T DiscreteTimeIntegrator_UpperS_l;/* Computed Parameter: DiscreteTimeIntegrator_UpperS_l
                                            * Referenced by: '<S455>/Discrete-Time Integrator'
                                            */
  uint32_T DiscreteTimeIntegrator_Lower_bq;/* Computed Parameter: DiscreteTimeIntegrator_Lower_bq
                                            * Referenced by: '<S455>/Discrete-Time Integrator'
                                            */
  uint32_T Delay_1_DelayLength;        /* Computed Parameter: Delay_1_DelayLength
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint32_T Delay_2_DelayLength;        /* Computed Parameter: Delay_2_DelayLength
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint32_T Delay_3_DelayLength;        /* Computed Parameter: Delay_3_DelayLength
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint32_T Delay_4_DelayLength_g;      /* Computed Parameter: Delay_4_DelayLength_g
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint32_T Delay_8_DelayLength_g;      /* Computed Parameter: Delay_8_DelayLength_g
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint16_T Gain1_Gain_kq;              /* Computed Parameter: Gain1_Gain_kq
                                        * Referenced by: '<S8>/Gain1'
                                        */
  uint16_T Gain13_Gain;                /* Computed Parameter: Gain13_Gain
                                        * Referenced by: '<S8>/Gain13'
                                        */
  uint16_T Gain12_Gain;                /* Computed Parameter: Gain12_Gain
                                        * Referenced by: '<S8>/Gain12'
                                        */
  uint16_T Gain11_Gain;                /* Computed Parameter: Gain11_Gain
                                        * Referenced by: '<S8>/Gain11'
                                        */
  uint16_T Gain5_Gain_e;               /* Computed Parameter: Gain5_Gain_e
                                        * Referenced by: '<S8>/Gain5'
                                        */
  uint16_T Gain4_Gain_a;               /* Computed Parameter: Gain4_Gain_a
                                        * Referenced by: '<S8>/Gain4'
                                        */
  uint16_T Gain2_Gain_o5;              /* Computed Parameter: Gain2_Gain_o5
                                        * Referenced by: '<S8>/Gain2'
                                        */
  uint16_T GPS_Delay_Value;            /* Computed Parameter: GPS_Delay_Value
                                        * Referenced by: '<S87>/GPS_Delay'
                                        */
  uint16_T Constant_Value_gn;          /* Computed Parameter: Constant_Value_gn
                                        * Referenced by: '<S323>/Constant'
                                        */
  uint16_T Constant_Value_bt;          /* Computed Parameter: Constant_Value_bt
                                        * Referenced by: '<S324>/Constant'
                                        */
  uint16_T Constant_Value_m3;          /* Computed Parameter: Constant_Value_m3
                                        * Referenced by: '<S362>/Constant'
                                        */
  uint16_T Constant_Value_pti;         /* Computed Parameter: Constant_Value_pti
                                        * Referenced by: '<S364>/Constant'
                                        */
  boolean_T Delay_InitialCondition_go; /* Computed Parameter: Delay_InitialCondition_go
                                        * Referenced by: '<S12>/Delay'
                                        */
  boolean_T Delay_InitialCondition_mz; /* Computed Parameter: Delay_InitialCondition_mz
                                        * Referenced by: '<S15>/Delay'
                                        */
  boolean_T Relay1_YOn_i;              /* Computed Parameter: Relay1_YOn_i
                                        * Referenced by: '<S9>/Relay1'
                                        */
  boolean_T Relay1_YOff_k;             /* Computed Parameter: Relay1_YOff_k
                                        * Referenced by: '<S9>/Relay1'
                                        */
  boolean_T Delay_InitialCondition_a;  /* Computed Parameter: Delay_InitialCondition_a
                                        * Referenced by: '<S17>/Delay'
                                        */
  boolean_T Delay_InitialCondition_c;  /* Computed Parameter: Delay_InitialCondition_c
                                        * Referenced by: '<S11>/Delay'
                                        */
  boolean_T Delay_InitialCondition_cj; /* Computed Parameter: Delay_InitialCondition_cj
                                        * Referenced by: '<S13>/Delay'
                                        */
  boolean_T Delay_InitialCondition_ae; /* Computed Parameter: Delay_InitialCondition_ae
                                        * Referenced by: '<S14>/Delay'
                                        */
  boolean_T Delay_InitialCondition_em; /* Computed Parameter: Delay_InitialCondition_em
                                        * Referenced by: '<S16>/Delay'
                                        */
  boolean_T Constant_Value_mt;         /* Computed Parameter: Constant_Value_mt
                                        * Referenced by: '<S22>/Constant'
                                        */
  boolean_T Constant_Value_m2;         /* Computed Parameter: Constant_Value_m2
                                        * Referenced by: '<S27>/Constant'
                                        */
  boolean_T Constant_Value_o2;         /* Computed Parameter: Constant_Value_o2
                                        * Referenced by: '<S32>/Constant'
                                        */
  boolean_T Constant_Value_hk;         /* Computed Parameter: Constant_Value_hk
                                        * Referenced by: '<S37>/Constant'
                                        */
  boolean_T Constant_Value_l1;         /* Computed Parameter: Constant_Value_l1
                                        * Referenced by: '<S42>/Constant'
                                        */
  boolean_T Constant_Value_m2n;        /* Computed Parameter: Constant_Value_m2n
                                        * Referenced by: '<S47>/Constant'
                                        */
  boolean_T Constant_Value_ao;         /* Computed Parameter: Constant_Value_ao
                                        * Referenced by: '<S52>/Constant'
                                        */
  boolean_T Constant_Value_af;         /* Computed Parameter: Constant_Value_af
                                        * Referenced by: '<S139>/Constant'
                                        */
  boolean_T Constant_Value_jz;         /* Computed Parameter: Constant_Value_jz
                                        * Referenced by: '<S295>/Constant'
                                        */
  boolean_T Constant_Value_br;         /* Computed Parameter: Constant_Value_br
                                        * Referenced by: '<S298>/Constant'
                                        */
  boolean_T Constant_Value_pf;         /* Computed Parameter: Constant_Value_pf
                                        * Referenced by: '<S300>/Constant'
                                        */
  boolean_T Constant_Value_ha;         /* Computed Parameter: Constant_Value_ha
                                        * Referenced by: '<S301>/Constant'
                                        */
  boolean_T Constant_Value_bz;         /* Computed Parameter: Constant_Value_bz
                                        * Referenced by: '<S304>/Constant'
                                        */
  boolean_T Constant_Value_dc;         /* Computed Parameter: Constant_Value_dc
                                        * Referenced by: '<S338>/Constant'
                                        */
  boolean_T Delay_InitialCondition_in; /* Computed Parameter: Delay_InitialCondition_in
                                        * Referenced by: '<S328>/Delay'
                                        */
  boolean_T Constant_Value_jo;         /* Computed Parameter: Constant_Value_jo
                                        * Referenced by: '<S351>/Constant'
                                        */
  boolean_T Delay_InitialCondition_ns; /* Computed Parameter: Delay_InitialCondition_ns
                                        * Referenced by: '<S340>/Delay'
                                        */
  boolean_T Delay_InitialCondition_k;  /* Computed Parameter: Delay_InitialCondition_k
                                        * Referenced by: '<S327>/Delay'
                                        */
  boolean_T Constant_Value_nm;         /* Computed Parameter: Constant_Value_nm
                                        * Referenced by: '<S333>/Constant'
                                        */
  boolean_T Delay_InitialCondition_dh; /* Computed Parameter: Delay_InitialCondition_dh
                                        * Referenced by: '<S339>/Delay'
                                        */
  boolean_T Constant_Value_ej;         /* Computed Parameter: Constant_Value_ej
                                        * Referenced by: '<S346>/Constant'
                                        */
  boolean_T Delay_InitialCondition_ia; /* Computed Parameter: Delay_InitialCondition_ia
                                        * Referenced by: '<S341>/Delay'
                                        */
  boolean_T Constant_Value_i;          /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S356>/Constant'
                                        */
  boolean_T Delay_InitialCondition_f;  /* Computed Parameter: Delay_InitialCondition_f
                                        * Referenced by: '<S451>/Delay'
                                        */
  boolean_T Constant_Value_pa;         /* Computed Parameter: Constant_Value_pa
                                        * Referenced by: '<S462>/Constant'
                                        */
  boolean_T Delay_1_InitialCondition;  /* Computed Parameter: Delay_1_InitialCondition
                                        * Referenced by: '<Root>/Delay'
                                        */
  int8_T Saturation1_UpperSat_d;       /* Computed Parameter: Saturation1_UpperSat_d
                                        * Referenced by: '<S293>/Saturation1'
                                        */
  int8_T Saturation1_LowerSat_p;       /* Computed Parameter: Saturation1_LowerSat_p
                                        * Referenced by: '<S293>/Saturation1'
                                        */
  int8_T Constant_Value_ej5;           /* Computed Parameter: Constant_Value_ej5
                                        * Referenced by: '<S296>/Constant'
                                        */
  int8_T Saturation_UpperSat_m;        /* Computed Parameter: Saturation_UpperSat_m
                                        * Referenced by: '<S293>/Saturation'
                                        */
  int8_T Saturation_LowerSat_h5;       /* Computed Parameter: Saturation_LowerSat_h5
                                        * Referenced by: '<S293>/Saturation'
                                        */
  int8_T Constant_Value_m2k;           /* Computed Parameter: Constant_Value_m2k
                                        * Referenced by: '<S297>/Constant'
                                        */
  int8_T Constant_Value_bze;           /* Computed Parameter: Constant_Value_bze
                                        * Referenced by: '<S299>/Constant'
                                        */
  int8_T Saturation2_UpperSat_l;       /* Computed Parameter: Saturation2_UpperSat_l
                                        * Referenced by: '<S294>/Saturation2'
                                        */
  int8_T Saturation2_LowerSat_i;       /* Computed Parameter: Saturation2_LowerSat_i
                                        * Referenced by: '<S294>/Saturation2'
                                        */
  int8_T Constant_Value_c1;            /* Computed Parameter: Constant_Value_c1
                                        * Referenced by: '<S302>/Constant'
                                        */
  int8_T Saturation_UpperSat_gx;       /* Computed Parameter: Saturation_UpperSat_gx
                                        * Referenced by: '<S294>/Saturation'
                                        */
  int8_T Saturation_LowerSat_co;       /* Computed Parameter: Saturation_LowerSat_co
                                        * Referenced by: '<S294>/Saturation'
                                        */
  int8_T Constant_Value_lc;            /* Computed Parameter: Constant_Value_lc
                                        * Referenced by: '<S303>/Constant'
                                        */
  int8_T Saturation1_UpperSat_ig;      /* Computed Parameter: Saturation1_UpperSat_ig
                                        * Referenced by: '<S294>/Saturation1'
                                        */
  int8_T Saturation1_LowerSat_g;       /* Computed Parameter: Saturation1_LowerSat_g
                                        * Referenced by: '<S294>/Saturation1'
                                        */
  int8_T Constant_Value_kt;            /* Computed Parameter: Constant_Value_kt
                                        * Referenced by: '<S305>/Constant'
                                        */
  int8_T Constant_Value_ew;            /* Computed Parameter: Constant_Value_ew
                                        * Referenced by: '<S306>/Constant'
                                        */
  uint8_T Gain6_Gain;                  /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<S10>/Gain6'
                                        */
  uint8_T Gain5_Gain_a;                /* Computed Parameter: Gain5_Gain_a
                                        * Referenced by: '<S10>/Gain5'
                                        */
  uint8_T Gain4_Gain_p;                /* Computed Parameter: Gain4_Gain_p
                                        * Referenced by: '<S10>/Gain4'
                                        */
  uint8_T Gain3_Gain_f;                /* Computed Parameter: Gain3_Gain_f
                                        * Referenced by: '<S10>/Gain3'
                                        */
  uint8_T Gain2_Gain_h;                /* Computed Parameter: Gain2_Gain_h
                                        * Referenced by: '<S10>/Gain2'
                                        */
  uint8_T Constant1_Value_b;           /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S384>/Constant1'
                                        */
  uint8_T Delay_InitialCondition_j0;   /* Computed Parameter: Delay_InitialCondition_j0
                                        * Referenced by: '<S384>/Delay'
                                        */
  uint8_T Constant1_Value_m;           /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S390>/Constant1'
                                        */
  uint8_T Constant1_Value_cs;          /* Computed Parameter: Constant1_Value_cs
                                        * Referenced by: '<S393>/Constant1'
                                        */
  uint8_T Constant1_Value_ns;          /* Computed Parameter: Constant1_Value_ns
                                        * Referenced by: '<S398>/Constant1'
                                        */
  uint8_T Delay_InitialCondition_gj;   /* Computed Parameter: Delay_InitialCondition_gj
                                        * Referenced by: '<S390>/Delay'
                                        */
  uint8_T Delay_InitialCondition_h;    /* Computed Parameter: Delay_InitialCondition_h
                                        * Referenced by: '<S398>/Delay'
                                        */
  uint8_T Delay_InitialCondition_ng;   /* Computed Parameter: Delay_InitialCondition_ng
                                        * Referenced by: '<S393>/Delay'
                                        */
  uint8_T Constant1_Value_no;          /* Computed Parameter: Constant1_Value_no
                                        * Referenced by: '<S424>/Constant1'
                                        */
  uint8_T Delay_InitialCondition_ja;   /* Computed Parameter: Delay_InitialCondition_ja
                                        * Referenced by: '<S424>/Delay'
                                        */
  uint8_T Constant1_Value_ev;          /* Computed Parameter: Constant1_Value_ev
                                        * Referenced by: '<S444>/Constant1'
                                        */
  uint8_T Delay_InitialCondition_jy;   /* Computed Parameter: Delay_InitialCondition_jy
                                        * Referenced by: '<S444>/Delay'
                                        */
  uint8_T Constant1_Value_o0;          /* Computed Parameter: Constant1_Value_o0
                                        * Referenced by: '<S451>/Constant1'
                                        */
  uint8_T Relay_OnVal_f;               /* Computed Parameter: Relay_OnVal_f
                                        * Referenced by: '<S447>/Relay'
                                        */
  uint8_T Relay_OffVal_k;              /* Computed Parameter: Relay_OffVal_k
                                        * Referenced by: '<S447>/Relay'
                                        */
  uint8_T Constant1_Value_h;           /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S459>/Constant1'
                                        */
  uint8_T Delay_InitialCondition_ny;   /* Computed Parameter: Delay_InitialCondition_ny
                                        * Referenced by: '<S459>/Delay'
                                        */
  rtP_Baro_Velocity_INS_T Rf_Velocity; /* '<S281>/Rf_Velocity' */
  rtP_Baro_Velocity_INS_T Baro_Velocity;/* '<S281>/Baro_Velocity' */
};

/* Parameters (default storage) */
typedef struct Parameters_INS_T_ Parameters_INS_T;

/* Real-time Model Data Structure */
struct tag_RTM_INS_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern Parameters_INS_T INS_P;

/* Block signals (default storage) */
extern BlockIO_INS_T INS_B;

/* Block states (default storage) */
extern D_Work_INS_T INS_DWork;

/* External inputs (root inport signals with default storage) */
extern ExternalInputs_INS_T INS_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExternalOutputs_INS_T INS_Y;

/* External data declarations for dependent source files */
extern const INS_Out_Bus INS_rtZINS_Out_Bus;/* INS_Out_Bus ground */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern struct_6ZFSSBscNEvOifNJsobUVH INS_PARAM;/* Variable: INS_PARAM
                                                * Referenced by:
                                                *   '<S407>/Constant1'
                                                *   '<S407>/Gain2'
                                                *   '<S408>/Constant7'
                                                *   '<S408>/Gain3'
                                                *   '<S69>/Gain1'
                                                *   '<S72>/Constant'
                                                *   '<S72>/mag_correct_gain'
                                                *   '<S75>/Gain'
                                                *   '<S204>/Gain'
                                                *   '<S204>/Gain2'
                                                *   '<S204>/Gain3'
                                                *   '<S213>/Gain'
                                                *   '<S213>/Gain2'
                                                *   '<S213>/Gain3'
                                                *   '<S223>/Gain'
                                                *   '<S223>/Gain2'
                                                *   '<S243>/Gain'
                                                *   '<S243>/Gain1'
                                                *   '<S243>/Gain2'
                                                *   '<S252>/Gain'
                                                *   '<S252>/Gain1'
                                                *   '<S252>/Gain2'
                                                *   '<S261>/Gain'
                                                *   '<S261>/Gain1'
                                                *   '<S261>/Gain2'
                                                *   '<S270>/Gain'
                                                *   '<S270>/Gain1'
                                                *   '<S270>/Gain2'
                                                */
extern struct_TYt7YeNdxIDXfczXumtXXB INS_EXPORT;/* Variable: INS_EXPORT
                                                 * Referenced by:
                                                 *   '<S4>/Constant'
                                                 *   '<S376>/Constant'
                                                 *   '<S389>/Constant'
                                                 *   '<S421>/Constant'
                                                 *   '<S429>/Constant'
                                                 *   '<S447>/Constant'
                                                 *   '<S454>/Constant'
                                                 *   '<S11>/Constant'
                                                 *   '<S12>/Constant'
                                                 *   '<S13>/Constant'
                                                 *   '<S14>/Constant'
                                                 *   '<S15>/Constant'
                                                 *   '<S16>/Constant'
                                                 *   '<S17>/Constant'
                                                 *   '<S406>/Constant'
                                                 *   '<S99>/Constant1'
                                                 *   '<S327>/Constant'
                                                 *   '<S328>/Constant'
                                                 *   '<S339>/Constant'
                                                 *   '<S340>/Constant'
                                                 *   '<S341>/Constant'
                                                 */

/* Model entry point functions */
extern void INS_init(void);
extern void INS_step(void);

/* Real-time Model object */
extern RT_MODEL_INS_T *const INS_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'INS'
 * '<S1>'   : 'INS/Bus_Constructor'
 * '<S2>'   : 'INS/Data_Fusion'
 * '<S3>'   : 'INS/Sensor_PreProcess'
 * '<S4>'   : 'INS/Bus_Constructor/Counter'
 * '<S5>'   : 'INS/Bus_Constructor/Rotation_Output'
 * '<S6>'   : 'INS/Bus_Constructor/Status_Output'
 * '<S7>'   : 'INS/Bus_Constructor/Translation_Output'
 * '<S8>'   : 'INS/Bus_Constructor/Status_Output/INS_Flag'
 * '<S9>'   : 'INS/Bus_Constructor/Status_Output/INS_Quality'
 * '<S10>'  : 'INS/Bus_Constructor/Status_Output/Sensor_Status'
 * '<S11>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check1'
 * '<S12>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check2'
 * '<S13>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check3'
 * '<S14>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check4'
 * '<S15>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check5'
 * '<S16>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check6'
 * '<S17>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check8'
 * '<S18>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check1/Compare To Constant'
 * '<S19>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check1/Compare To Constant1'
 * '<S20>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check1/Compare To Constant2'
 * '<S21>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check1/Detect Rise Positive'
 * '<S22>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check1/Detect Rise Positive/Positive'
 * '<S23>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check2/Compare To Constant'
 * '<S24>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check2/Compare To Constant1'
 * '<S25>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check2/Compare To Constant2'
 * '<S26>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check2/Detect Rise Positive'
 * '<S27>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check2/Detect Rise Positive/Positive'
 * '<S28>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check3/Compare To Constant'
 * '<S29>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check3/Compare To Constant1'
 * '<S30>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check3/Compare To Constant2'
 * '<S31>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check3/Detect Rise Positive'
 * '<S32>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check3/Detect Rise Positive/Positive'
 * '<S33>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check4/Compare To Constant'
 * '<S34>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check4/Compare To Constant1'
 * '<S35>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check4/Compare To Constant2'
 * '<S36>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check4/Detect Rise Positive'
 * '<S37>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check4/Detect Rise Positive/Positive'
 * '<S38>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check5/Compare To Constant'
 * '<S39>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check5/Compare To Constant1'
 * '<S40>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check5/Compare To Constant2'
 * '<S41>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check5/Detect Rise Positive'
 * '<S42>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check5/Detect Rise Positive/Positive'
 * '<S43>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check6/Compare To Constant'
 * '<S44>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check6/Compare To Constant1'
 * '<S45>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check6/Compare To Constant2'
 * '<S46>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check6/Detect Rise Positive'
 * '<S47>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check6/Detect Rise Positive/Positive'
 * '<S48>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check8/Compare To Constant'
 * '<S49>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check8/Compare To Constant1'
 * '<S50>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check8/Compare To Constant2'
 * '<S51>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check8/Detect Rise Positive'
 * '<S52>'  : 'INS/Bus_Constructor/Status_Output/INS_Flag/valid_check8/Detect Rise Positive/Positive'
 * '<S53>'  : 'INS/Bus_Constructor/Status_Output/Sensor_Status/Compare To Zero'
 * '<S54>'  : 'INS/Bus_Constructor/Status_Output/Sensor_Status/Compare To Zero1'
 * '<S55>'  : 'INS/Data_Fusion/Rotation_Filter'
 * '<S56>'  : 'INS/Data_Fusion/Translation_Filter'
 * '<S57>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS'
 * '<S58>'  : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess'
 * '<S59>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Bus_Constructor'
 * '<S60>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct'
 * '<S61>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update'
 * '<S62>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Bus_Constructor/Euler_Angle'
 * '<S63>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Bus_Constructor/Psi To DCM'
 * '<S64>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Bus_Constructor/Euler_Angle/Quaternion To Euler'
 * '<S65>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Bus_Constructor/Euler_Angle/Quaternion To Euler/Quaternion Normalize'
 * '<S66>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Bus_Constructor/Euler_Angle/Quaternion To Euler/Quaternion Normalize/Quaternion Modulus'
 * '<S67>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Bus_Constructor/Psi To DCM/Rotation Matrix Z'
 * '<S68>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction'
 * '<S69>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Gyro_Bias_Correction'
 * '<S70>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct'
 * '<S71>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/ExternalPos_Correct'
 * '<S72>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct'
 * '<S73>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct'
 * '<S74>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator'
 * '<S75>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Heading_Correct'
 * '<S76>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct'
 * '<S77>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Heading_Correct/Cross Product'
 * '<S78>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Heading_Correct/Cross Product/Subsystem'
 * '<S79>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Heading_Correct/Cross Product/Subsystem1'
 * '<S80>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct/Cross Product'
 * '<S81>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct/Saturation'
 * '<S82>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct/Vector Normalize'
 * '<S83>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct/Vector Normalize1'
 * '<S84>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct/Cross Product/Subsystem'
 * '<S85>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct/Cross Product/Subsystem1'
 * '<S86>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Correct/Verticle_Correct/Saturation/Vector Modulus'
 * '<S87>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator/Estimate_Acc'
 * '<S88>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator/Measure_Acc'
 * '<S89>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator/Estimate_Acc/Second Order LPF'
 * '<S90>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator/Measure_Acc/Bus_Selection'
 * '<S91>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator/Measure_Acc/Detect Increase'
 * '<S92>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator/Measure_Acc/GPS_Meas_Acc'
 * '<S93>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Attitude_Correct/Acc_Estimator/Measure_Acc/Valid_Check'
 * '<S94>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/ExternalPos_Correct/Bias_Estimation'
 * '<S95>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/ExternalPos_Correct/psi_err_saturation'
 * '<S96>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/ExternalPos_Correct/Bias_Estimation/Bias'
 * '<S97>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/ExternalPos_Correct/Bias_Estimation/Detect Increase'
 * '<S98>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/ExternalPos_Correct/psi_err_saturation/Compare To Constant'
 * '<S99>'  : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct'
 * '<S100>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Mag_Heading'
 * '<S101>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/Bias_Estimation'
 * '<S102>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/Compare To Constant'
 * '<S103>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/Compare To Constant4'
 * '<S104>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/Compare To Zero'
 * '<S105>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/Second Order LPF'
 * '<S106>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/psi_err_saturation'
 * '<S107>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/Bias_Estimation/Bias'
 * '<S108>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/Bias_Estimation/Detect Increase'
 * '<S109>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Attitude_Correction/Mag_Correct/Hover_Heading_Correct/psi_err_saturation/Compare To Constant'
 * '<S110>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Gyro_Bias_Correction/Compare To Constant'
 * '<S111>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Gyro_Bias_Correction/Second Order LPF'
 * '<S112>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Correct/Gyro_Bias_Correction/Vector Modulus'
 * '<S113>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update'
 * '<S114>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Gyro_Bias_Update'
 * '<S115>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion Multiply'
 * '<S116>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion Normalize'
 * '<S117>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion To DCM'
 * '<S118>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion Multiply/q_0'
 * '<S119>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion Multiply/q_1'
 * '<S120>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion Multiply/q_2'
 * '<S121>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion Multiply/q_4'
 * '<S122>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion Normalize/Quaternion Modulus'
 * '<S123>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion To DCM/Quaternion Normalize'
 * '<S124>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion To DCM/column_1'
 * '<S125>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion To DCM/column_2'
 * '<S126>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion To DCM/column_3'
 * '<S127>' : 'INS/Data_Fusion/Rotation_Filter/AHRS/Update/Attitude_Update/Quaternion To DCM/Quaternion Normalize/Quaternion Modulus'
 * '<S128>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset'
 * '<S129>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude'
 * '<S130>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Standstill'
 * '<S131>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Compare To Constant'
 * '<S132>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Compare To Constant1'
 * '<S133>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Detect Rise Positive'
 * '<S134>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Interval Test'
 * '<S135>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Reset Heading'
 * '<S136>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Vector Modulus'
 * '<S137>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Vector Modulus1'
 * '<S138>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/sample_valid'
 * '<S139>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Detect Rise Positive/Positive'
 * '<S140>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Reset Heading/Detect Rise Positive1'
 * '<S141>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/Reset Heading/Detect Rise Positive1/Positive'
 * '<S142>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Attitude_Reset/sample_valid/valid_samples'
 * '<S143>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Cross Product'
 * '<S144>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Cross Product1'
 * '<S145>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion'
 * '<S146>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Vector Normalize'
 * '<S147>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Vector Normalize1'
 * '<S148>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Vector Normalize2'
 * '<S149>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Cross Product/Subsystem'
 * '<S150>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Cross Product/Subsystem1'
 * '<S151>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Cross Product1/Subsystem'
 * '<S152>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/Cross Product1/Subsystem1'
 * '<S153>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/DCM Trace'
 * '<S154>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace'
 * '<S155>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Positive Trace'
 * '<S156>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(1,1)'
 * '<S157>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(2,2)'
 * '<S158>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(3,3)'
 * '<S159>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/diag(DCM)'
 * '<S160>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S161>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S162>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S163>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s'
 * '<S164>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1'
 * '<S165>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S166>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S167>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S168>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s'
 * '<S169>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1'
 * '<S170>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S171>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S172>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S173>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s'
 * '<S174>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1'
 * '<S175>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S176>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S177>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Initial_Attitude/DCM To Quaternion/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S178>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Standstill/First Order HPF'
 * '<S179>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Standstill/First Order LPF'
 * '<S180>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Standstill/First Order LPF1'
 * '<S181>' : 'INS/Data_Fusion/Rotation_Filter/RF_Data_PreProcess/Standstill/First Order HPF/First Order LPF'
 * '<S182>' : 'INS/Data_Fusion/Translation_Filter/CF'
 * '<S183>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess'
 * '<S184>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor'
 * '<S185>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter'
 * '<S186>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter'
 * '<S187>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select'
 * '<S188>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/Bus_Select'
 * '<S189>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/Height_Above_Ground'
 * '<S190>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/Local_Position'
 * '<S191>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/Velocity'
 * '<S192>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/WGS84_Position'
 * '<S193>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/WGS84_Position/WGS84_Position'
 * '<S194>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/WGS84_Position/WGS84_Position/safe_divide'
 * '<S195>' : 'INS/Data_Fusion/Translation_Filter/CF/Bus_Constructor/Bus_Select/WGS84_Position/WGS84_Position/safe_divide/Zero_Value_Exclusion'
 * '<S196>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct'
 * '<S197>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict'
 * '<S198>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct'
 * '<S199>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct'
 * '<S200>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/OptFlow Correct'
 * '<S201>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct'
 * '<S202>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Detect Change'
 * '<S203>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Error_Integrate'
 * '<S204>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Error_Scaling'
 * '<S205>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Estimate_State'
 * '<S206>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Measurement'
 * '<S207>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Measurement/Bias_Estimation'
 * '<S208>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Measurement/Bias_Estimation/Bias'
 * '<S209>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/ExternalPos Correct/ExternalPos_Correct/Measurement/Bias_Estimation/Detect Increase'
 * '<S210>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct'
 * '<S211>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Detect Change'
 * '<S212>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Error_Integrate'
 * '<S213>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Error_Scaling'
 * '<S214>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Estimate_State'
 * '<S215>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Measurement'
 * '<S216>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Measurement/Bias_Estimation'
 * '<S217>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Measurement/Bias_Estimation/Bias'
 * '<S218>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Measurement/Bias_Estimation/Bias/Bias_Update'
 * '<S219>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/GPS Correct/GPS_Correct/Measurement/Bias_Estimation/Bias/Detect Increase'
 * '<S220>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/OptFlow Correct/OptFlow_Correct'
 * '<S221>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/OptFlow Correct/OptFlow_Correct/Detect Change'
 * '<S222>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/OptFlow Correct/OptFlow_Correct/Error_Integrate'
 * '<S223>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/OptFlow Correct/OptFlow_Correct/Error_Scaling'
 * '<S224>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/OptFlow Correct/OptFlow_Correct/Estimate_State'
 * '<S225>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Correct/OptFlow Correct/OptFlow_Correct/Measurement'
 * '<S226>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Propagate'
 * '<S227>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Update'
 * '<S228>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Propagate/States_Init'
 * '<S229>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Propagate/States_Init/Pos_Init'
 * '<S230>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Propagate/States_Init/Vel_Init'
 * '<S231>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Propagate/States_Init/Pos_Init/GPS_Pos_Init'
 * '<S232>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Propagate/States_Init/Vel_Init/GPS_Vel_Init'
 * '<S233>' : 'INS/Data_Fusion/Translation_Filter/CF/Horizontal_Filter/Predict/Propagate/States_Init/Vel_Init/OptFlow_Vel_Init'
 * '<S234>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct'
 * '<S235>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict'
 * '<S236>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct'
 * '<S237>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct'
 * '<S238>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct'
 * '<S239>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct'
 * '<S240>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct'
 * '<S241>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Detect Change'
 * '<S242>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Error_Hold'
 * '<S243>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Error_Scaling'
 * '<S244>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Estimate_States'
 * '<S245>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Measurement'
 * '<S246>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Measurement/Bias_Estimation'
 * '<S247>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Measurement/Bias_Estimation/Bias'
 * '<S248>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Baro_Correct/Baro_Correct/Measurement/Bias_Estimation/Detect Increase'
 * '<S249>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct'
 * '<S250>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Detect Change'
 * '<S251>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Error_Hold'
 * '<S252>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Error_Scaling'
 * '<S253>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Estimate_States'
 * '<S254>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Measurement'
 * '<S255>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Measurement/Bias_Estimation'
 * '<S256>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Measurement/Bias_Estimation/Bias'
 * '<S257>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/ExternalPos_Correct/ExternalPos_Correct/Measurement/Bias_Estimation/Detect Increase'
 * '<S258>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct'
 * '<S259>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Detect Change'
 * '<S260>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Error_Hold'
 * '<S261>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Error_Scaling'
 * '<S262>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Estimate_State'
 * '<S263>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Measurement'
 * '<S264>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Measurement/Bias_Estimation'
 * '<S265>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Measurement/Bias_Estimation/Bias'
 * '<S266>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/GPS_Correct/GPS_Correct/Measurement/Bias_Estimation/Detect Increase'
 * '<S267>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct'
 * '<S268>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Detect Change'
 * '<S269>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Error_Hold'
 * '<S270>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Error_Scaling'
 * '<S271>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Estimate_State'
 * '<S272>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Measurement'
 * '<S273>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Measurement/Bias_Estimation'
 * '<S274>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Measurement/Bias_Estimation/Bias'
 * '<S275>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Measurement/Bias_Estimation/Detect Increase'
 * '<S276>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Correct/Rf_Correct/Rangefinder_Correct/Measurement/Bias_Estimation/Detect_Jump_Signal'
 * '<S277>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate'
 * '<S278>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Update'
 * '<S279>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init'
 * '<S280>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Height_Init'
 * '<S281>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Velocity_Init'
 * '<S282>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Height_Init/Baro_Reference_Height'
 * '<S283>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Height_Init/GPS_Reference_Height'
 * '<S284>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Height_Init/Rf_Reference_Height'
 * '<S285>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Velocity_Init/Baro_Velocity'
 * '<S286>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Velocity_Init/GPS_Velocity'
 * '<S287>' : 'INS/Data_Fusion/Translation_Filter/CF/Verticle_Filter/Predict/Propagate/States_Init/Velocity_Init/Rf_Velocity'
 * '<S288>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process'
 * '<S289>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control'
 * '<S290>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select'
 * '<S291>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Measures'
 * '<S292>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Status'
 * '<S293>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Horizontal_Sensor_Select'
 * '<S294>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select'
 * '<S295>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Horizontal_Sensor_Select/Compare To Zero1'
 * '<S296>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Horizontal_Sensor_Select/Compare To Zero2'
 * '<S297>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Horizontal_Sensor_Select/Compare To Zero3'
 * '<S298>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Horizontal_Sensor_Select/Compare To Zero4'
 * '<S299>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Horizontal_Sensor_Select/Compare To Zero5'
 * '<S300>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select/Compare To Zero1'
 * '<S301>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select/Compare To Zero2'
 * '<S302>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select/Compare To Zero3'
 * '<S303>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select/Compare To Zero4'
 * '<S304>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select/Compare To Zero5'
 * '<S305>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select/Compare To Zero6'
 * '<S306>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/Sensor_Select/Vertical_Sensor_Select/Compare To Zero7'
 * '<S307>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Measures/Barometer_Meas'
 * '<S308>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Measures/ExternalPos_Meas'
 * '<S309>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Measures/GPS_Meas'
 * '<S310>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Measures/OpticalFlow_Meas'
 * '<S311>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Measures/Rangefinder_Meas'
 * '<S312>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Measures/Barometer_Meas/Second Order LPF'
 * '<S313>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Status/Barometer_Status'
 * '<S314>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Status/ExternalPos_Status'
 * '<S315>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Status/GPS_Status'
 * '<S316>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Status/OpticalFlow_Status'
 * '<S317>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Sensor_Process/TF_Sensor_Status/Rangefinder_Status'
 * '<S318>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Filter_Reset'
 * '<S319>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid'
 * '<S320>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference'
 * '<S321>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Filter_Reset/Detect Rise Positive'
 * '<S322>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Filter_Reset/Detect Rise Positive1'
 * '<S323>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Filter_Reset/Detect Rise Positive/Positive'
 * '<S324>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Filter_Reset/Detect Rise Positive1/Positive'
 * '<S325>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid'
 * '<S326>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid'
 * '<S327>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold'
 * '<S328>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold1'
 * '<S329>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold/Compare To Constant'
 * '<S330>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold/Compare To Constant1'
 * '<S331>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold/Compare To Constant2'
 * '<S332>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold/Detect Rise Positive'
 * '<S333>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold/Detect Rise Positive/Positive'
 * '<S334>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold1/Compare To Constant'
 * '<S335>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold1/Compare To Constant1'
 * '<S336>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold1/Compare To Constant2'
 * '<S337>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold1/Detect Rise Positive'
 * '<S338>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Horizon_Sensor_Valid/valid_hold1/Detect Rise Positive/Positive'
 * '<S339>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold'
 * '<S340>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold1'
 * '<S341>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold2'
 * '<S342>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold/Compare To Constant'
 * '<S343>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold/Compare To Constant1'
 * '<S344>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold/Compare To Constant2'
 * '<S345>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold/Detect Rise Positive'
 * '<S346>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold/Detect Rise Positive/Positive'
 * '<S347>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold1/Compare To Constant'
 * '<S348>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold1/Compare To Constant1'
 * '<S349>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold1/Compare To Constant2'
 * '<S350>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold1/Detect Rise Positive'
 * '<S351>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold1/Detect Rise Positive/Positive'
 * '<S352>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold2/Compare To Constant'
 * '<S353>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold2/Compare To Constant1'
 * '<S354>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold2/Compare To Constant2'
 * '<S355>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold2/Detect Rise Positive'
 * '<S356>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/Sensor_Valid/Vertical_Sensor_Valid/valid_hold2/Detect Rise Positive/Positive'
 * '<S357>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Bus_Constructor'
 * '<S358>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Bus_Select'
 * '<S359>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Height_Ref'
 * '<S360>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Position_Ref'
 * '<S361>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Height_Ref/Detect Rise Positive3'
 * '<S362>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Height_Ref/Detect Rise Positive3/Positive'
 * '<S363>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Position_Ref/Detect Rise Positive3'
 * '<S364>' : 'INS/Data_Fusion/Translation_Filter/TF_Data_PreProcess/Transfer_Filter_Control/WGS84_Reference/Position_Ref/Detect Rise Positive3/Positive'
 * '<S365>' : 'INS/Sensor_PreProcess/AirSpeed_Process'
 * '<S366>' : 'INS/Sensor_PreProcess/Baro_PreProcess'
 * '<S367>' : 'INS/Sensor_PreProcess/ExternalPos_Process'
 * '<S368>' : 'INS/Sensor_PreProcess/GPS_PreProcess'
 * '<S369>' : 'INS/Sensor_PreProcess/IMU_PreProcess'
 * '<S370>' : 'INS/Sensor_PreProcess/MAG_PreProcess'
 * '<S371>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess'
 * '<S372>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess'
 * '<S373>' : 'INS/Sensor_PreProcess/AirSpeed_Process/Calculate_IAS'
 * '<S374>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Pressure_Height'
 * '<S375>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Relative_Height'
 * '<S376>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Sensor_Valid'
 * '<S377>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Relative_Height/Reference_Height'
 * '<S378>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Relative_Height/Sampling'
 * '<S379>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Relative_Height/Sampling/Compare To Constant'
 * '<S380>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Relative_Height/Sampling/Detect Change'
 * '<S381>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Relative_Height/Sampling/Interval Test3'
 * '<S382>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Sensor_Valid/Compare To Constant4'
 * '<S383>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Sensor_Valid/Detect Change'
 * '<S384>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Sensor_Valid/Ever_Valid'
 * '<S385>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Sensor_Valid/Interval Test1'
 * '<S386>' : 'INS/Sensor_PreProcess/Baro_PreProcess/Sensor_Valid/Interval Test2'
 * '<S387>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Att_PreProcess'
 * '<S388>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Pos_PreProcess'
 * '<S389>' : 'INS/Sensor_PreProcess/ExternalPos_Process/Sensor_Valid'
 * '<S390>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Pos_PreProcess/Ever_Valid'
 * '<S391>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Pos_PreProcess/Local_To_Global'
 * '<S392>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Pos_PreProcess/Local_To_Global/Detect Increase'
 * '<S393>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Pos_PreProcess/Local_To_Global/Ever_Valid'
 * '<S394>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Pos_PreProcess/Local_To_Global/Psi To DCM'
 * '<S395>' : 'INS/Sensor_PreProcess/ExternalPos_Process/External_Pos_PreProcess/Local_To_Global/Psi To DCM/Rotation Matrix Z'
 * '<S396>' : 'INS/Sensor_PreProcess/ExternalPos_Process/Sensor_Valid/Compare To Constant4'
 * '<S397>' : 'INS/Sensor_PreProcess/ExternalPos_Process/Sensor_Valid/Detect Change'
 * '<S398>' : 'INS/Sensor_PreProcess/ExternalPos_Process/Sensor_Valid/Ever_Valid'
 * '<S399>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Compare To Constant'
 * '<S400>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Compare To Constant1'
 * '<S401>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Data_Scalling'
 * '<S402>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality'
 * '<S403>' : 'INS/Sensor_PreProcess/GPS_PreProcess/WGS84_Model'
 * '<S404>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/Compare To Constant2'
 * '<S405>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/GPS_Status'
 * '<S406>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/check_timeout'
 * '<S407>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/horizontal_quality'
 * '<S408>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/speed_acc'
 * '<S409>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/vertical_quality'
 * '<S410>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/GPS_Status/Compare To Constant'
 * '<S411>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/GPS_Status/Compare To Constant1'
 * '<S412>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/GPS_Status/Ready'
 * '<S413>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/GPS_Status/Ready/valid_samples'
 * '<S414>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/check_timeout/Compare To Constant4'
 * '<S415>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/check_timeout/Detect Change'
 * '<S416>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/horizontal_quality/Second Order LPF'
 * '<S417>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/speed_acc/Second Order LPF'
 * '<S418>' : 'INS/Sensor_PreProcess/GPS_PreProcess/Status_Quality/vertical_quality/Second Order LPF'
 * '<S419>' : 'INS/Sensor_PreProcess/GPS_PreProcess/WGS84_Model/LAT2FLAT Curve'
 * '<S420>' : 'INS/Sensor_PreProcess/IMU_PreProcess/Data_Select'
 * '<S421>' : 'INS/Sensor_PreProcess/IMU_PreProcess/Sensor_Valid'
 * '<S422>' : 'INS/Sensor_PreProcess/IMU_PreProcess/Sensor_Valid/Compare To Constant4'
 * '<S423>' : 'INS/Sensor_PreProcess/IMU_PreProcess/Sensor_Valid/Detect Change'
 * '<S424>' : 'INS/Sensor_PreProcess/IMU_PreProcess/Sensor_Valid/Ever_Valid'
 * '<S425>' : 'INS/Sensor_PreProcess/IMU_PreProcess/Sensor_Valid/Interval Test1'
 * '<S426>' : 'INS/Sensor_PreProcess/IMU_PreProcess/Sensor_Valid/Interval Test3'
 * '<S427>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Bus_Select'
 * '<S428>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process'
 * '<S429>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Sensor_Valid'
 * '<S430>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/Mag_Quality_Estimate'
 * '<S431>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/WMM_Compensation'
 * '<S432>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/WMM_LUT'
 * '<S433>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/Mag_Quality_Estimate/Mag_Quality'
 * '<S434>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/Mag_Quality_Estimate/Mag_Quality/Inclination_Quality_Estimate'
 * '<S435>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/Mag_Quality_Estimate/Mag_Quality/Intensity_Quality_Estimate'
 * '<S436>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/Mag_Quality_Estimate/Mag_Quality/Second Order LPF'
 * '<S437>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/Mag_Quality_Estimate/Mag_Quality/Inclination_Quality_Estimate/Vector Modulus'
 * '<S438>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/Mag_Quality_Estimate/Mag_Quality/Intensity_Quality_Estimate/Vector Modulus'
 * '<S439>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/WMM_Compensation/Rotation Matrix Z'
 * '<S440>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/WMM_Compensation/Vector Normalize'
 * '<S441>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Mag_Data_Process/WMM_Compensation/safe_divide'
 * '<S442>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Sensor_Valid/Compare To Constant4'
 * '<S443>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Sensor_Valid/Detect Change'
 * '<S444>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Sensor_Valid/Ever_Valid'
 * '<S445>' : 'INS/Sensor_PreProcess/MAG_PreProcess/Sensor_Valid/Interval Test1'
 * '<S446>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Height_Compensation'
 * '<S447>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Sensor_Valid'
 * '<S448>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Height_Compensation/First Order LPF'
 * '<S449>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Sensor_Valid/Compare To Constant4'
 * '<S450>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Sensor_Valid/Detect Change'
 * '<S451>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Sensor_Valid/Ever_Valid'
 * '<S452>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Sensor_Valid/Interval Test1'
 * '<S453>' : 'INS/Sensor_PreProcess/OpticalFlow_PreProcess/Sensor_Valid/Interval Test2'
 * '<S454>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Sensor_Valid'
 * '<S455>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Subsystem'
 * '<S456>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Tilt_Compensation'
 * '<S457>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Sensor_Valid/Compare To Constant4'
 * '<S458>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Sensor_Valid/Detect Change'
 * '<S459>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Sensor_Valid/Ever_Valid'
 * '<S460>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Sensor_Valid/Interval Test1'
 * '<S461>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Subsystem/Compare To Constant'
 * '<S462>' : 'INS/Sensor_PreProcess/Rangefinder_PreProcess/Subsystem/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_INS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
