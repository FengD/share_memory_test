/*
 * File: CAN_65B.cpp
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

#include "CAN_65B.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_65B' */
void dbcpack_CAN_65B_Start(void)
{
  /*-----------S-Function Block: <S25>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_65B' */
void dbcpack_CAN_65B(CAN_MESSAGE rtu_In1, rtB_CAN_65B_dbcpack *localB,
                     rtP_CAN_65B_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S25>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S25>/CAN Unpack' */
    if ((5 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((1627U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 4.0E-9
           *  offset                  = -0.000131072
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

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<12);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<13);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<14);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<15);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 4.0E-9) + -0.000131072;
                if (result < -0.000131072) {
                  result = -0.000131072;
                }

                if (result > 0.000131068) {
                  result = 0.000131068;
                }

                localB->CANUnpack_o1 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 16
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
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
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

  /* Gain: '<S25>/L3_Curvature_Driv' */
  localB->L3_Curvature_Driv = localP->L3_Curvature_Driv_Gain *
    localB->CANUnpack_o1;

  /* Gain: '<S25>/L3_Mark_Color' */
  localB->L3_Mark_Color = localP->L3_Mark_Color_Gain * localB->CANUnpack_o2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
