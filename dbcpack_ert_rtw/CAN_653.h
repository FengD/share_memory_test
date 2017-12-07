/*
 * File: CAN_653.h
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

#ifndef RTW_HEADER_CAN_653_h_
#define RTW_HEADER_CAN_653_h_
#ifndef dbcpack_COMMON_INCLUDES_
# define dbcpack_COMMON_INCLUDES_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 /* dbcpack_COMMON_INCLUDES_ */

#include "dbcpack_types.h"

/* Block signals for system '<Root>/CAN_653' */
typedef struct {
  real_T CANUnpack_o1;                 /* '<S17>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S17>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S17>/CAN Unpack' */
  real_T L1_Location;                  /* '<S17>/L1_Location' */
  real_T L1_MarkType;                  /* '<S17>/L1_MarkType' */
  real_T L1_Quality;                   /* '<S17>/L1_Quality' */
} rtB_CAN_653_dbcpack;

/* Block states (auto storage) for system '<Root>/CAN_653' */
typedef struct {
  int_T CANUnpack_ModeSignalID;        /* '<S17>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S17>/CAN Unpack' */
} rtDW_CAN_653_dbcpack;

/* Parameters for system: '<Root>/CAN_653' */
struct rtP_CAN_653_dbcpack_ {
  real_T L1_Location_Gain;             /* Expression: 1
                                        * Referenced by: '<S17>/L1_Location'
                                        */
  real_T L1_MarkType_Gain;             /* Expression: 1
                                        * Referenced by: '<S17>/L1_MarkType'
                                        */
  real_T L1_Quality_Gain;              /* Expression: 1
                                        * Referenced by: '<S17>/L1_Quality'
                                        */
};

extern void dbcpack_CAN_653_Start(void);
extern void dbcpack_CAN_653(CAN_MESSAGE rtu_In1, rtB_CAN_653_dbcpack *localB,
  rtP_CAN_653_dbcpack *localP);

#endif                                 /* RTW_HEADER_CAN_653_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
