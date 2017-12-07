/*
 * File: CAN_340.h
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

#ifndef RTW_HEADER_CAN_340_h_
#define RTW_HEADER_CAN_340_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_340' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S3>/CAN Unpack' */
  real_T Objects_ID_1;                 /* '<S3>/Objects_ID_1' */
  real_T Objects_Object_Class_1;       /* '<S3>/Objects_Object_Class_1' */
  real_T X_Distance_1;                 /* '<S3>/X_Distance_1' */
} rtB_CAN_340_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_340' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S3>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S3>/CAN Unpack' */
} rtDW_CAN_340_dbcpack;

/* Parameters for system: '<Root>/CAN_340' */
struct rtP_CAN_340_dbcpack_ {
  real_T Objects_ID_1_Gain;            /* Expression: 1
                                        * Referenced by: '<S3>/Objects_ID_1'
                                        */
  real_T Objects_Object_Class_1_Gain;  /* Expression: 1
                                        * Referenced by: '<S3>/Objects_Object_Class_1'
                                        */
  real_T X_Distance_1_Gain;            /* Expression: 1
                                        * Referenced by: '<S3>/X_Distance_1'
                                        */
};

extern void dbcpack_CAN_340_Start(void);
extern void dbcpack_CAN_340(CAN_MESSAGE rtu_In1, rtB_CAN_340_dbcpack *localB,
  rtP_CAN_340_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_340_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
