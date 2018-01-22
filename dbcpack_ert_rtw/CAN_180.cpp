/*
 * File: CAN_180.cpp
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

#include "CAN_180.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_180' */
void dbcpack_CAN_180_Start(void)
{
  /*-----------S-Function Block: <S2>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_180' */
void dbcpack_CAN_180(CAN_MESSAGE rtu_In1, rtB_CAN_180_dbcpack *localB,
                     rtP_CAN_180_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S2>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S2>/CAN Unpack' */
    if ((4 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((384U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 3
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint8_T unpackedValue = 0;

                  {
                    uint8_T tempValue = (uint8_T) (0);

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<0);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                if (result < 0.0) {
                  result = 0.0;
                }

                if (result > 1.0) {
                  result = 1.0;
                }

                localB->CANUnpack = result;
              }
            }
          }

          {
          }
        }
      }
    }
  }

  /* Gain: '<S2>/LKASysActStat' */
  localB->LKASysActStat = localP->LKASysActStat_Gain * localB->CANUnpack;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
