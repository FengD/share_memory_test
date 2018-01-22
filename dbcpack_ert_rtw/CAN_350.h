/*
 * File: CAN_350.h
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

#ifndef RTW_HEADER_CAN_350_h_
#define RTW_HEADER_CAN_350_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_350' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S8>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S8>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S8>/CAN Unpack' */
  real_T Objects_ID_2;                 /* '<S8>/Objects_ID_2' */
  real_T Objects_Object_Class_2;       /* '<S8>/Objects_Object_Class_2' */
  real_T X_Distance_2;                 /* '<S8>/X_Distance_2' */
} rtB_CAN_350_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_350' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S8>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S8>/CAN Unpack' */
} rtDW_CAN_350_dbcpack;

/* Parameters for system: '<Root>/CAN_350' */
struct rtP_CAN_350_dbcpack_ {
  real_T Objects_ID_2_Gain;            /* Expression: 1
                                        * Referenced by: '<S8>/Objects_ID_2'
                                        */
  real_T Objects_Object_Class_2_Gain;  /* Expression: 1
                                        * Referenced by: '<S8>/Objects_Object_Class_2'
                                        */
  real_T X_Distance_2_Gain;            /* Expression: 1
                                        * Referenced by: '<S8>/X_Distance_2'
                                        */
};

extern void dbcpack_CAN_350_Start(void);
extern void dbcpack_CAN_350(CAN_MESSAGE rtu_In1, rtB_CAN_350_dbcpack *localB,
  rtP_CAN_350_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_350_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
