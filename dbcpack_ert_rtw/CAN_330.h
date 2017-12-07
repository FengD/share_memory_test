/*
 * File: CAN_330.h
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

#ifndef RTW_HEADER_CAN_330_h_
#define RTW_HEADER_CAN_330_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_330' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S1>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S1>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S1>/CAN Unpack' */
  real_T Objects_ID_0;                 /* '<S1>/Objects_ID_0' */
  real_T Objects_Object_Class_0;       /* '<S1>/Objects_Object_Class_0' */
  real_T X_Distance_0;                 /* '<S1>/X_Distance_0' */
} rtB_CAN_330_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_330' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S1>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S1>/CAN Unpack' */
} rtDW_CAN_330_dbcpack;

/* Parameters for system: '<Root>/CAN_330' */
struct rtP_CAN_330_dbcpack_ {
  real_T Objects_ID_0_Gain;            /* Expression: 1
                                        * Referenced by: '<S1>/Objects_ID_0'
                                        */
  real_T Objects_Object_Class_0_Gain;  /* Expression: 1
                                        * Referenced by: '<S1>/Objects_Object_Class_0'
                                        */
  real_T X_Distance_0_Gain;            /* Expression: 1
                                        * Referenced by: '<S1>/X_Distance_0'
                                        */
};

extern void dbcpack_CAN_330_Start(void);
extern void dbcpack_CAN_330(CAN_MESSAGE rtu_In1, rtB_CAN_330_dbcpack *localB,
  rtP_CAN_330_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_330_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
