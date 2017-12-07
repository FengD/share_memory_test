/*
 * File: CAN_657.h
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

#ifndef RTW_HEADER_CAN_657_h_
#define RTW_HEADER_CAN_657_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_657' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S21>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S21>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S21>/CAN Unpack' */
  real_T L2_Curvature;                 /* '<S21>/L2_Curvature' */
  real_T L2_Heading_Angle;             /* '<S21>/L2_Heading_Angle' */
  real_T L2_Position;                  /* '<S21>/L2_Position' */
} rtB_CAN_657_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_657' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S21>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S21>/CAN Unpack' */
} rtDW_CAN_657_dbcpack;

/* Parameters for system: '<Root>/CAN_657' */
struct rtP_CAN_657_dbcpack_ {
  real_T L2_Curvature_Gain;            /* Expression: 1
                                        * Referenced by: '<S21>/L2_Curvature'
                                        */
  real_T L2_Heading_Angle_Gain;        /* Expression: 1
                                        * Referenced by: '<S21>/L2_Heading_Angle'
                                        */
  real_T L2_Position_Gain;             /* Expression: 1
                                        * Referenced by: '<S21>/L2_Position'
                                        */
};

extern void dbcpack_CAN_657_Start(void);
extern void dbcpack_CAN_657(CAN_MESSAGE rtu_In1, rtB_CAN_657_dbcpack *localB,
  rtP_CAN_657_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_657_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
