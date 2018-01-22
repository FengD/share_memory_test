/*
 * File: CAN_656.h
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

#ifndef RTW_HEADER_CAN_656_h_
#define RTW_HEADER_CAN_656_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_656' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S23>/CAN Unpack' */
  real_T L2_Location;                  /* '<S23>/L2_Location' */
  real_T L2_MarkType;                  /* '<S23>/L2_MarkType' */
  real_T L2_Quality;                   /* '<S23>/L2_Quality' */
} rtB_CAN_656_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_656' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S23>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S23>/CAN Unpack' */
} rtDW_CAN_656_dbcpack;

/* Parameters for system: '<Root>/CAN_656' */
struct rtP_CAN_656_dbcpack_ {
  real_T L2_Location_Gain;             /* Expression: 1
                                        * Referenced by: '<S23>/L2_Location'
                                        */
  real_T L2_MarkType_Gain;             /* Expression: 1
                                        * Referenced by: '<S23>/L2_MarkType'
                                        */
  real_T L2_Quality_Gain;              /* Expression: 1
                                        * Referenced by: '<S23>/L2_Quality'
                                        */
};

extern void dbcpack_CAN_656_Start(void);
extern void dbcpack_CAN_656(CAN_MESSAGE rtu_In1, rtB_CAN_656_dbcpack *localB,
  rtP_CAN_656_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_656_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
