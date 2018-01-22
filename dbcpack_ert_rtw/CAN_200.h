/*
 * File: CAN_200.h
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

#ifndef RTW_HEADER_CAN_200_h_
#define RTW_HEADER_CAN_200_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_200' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o5;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o6;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o7;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o8;                 /* '<S3>/CAN Unpack' */
  real_T BrakePedal;                   /* '<S3>/BrakePedal' */
  real_T Collsn_warning_ID;            /* '<S3>/Collsn_warning_ID' */
  real_T Collsn_warning_state;         /* '<S3>/Collsn_warning_state' */
  real_T ControlType;                  /* '<S3>/ControlType' */
  real_T DrivePedal;                   /* '<S3>/DrivePedal' */
  real_T GearPRND;                     /* '<S3>/GearPRND' */
  real_T TargetPathState;              /* '<S3>/TargetPathState' */
  real_T TurnLamp;                     /* '<S3>/TurnLamp' */
} rtB_CAN_200_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_200' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S3>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S3>/CAN Unpack' */
} rtDW_CAN_200_dbcpack;

/* Parameters for system: '<Root>/CAN_200' */
struct rtP_CAN_200_dbcpack_ {
  real_T BrakePedal_Gain;              /* Expression: 1
                                        * Referenced by: '<S3>/BrakePedal'
                                        */
  real_T Collsn_warning_ID_Gain;       /* Expression: 1
                                        * Referenced by: '<S3>/Collsn_warning_ID'
                                        */
  real_T Collsn_warning_state_Gain;    /* Expression: 1
                                        * Referenced by: '<S3>/Collsn_warning_state'
                                        */
  real_T ControlType_Gain;             /* Expression: 1
                                        * Referenced by: '<S3>/ControlType'
                                        */
  real_T DrivePedal_Gain;              /* Expression: 1
                                        * Referenced by: '<S3>/DrivePedal'
                                        */
  real_T GearPRND_Gain;                /* Expression: 1
                                        * Referenced by: '<S3>/GearPRND'
                                        */
  real_T TargetPathState_Gain;         /* Expression: 1
                                        * Referenced by: '<S3>/TargetPathState'
                                        */
  real_T TurnLamp_Gain;                /* Expression: 1
                                        * Referenced by: '<S3>/TurnLamp'
                                        */
};

extern void dbcpack_CAN_200_Start(void);
extern void dbcpack_CAN_200(CAN_MESSAGE rtu_In1, rtB_CAN_200_dbcpack *localB,
  rtP_CAN_200_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_200_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
