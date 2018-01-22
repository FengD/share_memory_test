/*
 * File: dbcpack.h
 *
 * Code generated for Simulink model 'dbcpack'.
 *
 * Model version                  : 1.94
 * Simulink Coder version         : 8.3 (R2012b) 20-Jul-2012
 * TLC version                    : 8.3 (Jul 21 2012)
 * C/C++ source code generated on : Thu Jan 11 14:35:07 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_dbcpack_h_
#define RTW_HEADER_dbcpack_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Child system includes */
#include "CAN_140.h"
#include "CAN_180.h"
#include "CAN_200.h"
#include "CAN_330.h"
#include "CAN_332.h"
#include "CAN_340.h"
#include "CAN_342.h"
#include "CAN_350.h"
#include "CAN_352.h"
#include "CAN_360.h"
#include "CAN_362.h"
#include "CAN_370.h"
#include "CAN_372.h"
#include "CAN_380.h"
#include "CAN_382.h"
#include "CAN_600.h"
#include "CAN_650.h"
#include "CAN_651.h"
#include "CAN_652.h"
#include "CAN_653.h"
#include "CAN_654.h"
#include "CAN_655.h"
#include "CAN_656.h"
#include "CAN_657.h"
#include "CAN_658.h"
#include "CAN_659.h"
#include "CAN_65A.h"
#include "CAN_65B.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (auto storage) */
typedef struct {
  CAN_DATATYPE CANPack140;             /* '<Root>/CAN Pack140' */
  CAN_DATATYPE CANPack180;             /* '<Root>/CAN Pack180' */
  CAN_DATATYPE CANPack200;             /* '<Root>/CAN Pack200' */
  CAN_DATATYPE CANPack330;             /* '<Root>/CAN Pack330' */
  CAN_DATATYPE CANPack332;             /* '<Root>/CAN Pack332' */
  CAN_DATATYPE CANPack340;             /* '<Root>/CAN Pack340' */
  CAN_DATATYPE CANPack342;             /* '<Root>/CAN Pack342' */
  CAN_DATATYPE CANPack350;             /* '<Root>/CAN Pack350' */
  CAN_DATATYPE CANPack352;             /* '<Root>/CAN Pack352' */
  CAN_DATATYPE CANPack360;             /* '<Root>/CAN Pack360' */
  CAN_DATATYPE CANPack362;             /* '<Root>/CAN Pack362' */
  CAN_DATATYPE CANPack370;             /* '<Root>/CAN Pack370' */
  CAN_DATATYPE CANPack372;             /* '<Root>/CAN Pack372' */
  CAN_DATATYPE CANPack380;             /* '<Root>/CAN Pack380' */
  CAN_DATATYPE CANPack382;             /* '<Root>/CAN Pack382' */
  CAN_DATATYPE CANPack600;             /* '<Root>/CAN Pack600' */
  CAN_DATATYPE CANPack650;             /* '<Root>/CAN Pack650' */
  CAN_DATATYPE CANPack651;             /* '<Root>/CAN Pack651' */
  CAN_DATATYPE CANPack652;             /* '<Root>/CAN Pack652' */
  CAN_DATATYPE CANPack653;             /* '<Root>/CAN Pack653' */
  CAN_DATATYPE CANPack654;             /* '<Root>/CAN Pack654' */
  CAN_DATATYPE CANPack655;             /* '<Root>/CAN Pack655' */
  CAN_DATATYPE CANPack656;             /* '<Root>/CAN Pack656' */
  CAN_DATATYPE CANPack657;             /* '<Root>/CAN Pack657' */
  CAN_DATATYPE CANPack658;             /* '<Root>/CAN Pack658' */
  CAN_DATATYPE CANPack659;             /* '<Root>/CAN Pack659' */
  CAN_DATATYPE CANPack65A;             /* '<Root>/CAN Pack65A' */
  CAN_DATATYPE CANPack65B;             /* '<Root>/CAN Pack65B' */
  rtB_CAN_65B_dbcpack CAN_65B;         /* '<Root>/CAN_65B' */
  rtB_CAN_65A_dbcpack CAN_65A;         /* '<Root>/CAN_65A' */
  rtB_CAN_659_dbcpack CAN_659;         /* '<Root>/CAN_659' */
  rtB_CAN_658_dbcpack CAN_658;         /* '<Root>/CAN_658' */
  rtB_CAN_657_dbcpack CAN_657;         /* '<Root>/CAN_657' */
  rtB_CAN_656_dbcpack CAN_656;         /* '<Root>/CAN_656' */
  rtB_CAN_655_dbcpack CAN_655;         /* '<Root>/CAN_655' */
  rtB_CAN_654_dbcpack CAN_654;         /* '<Root>/CAN_654' */
  rtB_CAN_653_dbcpack CAN_653;         /* '<Root>/CAN_653' */
  rtB_CAN_652_dbcpack CAN_652;         /* '<Root>/CAN_652' */
  rtB_CAN_651_dbcpack CAN_651;         /* '<Root>/CAN_651' */
  rtB_CAN_650_dbcpack CAN_650;         /* '<Root>/CAN_650' */
  rtB_CAN_600_dbcpack CAN_600;         /* '<Root>/CAN_600' */
  rtB_CAN_382_dbcpack CAN_382;         /* '<Root>/CAN_382' */
  rtB_CAN_380_dbcpack CAN_380;         /* '<Root>/CAN_380' */
  rtB_CAN_372_dbcpack CAN_372;         /* '<Root>/CAN_372' */
  rtB_CAN_370_dbcpack CAN_370;         /* '<Root>/CAN_370' */
  rtB_CAN_362_dbcpack CAN_362;         /* '<Root>/CAN_362' */
  rtB_CAN_360_dbcpack CAN_360;         /* '<Root>/CAN_360' */
  rtB_CAN_352_dbcpack CAN_352;         /* '<Root>/CAN_352' */
  rtB_CAN_350_dbcpack CAN_350;         /* '<Root>/CAN_350' */
  rtB_CAN_342_dbcpack CAN_342;         /* '<Root>/CAN_342' */
  rtB_CAN_340_dbcpack CAN_340;         /* '<Root>/CAN_340' */
  rtB_CAN_332_dbcpack CAN_332;         /* '<Root>/CAN_332' */
  rtB_CAN_330_dbcpack CAN_330;         /* '<Root>/CAN_330' */
  rtB_CAN_200_dbcpack CAN_200;         /* '<Root>/CAN_200' */
  rtB_CAN_180_dbcpack CAN_180;         /* '<Root>/CAN_180' */
  rtB_CAN_140_dbcpack CAN_140;         /* '<Root>/CAN_140' */
} BlockIO_dbcpack;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  rtDW_CAN_65B_dbcpack CAN_65B;        /* '<Root>/CAN_65B' */
  rtDW_CAN_65A_dbcpack CAN_65A;        /* '<Root>/CAN_65A' */
  rtDW_CAN_659_dbcpack CAN_659;        /* '<Root>/CAN_659' */
  rtDW_CAN_658_dbcpack CAN_658;        /* '<Root>/CAN_658' */
  rtDW_CAN_657_dbcpack CAN_657;        /* '<Root>/CAN_657' */
  rtDW_CAN_656_dbcpack CAN_656;        /* '<Root>/CAN_656' */
  rtDW_CAN_655_dbcpack CAN_655;        /* '<Root>/CAN_655' */
  rtDW_CAN_654_dbcpack CAN_654;        /* '<Root>/CAN_654' */
  rtDW_CAN_653_dbcpack CAN_653;        /* '<Root>/CAN_653' */
  rtDW_CAN_652_dbcpack CAN_652;        /* '<Root>/CAN_652' */
  rtDW_CAN_651_dbcpack CAN_651;        /* '<Root>/CAN_651' */
  rtDW_CAN_650_dbcpack CAN_650;        /* '<Root>/CAN_650' */
  rtDW_CAN_600_dbcpack CAN_600;        /* '<Root>/CAN_600' */
  rtDW_CAN_382_dbcpack CAN_382;        /* '<Root>/CAN_382' */
  rtDW_CAN_380_dbcpack CAN_380;        /* '<Root>/CAN_380' */
  rtDW_CAN_372_dbcpack CAN_372;        /* '<Root>/CAN_372' */
  rtDW_CAN_370_dbcpack CAN_370;        /* '<Root>/CAN_370' */
  rtDW_CAN_362_dbcpack CAN_362;        /* '<Root>/CAN_362' */
  rtDW_CAN_360_dbcpack CAN_360;        /* '<Root>/CAN_360' */
  rtDW_CAN_352_dbcpack CAN_352;        /* '<Root>/CAN_352' */
  rtDW_CAN_350_dbcpack CAN_350;        /* '<Root>/CAN_350' */
  rtDW_CAN_342_dbcpack CAN_342;        /* '<Root>/CAN_342' */
  rtDW_CAN_340_dbcpack CAN_340;        /* '<Root>/CAN_340' */
  rtDW_CAN_332_dbcpack CAN_332;        /* '<Root>/CAN_332' */
  rtDW_CAN_330_dbcpack CAN_330;        /* '<Root>/CAN_330' */
  rtDW_CAN_200_dbcpack CAN_200;        /* '<Root>/CAN_200' */
  rtDW_CAN_180_dbcpack CAN_180;        /* '<Root>/CAN_180' */
  rtDW_CAN_140_dbcpack CAN_140;        /* '<Root>/CAN_140' */
} D_Work_dbcpack;

