/*
 * File: CAN_654.h
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

#ifndef RTW_HEADER_CAN_654_h_
#define RTW_HEADER_CAN_654_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_654' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S18>/CAN Unpack' */
  real_T L1_Curvature;                 /* '<S18>/L1_Curvature' */
  real_T L1_Heading_Angle;             /* '<S18>/L1_Heading_Angle' */
  real_T L1_Position;                  /* '<S18>/L1_Position' */
} rtB_CAN_654_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_654' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S18>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S18>/CAN Unpack' */
} rtDW_CAN_654_dbcpack;

/* Parameters for system: '<Root>/CAN_654' */
struct rtP_CAN_654_dbcpack_ {
  real_T L1_Curvature_Gain;            /* Expression: 1
                                        * Referenced by: '<S18>/L1_Curvature'
                                        */
  real_T L1_Heading_Angle_Gain;        /* Expression: 1
                                        * Referenced by: '<S18>/L1_Heading_Angle'
                                        */
  real_T L1_Position_Gain;             /* Expression: 1
                                        * Referenced by: '<S18>/L1_Position'
                                        */
};

extern void dbcpack_CAN_654_Start(void);
extern void dbcpack_CAN_654(CAN_MESSAGE rtu_In1, rtB_CAN_654_dbcpack *localB,
  rtP_CAN_654_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_654_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
