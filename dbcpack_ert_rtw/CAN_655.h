/*
 * File: CAN_655.h
 *
 * Code generated for Simulink model 'dbcpack'.
 *
 * Model version                  : 1.89
 * Simulink Coder version         : 8.3 (R2012b) 20-Jul-2012
 * TLC version                    : 8.3 (Jul 21 2012)
 * C/C++ source code generated on : Wed Jul 26 17:12:52 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CAN_655_h_
#define RTW_HEADER_CAN_655_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_655' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S19>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S19>/CAN Unpack' */
  real_T L1_Curvature_Driv;            /* '<S19>/L1_Curvature_Driv' */
  real_T L1_Mark_Color;                /* '<S19>/L1_Mark_Color' */
} rtB_CAN_655_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_655' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S19>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S19>/CAN Unpack' */
} rtDW_CAN_655_dbcpack;

/* Parameters for system: '<Root>/CAN_655' */
struct rtP_CAN_655_dbcpack_ {
  real_T L1_Curvature_Driv_Gain;       /* Expression: 1
                                        * Referenced by: '<S19>/L1_Curvature_Driv'
                                        */
  real_T L1_Mark_Color_Gain;           /* Expression: 1
                                        * Referenced by: '<S19>/L1_Mark_Color'
                                        */
};

extern void dbcpack_CAN_655_Start(void);
extern void dbcpack_CAN_655(CAN_MESSAGE rtu_In1, rtB_CAN_655_dbcpack *localB,
  rtP_CAN_655_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_655_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
