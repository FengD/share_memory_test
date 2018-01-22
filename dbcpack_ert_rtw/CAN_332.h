/*
 * File: CAN_332.h
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

#ifndef RTW_HEADER_CAN_332_h_
#define RTW_HEADER_CAN_332_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_332' */
typedef struct {
  real_T CANUnpack;                    /* '<S5>/CAN Unpack' */
  real_T Y_Distance;                   /* '<S5>/Y_Distance' */
} rtB_CAN_332_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_332' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S5>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S5>/CAN Unpack' */
} rtDW_CAN_332_dbcpack;

/* Parameters for system: '<Root>/CAN_332' */
struct rtP_CAN_332_dbcpack_ {
  real_T Y_Distance_Gain;              /* Expression: 1
                                        * Referenced by: '<S5>/Y_Distance'
                                        */
};

extern void dbcpack_CAN_332_Start(void);
extern void dbcpack_CAN_332(CAN_MESSAGE rtu_In1, rtB_CAN_332_dbcpack *localB,
  rtP_CAN_332_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_332_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
