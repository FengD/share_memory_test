/*
 * File: CAN_200.cpp
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

#include "CAN_200.h"

/* Include model header file for global data */
#include "dbcpack.h"
#include "dbcpack_private.h"

/* Start for atomic system: '<Root>/CAN_200' */
void dbcpack_CAN_200_Start(void)
{
  /*-----------S-Function Block: <S3>/CAN Unpack -----------------*/
}

/* Output and update for atomic system: '<Root>/CAN_200' */
void dbcpack_CAN_200(CAN_MESSAGE rtu_In1, rtB_CAN_200_dbcpack *localB,
                     rtP_CAN_200_dbcpack *localP)
{
  /* S-Function (scanunpack): '<S3>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S3>/CAN Unpack' */
    if ((8 == rtu_In1.Length) && (rtu_In1.ID != INVALID_CAN_ID) ) {
      if ((512U == rtu_In1.ID) && (0U == rtu_In1.Extended) ) {
        {
          {
          }

          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.5
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
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[1]) & ( (uint8_T)
                        (1)<< 7)) >> 7)<<7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.5;
                if (result < 0.0) {
                  result = 0.0;
                }

                if (result > 100.0) {
                  result = 100.0;
                }

                localB->CANUnpack_o1 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 27
           *  length                  = 3
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
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[3]) & ( (uint8_T)
                        (1)<< 5)) >> 5)<<2);
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
           *  startBit                = 24
           *  length                  = 3
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

                if (result > 5.0) {
                  result = 5.0;
                }

                localB->CANUnpack_o3 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 21
           *  length                  = 3
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

                if (result > 2.0) {
                  result = 2.0;
                }

                localB->CANUnpack_o4 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.5
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

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.5;
                if (result < 0.0) {
                  result = 0.0;
                }

                if (result > 100.0) {
                  result = 100.0;
                }

                localB->CANUnpack_o5 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 16
           *  length                  = 5
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            {
              real64_T outValue = 0;

              {
                {
                  int8_T unpackedValue = 0;

                  {
                    int8_T tempValue = (int8_T) (0);

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | ((((rtu_In1.Data[2]) & ( (uint8_T)
                        (1)<< 4)) >> 4)<<4);
                    }

                    unpackedValue = tempValue;
                  }

                  {
                    int8_T bitValue = (int8_T)(0);
                    int8_T mask = (int8_T)(1);
                    bitValue = unpackedValue & (mask << (5-1));
                    if (bitValue) {
                      {
                        unpackedValue = unpackedValue | (mask << (8-0-1));
                      }

                      {
                        unpackedValue = unpackedValue | (mask << (8-1-1));
                      }

                      {
                        unpackedValue = unpackedValue | (mask << (8-2-1));
                      }
                    }
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                if (result < -9.0) {
                  result = -9.0;
                }

                if (result > 1.0) {
                  result = 1.0;
                }

                localB->CANUnpack_o6 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 32
           *  length                  = 4
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

                if (result > 15.0) {
                  result = 15.0;
                }

                localB->CANUnpack_o7 = result;
              }
            }
          }

          {
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 30
           *  length                  = 2
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

                localB->CANUnpack_o8 = result;
              }
            }
          }

          {
          }

          {
          }

          {
          }

          {
          }

          {
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

  /* Gain: '<S3>/BrakePedal' */
  localB->BrakePedal = localP->BrakePedal_Gain * localB->CANUnpack_o1;

  /* Gain: '<S3>/Collsn_warning_ID' */
  localB->Collsn_warning_ID = localP->Collsn_warning_ID_Gain *
    localB->CANUnpack_o2;

  /* Gain: '<S3>/Collsn_warning_state' */
  localB->Collsn_warning_state = localP->Collsn_warning_state_Gain *
    localB->CANUnpack_o3;

  /* Gain: '<S3>/ControlType' */
  localB->ControlType = localP->ControlType_Gain * localB->CANUnpack_o4;

  /* Gain: '<S3>/DrivePedal' */
  localB->DrivePedal = localP->DrivePedal_Gain * localB->CANUnpack_o5;

  /* Gain: '<S3>/GearPRND' */
  localB->GearPRND = localP->GearPRND_Gain * localB->CANUnpack_o6;

  /* Gain: '<S3>/TargetPathState' */
  localB->TargetPathState = localP->TargetPathState_Gain * localB->CANUnpack_o7;

  /* Gain: '<S3>/TurnLamp' */
  localB->TurnLamp = localP->TurnLamp_Gain * localB->CANUnpack_o8;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
