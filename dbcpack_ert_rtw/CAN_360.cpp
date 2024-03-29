/*
 * File: CAN_360.cpp
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

#include "CAN_360.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_360' */
void dbcpack_CAN_360_Start(void)
{
  /*-----------S-Function Block: <S10>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_360' */
void dbcpack_CAN_360(CAN_MESSAGE rtu_In1, rtB_CAN_360_dbcpack *localB,
                     rtP_CAN_360_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S10>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S10>/CAN Unpack' */
    if ((8 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((864U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 24
           *  length                  = 7
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

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                if (result < 1.0) {
                  result = 1.0;
                }

                if (result > 63.0) {
                  result = 63.0;
                }

                localB->CANUnpack_o1 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 32
           *  length                  = 12
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.05
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
                result = result * 0.05;
                if (result < 0.0) {
                  result = 0.0;
                }

                if (result > 204.75) {
                  result = 204.75;
                }

                localB->CANUnpack_o2 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 21
           *  length                  = 3
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
                        (1)<< 5)) >> 5)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<2);
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

  /* Gain: '<S10>/Objects_ID_3' */
  localB->Objects_ID_3 = localP->Objects_ID_3_Gain * localB->CANUnpack_o1;

  /* Gain: '<S10>/Objects_Object_Class_3' */
  localB->Objects_Object_Class_3 = localP->Objects_Object_Class_3_Gain *
    localB->CANUnpack_o3;

  /* Gain: '<S10>/X_Distance_3' */
  localB->X_Distance_3 = localP->X_Distance_3_Gain * localB->CANUnpack_o2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
