/*
 * File: CAN_372.h
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

#ifndef RTW_HEADER_CAN_372_h_
#define RTW_HEADER_CAN_372_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_372' */
typedef struct {
  real_T CANUnpack;                    /* '<S13>/CAN Unpack' */
  real_T Y_Distance_4;                 /* '<S13>/Y_Distance_4' */
} rtB_CAN_372_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_372' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S13>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S13>/CAN Unpack' */
} rtDW_CAN_372_dbcpack;

/* Parameters for system: '<Root>/CAN_372' */
struct rtP_CAN_372_dbcpack_ {
  real_T Y_Distance_4_Gain;            /* Expression: 1
                                        * Referenced by: '<S13>/Y_Distance_4'
                                        */
};

extern void dbcpack_CAN_372_Start(void);
extern void dbcpack_CAN_372(CAN_MESSAGE rtu_In1, rtB_CAN_372_dbcpack *localB,
  rtP_CAN_372_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_372_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