/* Parameters (auto storage) */
struct Parameters_dbcpack_ {
  uint8_T Constant25_Value;            /* Computed Parameter: Constant25_Value
                                        * Referenced by: '<Root>/Constant25'
                                        */
  uint8_T Constant26_Value;            /* Computed Parameter: Constant26_Value
                                        * Referenced by: '<Root>/Constant26'
                                        */
  uint8_T Constant27_Value;            /* Computed Parameter: Constant27_Value
                                        * Referenced by: '<Root>/Constant27'
                                        */
  uint8_T Constant13_Value;            /* Computed Parameter: Constant13_Value
                                        * Referenced by: '<Root>/Constant13'
                                        */
  uint8_T Constant14_Value;            /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<Root>/Constant14'
                                        */
  uint8_T Constant15_Value;            /* Computed Parameter: Constant15_Value
                                        * Referenced by: '<Root>/Constant15'
                                        */
  uint8_T Constant16_Value;            /* Computed Parameter: Constant16_Value
                                        * Referenced by: '<Root>/Constant16'
                                        */
  uint8_T Constant17_Value;            /* Computed Parameter: Constant17_Value
                                        * Referenced by: '<Root>/Constant17'
                                        */
  uint8_T Constant18_Value;            /* Computed Parameter: Constant18_Value
                                        * Referenced by: '<Root>/Constant18'
                                        */
  uint8_T Constant19_Value;            /* Computed Parameter: Constant19_Value
                                        * Referenced by: '<Root>/Constant19'
                                        */
  uint8_T Constant20_Value;            /* Computed Parameter: Constant20_Value
                                        * Referenced by: '<Root>/Constant20'
                                        */
  uint8_T Constant21_Value;            /* Computed Parameter: Constant21_Value
                                        * Referenced by: '<Root>/Constant21'
                                        */
  uint8_T Constant22_Value;            /* Computed Parameter: Constant22_Value
                                        * Referenced by: '<Root>/Constant22'
                                        */
  uint8_T Constant23_Value;            /* Computed Parameter: Constant23_Value
                                        * Referenced by: '<Root>/Constant23'
                                        */
  uint8_T Constant24_Value;            /* Computed Parameter: Constant24_Value
                                        * Referenced by: '<Root>/Constant24'
                                        */
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint8_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint8_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  uint8_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<Root>/Constant3'
                                        */
  uint8_T Constant4_Value;             /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  uint8_T Constant5_Value;             /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<Root>/Constant5'
                                        */
  uint8_T Constant6_Value;             /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<Root>/Constant6'
                                        */
  uint8_T Constant7_Value;             /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<Root>/Constant7'
                                        */
  uint8_T Constant8_Value;             /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<Root>/Constant8'
                                        */
  uint8_T Constant9_Value;             /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<Root>/Constant9'
                                        */
  uint8_T Constant10_Value;            /* Computed Parameter: Constant10_Value
                                        * Referenced by: '<Root>/Constant10'
                                        */
  uint8_T Constant11_Value;            /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<Root>/Constant11'
                                        */
  uint8_T Constant12_Value;            /* Computed Parameter: Constant12_Value
                                        * Referenced by: '<Root>/Constant12'
                                        */
  rtP_CAN_65B_dbcpack CAN_65B;         /* '<Root>/CAN_65B' */
  rtP_CAN_65A_dbcpack CAN_65A;         /* '<Root>/CAN_65A' */
  rtP_CAN_659_dbcpack CAN_659;         /* '<Root>/CAN_659' */
  rtP_CAN_658_dbcpack CAN_658;         /* '<Root>/CAN_658' */
  rtP_CAN_657_dbcpack CAN_657;         /* '<Root>/CAN_657' */
  rtP_CAN_656_dbcpack CAN_656;         /* '<Root>/CAN_656' */
  rtP_CAN_655_dbcpack CAN_655;         /* '<Root>/CAN_655' */
  rtP_CAN_654_dbcpack CAN_654;         /* '<Root>/CAN_654' */
  rtP_CAN_653_dbcpack CAN_653;         /* '<Root>/CAN_653' */
  rtP_CAN_652_dbcpack CAN_652;         /* '<Root>/CAN_652' */
  rtP_CAN_651_dbcpack CAN_651;         /* '<Root>/CAN_651' */
  rtP_CAN_650_dbcpack CAN_650;         /* '<Root>/CAN_650' */
  rtP_CAN_600_dbcpack CAN_600;         /* '<Root>/CAN_600' */
  rtP_CAN_382_dbcpack CAN_382;         /* '<Root>/CAN_382' */
  rtP_CAN_380_dbcpack CAN_380;         /* '<Root>/CAN_380' */
  rtP_CAN_372_dbcpack CAN_372;         /* '<Root>/CAN_372' */
  rtP_CAN_370_dbcpack CAN_370;         /* '<Root>/CAN_370' */
  rtP_CAN_362_dbcpack CAN_362;         /* '<Root>/CAN_362' */
  rtP_CAN_360_dbcpack CAN_360;         /* '<Root>/CAN_360' */
  rtP_CAN_352_dbcpack CAN_352;         /* '<Root>/CAN_352' */
  rtP_CAN_350_dbcpack CAN_350;         /* '<Root>/CAN_350' */
  rtP_CAN_342_dbcpack CAN_342;         /* '<Root>/CAN_342' */
  rtP_CAN_340_dbcpack CAN_340;         /* '<Root>/CAN_340' */
  rtP_CAN_332_dbcpack CAN_332;         /* '<Root>/CAN_332' */
  rtP_CAN_330_dbcpack CAN_330;         /* '<Root>/CAN_330' */
  rtP_CAN_200_dbcpack CAN_200;         /* '<Root>/CAN_200' */
  rtP_CAN_180_dbcpack CAN_180;         /* '<Root>/CAN_180' */
  rtP_CAN_140_dbcpack CAN_140;         /* '<Root>/CAN_140' */
};

