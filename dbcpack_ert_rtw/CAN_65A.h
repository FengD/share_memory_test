/*
 * File: CAN_65A.h
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

#ifndef RTW_HEADER_CAN_65A_h_
#define RTW_HEADER_CAN_65A_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_65A' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S24>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S24>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S24>/CAN Unpack' */
  real_T L3_Curvature;                 /* '<S24>/L3_Curvature' */
  real_T L3_Heading_Angle;             /* '<S24>/L3_Heading_Angle' */
  real_T L3_Position;                  /* '<S24>/L3_Position' */
} rtB_CAN_65A_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_65A' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S24>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S24>/CAN Unpack' */
} rtDW_CAN_65A_dbcpack;

/* Parameters for system: '<Root>/CAN_65A' */
struct rtP_CAN_65A_dbcpack_ {
  real_T L3_Curvature_Gain;            /* Expression: 1
                                        * Referenced by: '<S24>/L3_Curvature'
                                        */
  real_T L3_Heading_Angle_Gain;        /* Expression: 1
                                        * Referenced by: '<S24>/L3_Heading_Angle'
                                        */
  real_T L3_Position_Gain;             /* Expression: 1
                                        * Referenced by: '<S24>/L3_Position'
                                        */
};

extern void dbcpack_CAN_65A_Start(void);
extern void dbcpack_CAN_65A(CAN_MESSAGE rtu_In1, rtB_CAN_65A_dbcpack *localB,
  rtP_CAN_65A_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_65A_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
