/*
 * File: CAN_332.cpp
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

#include "CAN_332.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_332' */
void dbcpack_CAN_332_Start(void)
{
  /*-----------S-Function Block: <S2>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_332' */
void dbcpack_CAN_332(CAN_MESSAGE rtu_In1, rtB_CAN_332_dbcpack *localB,
                     rtP_CAN_332_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S2>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S2>/CAN Unpack' */
    if ((8 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((818U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 12
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.05
           *  offset                  = -102.4
           * -----------------------------------------------------------------------*/
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[4]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<11);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.05) + -102.4;
                if (result < -102.4) {
                  result = -102.4;
                }

                if (result > 102.35) {
                  result = 102.35;
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

  /* Gain: '<S2>/Y_Distance' */
  localB->Y_Distance = localP->Y_Distance_Gain * localB->CANUnpack;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