/* Real-time Model Data Structure */
struct tag_RTM_dbcpack {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern Parameters_dbcpack dbcpack_P;

#ifdef __cplusplus

}
#endif

/* Block signals (auto storage) */
extern BlockIO_dbcpack dbcpack_B;

/* Block states (auto storage) */
extern D_Work_dbcpack dbcpack_DWork;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void dbcpack_initialize(void);
  extern void dbcpack_step(void);
  extern void dbcpack_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_dbcpack *const dbcpack_M;

#ifdef __cplusplus

}
#endif

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
 * '<Root>' : 'dbcpack'
 * '<S1>'   : 'dbcpack/CAN_140'
 * '<S2>'   : 'dbcpack/CAN_180'
 * '<S3>'   : 'dbcpack/CAN_200'
 * '<S4>'   : 'dbcpack/CAN_330'
 * '<S5>'   : 'dbcpack/CAN_332'
 * '<S6>'   : 'dbcpack/CAN_340'
 * '<S7>'   : 'dbcpack/CAN_342'
 * '<S8>'   : 'dbcpack/CAN_350'
 * '<S9>'   : 'dbcpack/CAN_352'
 * '<S10>'  : 'dbcpack/CAN_360'
 * '<S11>'  : 'dbcpack/CAN_362'
 * '<S12>'  : 'dbcpack/CAN_370'
 * '<S13>'  : 'dbcpack/CAN_372'
 * '<S14>'  : 'dbcpack/CAN_380'
 * '<S15>'  : 'dbcpack/CAN_382'
 * '<S16>'  : 'dbcpack/CAN_600'
 * '<S17>'  : 'dbcpack/CAN_650'
 * '<S18>'  : 'dbcpack/CAN_651'
 * '<S19>'  : 'dbcpack/CAN_652'
 * '<S20>'  : 'dbcpack/CAN_653'
 * '<S21>'  : 'dbcpack/CAN_654'
 * '<S22>'  : 'dbcpack/CAN_655'
 * '<S23>'  : 'dbcpack/CAN_656'
 * '<S24>'  : 'dbcpack/CAN_657'
 * '<S25>'  : 'dbcpack/CAN_658'
 * '<S26>'  : 'dbcpack/CAN_659'
 * '<S27>'  : 'dbcpack/CAN_65A'
 * '<S28>'  : 'dbcpack/CAN_65B'
 */
#endif                                 /* RTW_HEADER_dbcpack_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
