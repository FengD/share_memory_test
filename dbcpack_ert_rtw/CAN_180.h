/*
 * File: CAN_180.h
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

#ifndef RTW_HEADER_CAN_180_h_
#define RTW_HEADER_CAN_180_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_180' */
typedef struct {
  real_T CANUnpack;                    /* '<S2>/CAN Unpack' */
  real_T LKASysActStat;                /* '<S2>/LKASysActStat' */
} rtB_CAN_180_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_180' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S2>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S2>/CAN Unpack' */
} rtDW_CAN_180_dbcpack;

/* Parameters for system: '<Root>/CAN_180' */
struct rtP_CAN_180_dbcpack_ {
  real_T LKASysActStat_Gain;           /* Expression: 1
                                        * Referenced by: '<S2>/LKASysActStat'
                                        */
};

extern void dbcpack_CAN_180_Start(void);
extern void dbcpack_CAN_180(CAN_MESSAGE rtu_In1, rtB_CAN_180_dbcpack *localB,
  rtP_CAN_180_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_180_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
