/*
 * File: CAN_140.h
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

#ifndef RTW_HEADER_CAN_140_h_
#define RTW_HEADER_CAN_140_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_140' */
typedef struct {
  real_T CANUnpack;                    /* '<S1>/CAN Unpack' */
  real_T Lighting_HS;                  /* '<S1>/Lighting_HS' */
} rtB_CAN_140_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_140' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S1>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S1>/CAN Unpack' */
} rtDW_CAN_140_dbcpack;

/* Parameters for system: '<Root>/CAN_140' */
struct rtP_CAN_140_dbcpack_ {
  real_T Lighting_HS_Gain;             /* Expression: 1
                                        * Referenced by: '<S1>/Lighting_HS'
                                        */
};

extern void dbcpack_CAN_140_Start(void);
extern void dbcpack_CAN_140(CAN_MESSAGE rtu_In1, rtB_CAN_140_dbcpack *localB,
  rtP_CAN_140_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_140_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
