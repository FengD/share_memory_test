/*
 * File: CAN_65A.cpp
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

#include "CAN_65A.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_65A' */
void dbcpack_CAN_65A_Start(void)
{
  /*-----------S-Function Block: <S24>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_65A' */
void dbcpack_CAN_65A(CAN_MESSAGE rtu_In1, rtB_CAN_65A_dbcpack *localB,
                     rtP_CAN_65A_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S24>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S24>/CAN Unpack' */
    if ((6 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((1626U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 12
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.01
           *  offset                  = -20.48
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
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[0]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<11);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.01) + -20.48;
                if (result < -20.48) {
                  result = -20.48;
                }

                if (result > 20.47) {
                  result = 20.47;
                }

                localB->CANUnpack_o1 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 12
           *  length                  = 10
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.0009765625
           *  offset                  = -0.357
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
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<3);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<4);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<5);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<6);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<7);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<8);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<9);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0009765625) + -0.357;
                if (result < -0.357) {
                  result = -0.357;
                }

                if (result > 0.357) {
                  result = 0.357;
                }

                localB->CANUnpack_o2 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 32
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0E-6
           *  offset                  = -0.032768
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
                result = (result * 1.0E-6) + -0.032768;
                if (result < -0.032768) {
                  result = -0.032768;
                }

                if (result > 0.032767) {
                  result = 0.032767;
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

  /* Gain: '<S24>/L3_Curvature' */
  localB->L3_Curvature = localP->L3_Curvature_Gain * localB->CANUnpack_o3;

  /* Gain: '<S24>/L3_Heading_Angle' */
  localB->L3_Heading_Angle = localP->L3_Heading_Angle_Gain *
    localB->CANUnpack_o2;

  /* Gain: '<S24>/L3_Position' */
  localB->L3_Position = localP->L3_Position_Gain * localB->CANUnpack_o1;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
