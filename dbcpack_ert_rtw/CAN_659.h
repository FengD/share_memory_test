/*
 * File: CAN_659.h
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

#ifndef RTW_HEADER_CAN_659_h_
#define RTW_HEADER_CAN_659_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_659' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S23>/CAN Unpack' */
  real_T L3_Location;                  /* '<S23>/L3_Location' */
  real_T L3_MarkType;                  /* '<S23>/L3_MarkType' */
  real_T L3_Quality;                   /* '<S23>/L3_Quality' */
} rtB_CAN_659_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_659' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S23>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S23>/CAN Unpack' */
} rtDW_CAN_659_dbcpack;

/* Parameters for system: '<Root>/CAN_659' */
struct rtP_CAN_659_dbcpack_ {
  real_T L3_Location_Gain;             /* Expression: 1
                                        * Referenced by: '<S23>/L3_Location'
                                        */
  real_T L3_MarkType_Gain;             /* Expression: 1
                                        * Referenced by: '<S23>/L3_MarkType'
                                        */
  real_T L3_Quality_Gain;              /* Expression: 1
                                        * Referenced by: '<S23>/L3_Quality'
                                        */
};

extern void dbcpack_CAN_659_Start(void);
extern void dbcpack_CAN_659(CAN_MESSAGE rtu_In1, rtB_CAN_659_dbcpack *localB,
  rtP_CAN_659_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_659_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
