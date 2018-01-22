/*
 * File: CAN_342.h
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

#ifndef RTW_HEADER_CAN_342_h_
#define RTW_HEADER_CAN_342_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_342' */
typedef struct {
  real_T CANUnpack;                    /* '<S7>/CAN Unpack' */
  real_T Y_Distance_1;                 /* '<S7>/Y_Distance_1' */
} rtB_CAN_342_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_342' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S7>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S7>/CAN Unpack' */
} rtDW_CAN_342_dbcpack;

/* Parameters for system: '<Root>/CAN_342' */
struct rtP_CAN_342_dbcpack_ {
  real_T Y_Distance_1_Gain;            /* Expression: 1
                                        * Referenced by: '<S7>/Y_Distance_1'
                                        */
};

extern void dbcpack_CAN_342_Start(void);
extern void dbcpack_CAN_342(CAN_MESSAGE rtu_In1, rtB_CAN_342_dbcpack *localB,
  rtP_CAN_342_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_342_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
