/*
 * File: CAN_600.cpp
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

#include "CAN_600.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_600' */
void dbcpack_CAN_600_Start(void)
{
  /*-----------S-Function Block: <S13>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_600' */
void dbcpack_CAN_600(CAN_MESSAGE rtu_In1, rtB_CAN_600_dbcpack *localB,
                     rtP_CAN_600_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S13>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S13>/CAN Unpack' */
    if ((8 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((1536U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.0625
           *  offset                  = -2048.0
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

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<12);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<13);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<14);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[5]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<15);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0625) + -2048.0;
                if (result < -2048.0) {
                  result = -2048.0;
                }

                if (result > 2047.94) {
                  result = 2047.94;
                }

                localB->CANUnpack_o1 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 1
           *  length                  = 14
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.01
           *  offset                  = 0.0
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
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<3);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<4);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<5);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<6);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<7);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<8);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<9);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<10);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<11);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<12);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<13);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.01;
                if (result < 0.0) {
                  result = 0.0;
                }

                if (result > 163.83) {
                  result = 163.83;
                }

                localB->CANUnpack_o2 = result;
              }
            }
          }

          {
          }

          {
          }
        }
      }
    }
  }

  /* Gain: '<S13>/SteerAngle' */
  localB->SteerAngle = localP->SteerAngle_Gain * localB->CANUnpack_o1;

  /* Gain: '<S13>/VehicleSpeed' */
  localB->VehicleSpeed = localP->VehicleSpeed_Gain * localB->CANUnpack_o2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
