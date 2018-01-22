/*
 * File: CAN_656.cpp
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

#include "CAN_656.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_656' */
void dbcpack_CAN_656_Start(void)
{
  /*-----------S-Function Block: <S23>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_656' */
void dbcpack_CAN_656(CAN_MESSAGE rtu_In1, rtB_CAN_656_dbcpack *localB,
                     rtP_CAN_656_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S23>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S23>/CAN Unpack' */
    if ((6 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((1622U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 24
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<1);
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

                if (result > 3.0) {
                  result = 3.0;
                }

                localB->CANUnpack_o1 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 30
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<1);
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

                if (result > 3.0) {
                  result = 3.0;
                }

                localB->CANUnpack_o2 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 26
           *  length                  = 4
           *  desiredSignalByteLayout = LITTLEENDIAN
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
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<3);
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

                if (result > 6.0) {
                  result = 6.0;
                }

                localB->CANUnpack_o3 = result;
              }
            }
          }

          {
          }

          {
          }

          {
          }
        }
      }
    }
  }

  /* Gain: '<S23>/L2_Location' */
  localB->L2_Location = localP->L2_Location_Gain * localB->CANUnpack_o1;

  /* Gain: '<S23>/L2_MarkType' */
  localB->L2_MarkType = localP->L2_MarkType_Gain * localB->CANUnpack_o3;

  /* Gain: '<S23>/L2_Quality' */
  localB->L2_Quality = localP->L2_Quality_Gain * localB->CANUnpack_o2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
