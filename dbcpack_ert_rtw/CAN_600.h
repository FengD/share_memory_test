/*
 * File: CAN_600.h
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

#ifndef RTW_HEADER_CAN_600_h_
#define RTW_HEADER_CAN_600_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_600' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S16>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S16>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S16>/CAN Unpack' */
  real_T SteerAngle;                   /* '<S16>/SteerAngle' */
  real_T VehicleSpeed;                 /* '<S16>/VehicleSpeed' */
  real_T YawRate;                      /* '<S16>/YawRate' */
} rtB_CAN_600_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_600' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S16>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S16>/CAN Unpack' */
} rtDW_CAN_600_dbcpack;

/* Parameters for system: '<Root>/CAN_600' */
struct rtP_CAN_600_dbcpack_ {
  real_T SteerAngle_Gain;              /* Expression: 1
                                        * Referenced by: '<S16>/SteerAngle'
                                        */
  real_T VehicleSpeed_Gain;            /* Expression: 1
                                        * Referenced by: '<S16>/VehicleSpeed'
                                        */
  real_T YawRate_Gain;                 /* Expression: 1
                                        * Referenced by: '<S16>/YawRate'
                                        */
};

extern void dbcpack_CAN_600_Start(void);
extern void dbcpack_CAN_600(CAN_MESSAGE rtu_In1, rtB_CAN_600_dbcpack *localB,
  rtP_CAN_600_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_600_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
