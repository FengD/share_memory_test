/*
 * File: dbcpack.cpp
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

#include "dbcpack.h"
#include "dbcpack_private.h"

/* Block signals (auto storage) */
BlockIO_dbcpack dbcpack_B;

/* Block states (auto storage) */
D_Work_dbcpack dbcpack_DWork;

/* Real-time model */
RT_MODEL_dbcpack dbcpack_M_;
RT_MODEL_dbcpack *const dbcpack_M = &dbcpack_M_;

/* Model step function */
void dbcpack_step(void)
{
  /* S-Function (scanpack): '<Root>/CAN Pack140' */
  dbcpack_B.CANPack140.ID = 320U;
  dbcpack_B.CANPack140.Length = 8U;
  dbcpack_B.CANPack140.Extended = 0U;
  dbcpack_B.CANPack140.Remote = !(1);
  dbcpack_B.CANPack140.Data[0] = 0;
  dbcpack_B.CANPack140.Data[1] = 0;
  dbcpack_B.CANPack140.Data[2] = 0;
  dbcpack_B.CANPack140.Data[3] = 0;
  dbcpack_B.CANPack140.Data[4] = 0;
  dbcpack_B.CANPack140.Data[5] = 0;
  dbcpack_B.CANPack140.Data[6] = 0;
  dbcpack_B.CANPack140.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack140.Data), &dbcpack_P.Constant25_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_140' */
  dbcpack_CAN_140(dbcpack_B.CANPack140, &dbcpack_B.CAN_140, (rtP_CAN_140_dbcpack
    *)&dbcpack_P.CAN_140);

  /* End of Outputs for SubSystem: '<Root>/CAN_140' */

  /* S-Function (scanpack): '<Root>/CAN Pack180' */
  dbcpack_B.CANPack180.ID = 384U;
  dbcpack_B.CANPack180.Length = 8U;
  dbcpack_B.CANPack180.Extended = 0U;
  dbcpack_B.CANPack180.Remote = !(1);
  dbcpack_B.CANPack180.Data[0] = 0;
  dbcpack_B.CANPack180.Data[1] = 0;
  dbcpack_B.CANPack180.Data[2] = 0;
  dbcpack_B.CANPack180.Data[3] = 0;
  dbcpack_B.CANPack180.Data[4] = 0;
  dbcpack_B.CANPack180.Data[5] = 0;
  dbcpack_B.CANPack180.Data[6] = 0;
  dbcpack_B.CANPack180.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack180.Data), &dbcpack_P.Constant26_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_180' */
  dbcpack_CAN_180(dbcpack_B.CANPack180, &dbcpack_B.CAN_180, (rtP_CAN_180_dbcpack
    *)&dbcpack_P.CAN_180);

  /* End of Outputs for SubSystem: '<Root>/CAN_180' */

  /* S-Function (scanpack): '<Root>/CAN Pack200' */
  dbcpack_B.CANPack200.ID = 512U;
  dbcpack_B.CANPack200.Length = 8U;
  dbcpack_B.CANPack200.Extended = 0U;
  dbcpack_B.CANPack200.Remote = !(1);
  dbcpack_B.CANPack200.Data[0] = 0;
  dbcpack_B.CANPack200.Data[1] = 0;
  dbcpack_B.CANPack200.Data[2] = 0;
  dbcpack_B.CANPack200.Data[3] = 0;
  dbcpack_B.CANPack200.Data[4] = 0;
  dbcpack_B.CANPack200.Data[5] = 0;
  dbcpack_B.CANPack200.Data[6] = 0;
  dbcpack_B.CANPack200.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack200.Data), &dbcpack_P.Constant27_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_200' */
  dbcpack_CAN_200(dbcpack_B.CANPack200, &dbcpack_B.CAN_200, (rtP_CAN_200_dbcpack
    *)&dbcpack_P.CAN_200);

  /* End of Outputs for SubSystem: '<Root>/CAN_200' */

  /* S-Function (scanpack): '<Root>/CAN Pack330' */
  dbcpack_B.CANPack330.ID = 816U;
  dbcpack_B.CANPack330.Length = 8U;
  dbcpack_B.CANPack330.Extended = 0U;
  dbcpack_B.CANPack330.Remote = !(1);
  dbcpack_B.CANPack330.Data[0] = 0;
  dbcpack_B.CANPack330.Data[1] = 0;
  dbcpack_B.CANPack330.Data[2] = 0;
  dbcpack_B.CANPack330.Data[3] = 0;
  dbcpack_B.CANPack330.Data[4] = 0;
  dbcpack_B.CANPack330.Data[5] = 0;
  dbcpack_B.CANPack330.Data[6] = 0;
  dbcpack_B.CANPack330.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack330.Data), &dbcpack_P.Constant13_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_330' */
  dbcpack_CAN_330(dbcpack_B.CANPack330, &dbcpack_B.CAN_330, (rtP_CAN_330_dbcpack
    *)&dbcpack_P.CAN_330);

  /* End of Outputs for SubSystem: '<Root>/CAN_330' */

  /* S-Function (scanpack): '<Root>/CAN Pack332' */
  dbcpack_B.CANPack332.ID = 818U;
  dbcpack_B.CANPack332.Length = 8U;
  dbcpack_B.CANPack332.Extended = 0U;
  dbcpack_B.CANPack332.Remote = !(1);
  dbcpack_B.CANPack332.Data[0] = 0;
  dbcpack_B.CANPack332.Data[1] = 0;
  dbcpack_B.CANPack332.Data[2] = 0;
  dbcpack_B.CANPack332.Data[3] = 0;
  dbcpack_B.CANPack332.Data[4] = 0;
  dbcpack_B.CANPack332.Data[5] = 0;
  dbcpack_B.CANPack332.Data[6] = 0;
  dbcpack_B.CANPack332.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack332.Data), &dbcpack_P.Constant14_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_332' */
  dbcpack_CAN_332(dbcpack_B.CANPack332, &dbcpack_B.CAN_332, (rtP_CAN_332_dbcpack
    *)&dbcpack_P.CAN_332);

  /* End of Outputs for SubSystem: '<Root>/CAN_332' */

  /* S-Function (scanpack): '<Root>/CAN Pack340' */
  dbcpack_B.CANPack340.ID = 832U;
  dbcpack_B.CANPack340.Length = 8U;
  dbcpack_B.CANPack340.Extended = 0U;
  dbcpack_B.CANPack340.Remote = !(1);
  dbcpack_B.CANPack340.Data[0] = 0;
  dbcpack_B.CANPack340.Data[1] = 0;
  dbcpack_B.CANPack340.Data[2] = 0;
  dbcpack_B.CANPack340.Data[3] = 0;
  dbcpack_B.CANPack340.Data[4] = 0;
  dbcpack_B.CANPack340.Data[5] = 0;
  dbcpack_B.CANPack340.Data[6] = 0;
  dbcpack_B.CANPack340.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack340.Data), &dbcpack_P.Constant15_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_340' */
  dbcpack_CAN_340(dbcpack_B.CANPack340, &dbcpack_B.CAN_340, (rtP_CAN_340_dbcpack
    *)&dbcpack_P.CAN_340);

  /* End of Outputs for SubSystem: '<Root>/CAN_340' */

  /* S-Function (scanpack): '<Root>/CAN Pack342' */
  dbcpack_B.CANPack342.ID = 834U;
  dbcpack_B.CANPack342.Length = 8U;
  dbcpack_B.CANPack342.Extended = 0U;
  dbcpack_B.CANPack342.Remote = !(1);
  dbcpack_B.CANPack342.Data[0] = 0;
  dbcpack_B.CANPack342.Data[1] = 0;
  dbcpack_B.CANPack342.Data[2] = 0;
  dbcpack_B.CANPack342.Data[3] = 0;
  dbcpack_B.CANPack342.Data[4] = 0;
  dbcpack_B.CANPack342.Data[5] = 0;
  dbcpack_B.CANPack342.Data[6] = 0;
  dbcpack_B.CANPack342.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack342.Data), &dbcpack_P.Constant16_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_342' */
  dbcpack_CAN_342(dbcpack_B.CANPack342, &dbcpack_B.CAN_342, (rtP_CAN_342_dbcpack
    *)&dbcpack_P.CAN_342);

  /* End of Outputs for SubSystem: '<Root>/CAN_342' */

  /* S-Function (scanpack): '<Root>/CAN Pack350' */
  dbcpack_B.CANPack350.ID = 848U;
  dbcpack_B.CANPack350.Length = 8U;
  dbcpack_B.CANPack350.Extended = 0U;
  dbcpack_B.CANPack350.Remote = !(1);
  dbcpack_B.CANPack350.Data[0] = 0;
  dbcpack_B.CANPack350.Data[1] = 0;
  dbcpack_B.CANPack350.Data[2] = 0;
  dbcpack_B.CANPack350.Data[3] = 0;
  dbcpack_B.CANPack350.Data[4] = 0;
  dbcpack_B.CANPack350.Data[5] = 0;
  dbcpack_B.CANPack350.Data[6] = 0;
  dbcpack_B.CANPack350.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack350.Data), &dbcpack_P.Constant17_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_350' */
  dbcpack_CAN_350(dbcpack_B.CANPack350, &dbcpack_B.CAN_350, (rtP_CAN_350_dbcpack
    *)&dbcpack_P.CAN_350);

  /* End of Outputs for SubSystem: '<Root>/CAN_350' */

  /* S-Function (scanpack): '<Root>/CAN Pack352' */
  dbcpack_B.CANPack352.ID = 850U;
  dbcpack_B.CANPack352.Length = 8U;
  dbcpack_B.CANPack352.Extended = 0U;
  dbcpack_B.CANPack352.Remote = !(1);
  dbcpack_B.CANPack352.Data[0] = 0;
  dbcpack_B.CANPack352.Data[1] = 0;
  dbcpack_B.CANPack352.Data[2] = 0;
  dbcpack_B.CANPack352.Data[3] = 0;
  dbcpack_B.CANPack352.Data[4] = 0;
  dbcpack_B.CANPack352.Data[5] = 0;
  dbcpack_B.CANPack352.Data[6] = 0;
  dbcpack_B.CANPack352.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack352.Data), &dbcpack_P.Constant18_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_352' */
  dbcpack_CAN_352(dbcpack_B.CANPack352, &dbcpack_B.CAN_352, (rtP_CAN_352_dbcpack
    *)&dbcpack_P.CAN_352);

  /* End of Outputs for SubSystem: '<Root>/CAN_352' */

  /* S-Function (scanpack): '<Root>/CAN Pack360' */
  dbcpack_B.CANPack360.ID = 864U;
  dbcpack_B.CANPack360.Length = 8U;
  dbcpack_B.CANPack360.Extended = 0U;
  dbcpack_B.CANPack360.Remote = !(1);
  dbcpack_B.CANPack360.Data[0] = 0;
  dbcpack_B.CANPack360.Data[1] = 0;
  dbcpack_B.CANPack360.Data[2] = 0;
  dbcpack_B.CANPack360.Data[3] = 0;
  dbcpack_B.CANPack360.Data[4] = 0;
  dbcpack_B.CANPack360.Data[5] = 0;
  dbcpack_B.CANPack360.Data[6] = 0;
  dbcpack_B.CANPack360.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack360.Data), &dbcpack_P.Constant19_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_360' */
  dbcpack_CAN_360(dbcpack_B.CANPack360, &dbcpack_B.CAN_360, (rtP_CAN_360_dbcpack
    *)&dbcpack_P.CAN_360);

  /* End of Outputs for SubSystem: '<Root>/CAN_360' */

  /* S-Function (scanpack): '<Root>/CAN Pack362' */
  dbcpack_B.CANPack362.ID = 866U;
  dbcpack_B.CANPack362.Length = 8U;
  dbcpack_B.CANPack362.Extended = 0U;
  dbcpack_B.CANPack362.Remote = !(1);
  dbcpack_B.CANPack362.Data[0] = 0;
  dbcpack_B.CANPack362.Data[1] = 0;
  dbcpack_B.CANPack362.Data[2] = 0;
  dbcpack_B.CANPack362.Data[3] = 0;
  dbcpack_B.CANPack362.Data[4] = 0;
  dbcpack_B.CANPack362.Data[5] = 0;
  dbcpack_B.CANPack362.Data[6] = 0;
  dbcpack_B.CANPack362.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack362.Data), &dbcpack_P.Constant20_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_362' */
  dbcpack_CAN_362(dbcpack_B.CANPack362, &dbcpack_B.CAN_362, (rtP_CAN_362_dbcpack
    *)&dbcpack_P.CAN_362);

  /* End of Outputs for SubSystem: '<Root>/CAN_362' */

  /* S-Function (scanpack): '<Root>/CAN Pack370' */
  dbcpack_B.CANPack370.ID = 880U;
  dbcpack_B.CANPack370.Length = 8U;
  dbcpack_B.CANPack370.Extended = 0U;
  dbcpack_B.CANPack370.Remote = !(1);
  dbcpack_B.CANPack370.Data[0] = 0;
  dbcpack_B.CANPack370.Data[1] = 0;
  dbcpack_B.CANPack370.Data[2] = 0;
  dbcpack_B.CANPack370.Data[3] = 0;
  dbcpack_B.CANPack370.Data[4] = 0;
  dbcpack_B.CANPack370.Data[5] = 0;
  dbcpack_B.CANPack370.Data[6] = 0;
  dbcpack_B.CANPack370.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack370.Data), &dbcpack_P.Constant21_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_370' */
  dbcpack_CAN_370(dbcpack_B.CANPack370, &dbcpack_B.CAN_370, (rtP_CAN_370_dbcpack
    *)&dbcpack_P.CAN_370);

  /* End of Outputs for SubSystem: '<Root>/CAN_370' */

  /* S-Function (scanpack): '<Root>/CAN Pack372' */
  dbcpack_B.CANPack372.ID = 882U;
  dbcpack_B.CANPack372.Length = 8U;
  dbcpack_B.CANPack372.Extended = 0U;
  dbcpack_B.CANPack372.Remote = !(1);
  dbcpack_B.CANPack372.Data[0] = 0;
  dbcpack_B.CANPack372.Data[1] = 0;
  dbcpack_B.CANPack372.Data[2] = 0;
  dbcpack_B.CANPack372.Data[3] = 0;
  dbcpack_B.CANPack372.Data[4] = 0;
  dbcpack_B.CANPack372.Data[5] = 0;
  dbcpack_B.CANPack372.Data[6] = 0;
  dbcpack_B.CANPack372.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack372.Data), &dbcpack_P.Constant22_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_372' */
  dbcpack_CAN_372(dbcpack_B.CANPack372, &dbcpack_B.CAN_372, (rtP_CAN_372_dbcpack
    *)&dbcpack_P.CAN_372);

  /* End of Outputs for SubSystem: '<Root>/CAN_372' */

  /* S-Function (scanpack): '<Root>/CAN Pack380' */
  dbcpack_B.CANPack380.ID = 896U;
  dbcpack_B.CANPack380.Length = 8U;
  dbcpack_B.CANPack380.Extended = 0U;
  dbcpack_B.CANPack380.Remote = !(1);
  dbcpack_B.CANPack380.Data[0] = 0;
  dbcpack_B.CANPack380.Data[1] = 0;
  dbcpack_B.CANPack380.Data[2] = 0;
  dbcpack_B.CANPack380.Data[3] = 0;
  dbcpack_B.CANPack380.Data[4] = 0;
  dbcpack_B.CANPack380.Data[5] = 0;
  dbcpack_B.CANPack380.Data[6] = 0;
  dbcpack_B.CANPack380.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack380.Data), &dbcpack_P.Constant23_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_380' */
  dbcpack_CAN_380(dbcpack_B.CANPack380, &dbcpack_B.CAN_380, (rtP_CAN_380_dbcpack
    *)&dbcpack_P.CAN_380);

  /* End of Outputs for SubSystem: '<Root>/CAN_380' */

  /* S-Function (scanpack): '<Root>/CAN Pack382' */
  dbcpack_B.CANPack382.ID = 898U;
  dbcpack_B.CANPack382.Length = 8U;
  dbcpack_B.CANPack382.Extended = 0U;
  dbcpack_B.CANPack382.Remote = !(1);
  dbcpack_B.CANPack382.Data[0] = 0;
  dbcpack_B.CANPack382.Data[1] = 0;
  dbcpack_B.CANPack382.Data[2] = 0;
  dbcpack_B.CANPack382.Data[3] = 0;
  dbcpack_B.CANPack382.Data[4] = 0;
  dbcpack_B.CANPack382.Data[5] = 0;
  dbcpack_B.CANPack382.Data[6] = 0;
  dbcpack_B.CANPack382.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack382.Data), &dbcpack_P.Constant24_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_382' */
  dbcpack_CAN_382(dbcpack_B.CANPack382, &dbcpack_B.CAN_382, (rtP_CAN_382_dbcpack
    *)&dbcpack_P.CAN_382);

  /* End of Outputs for SubSystem: '<Root>/CAN_382' */

  /* S-Function (scanpack): '<Root>/CAN Pack600' */
  dbcpack_B.CANPack600.ID = 1536U;
  dbcpack_B.CANPack600.Length = 8U;
  dbcpack_B.CANPack600.Extended = 0U;
  dbcpack_B.CANPack600.Remote = !(1);
  dbcpack_B.CANPack600.Data[0] = 0;
  dbcpack_B.CANPack600.Data[1] = 0;
  dbcpack_B.CANPack600.Data[2] = 0;
  dbcpack_B.CANPack600.Data[3] = 0;
  dbcpack_B.CANPack600.Data[4] = 0;
  dbcpack_B.CANPack600.Data[5] = 0;
  dbcpack_B.CANPack600.Data[6] = 0;
  dbcpack_B.CANPack600.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack600.Data), &dbcpack_P.Constant_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_600' */
  dbcpack_CAN_600(dbcpack_B.CANPack600, &dbcpack_B.CAN_600, (rtP_CAN_600_dbcpack
    *)&dbcpack_P.CAN_600);

  /* End of Outputs for SubSystem: '<Root>/CAN_600' */

  /* S-Function (scanpack): '<Root>/CAN Pack650' */
  dbcpack_B.CANPack650.ID = 1616U;
  dbcpack_B.CANPack650.Length = 6U;
  dbcpack_B.CANPack650.Extended = 0U;
  dbcpack_B.CANPack650.Remote = !(1);
  dbcpack_B.CANPack650.Data[0] = 0;
  dbcpack_B.CANPack650.Data[1] = 0;
  dbcpack_B.CANPack650.Data[2] = 0;
  dbcpack_B.CANPack650.Data[3] = 0;
  dbcpack_B.CANPack650.Data[4] = 0;
  dbcpack_B.CANPack650.Data[5] = 0;
  dbcpack_B.CANPack650.Data[6] = 0;
  dbcpack_B.CANPack650.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack650.Data), &dbcpack_P.Constant1_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_650' */
  dbcpack_CAN_650(dbcpack_B.CANPack650, &dbcpack_B.CAN_650, (rtP_CAN_650_dbcpack
    *)&dbcpack_P.CAN_650);

  /* End of Outputs for SubSystem: '<Root>/CAN_650' */

  /* S-Function (scanpack): '<Root>/CAN Pack651' */
  dbcpack_B.CANPack651.ID = 1617U;
  dbcpack_B.CANPack651.Length = 6U;
  dbcpack_B.CANPack651.Extended = 0U;
  dbcpack_B.CANPack651.Remote = !(1);
  dbcpack_B.CANPack651.Data[0] = 0;
  dbcpack_B.CANPack651.Data[1] = 0;
  dbcpack_B.CANPack651.Data[2] = 0;
  dbcpack_B.CANPack651.Data[3] = 0;
  dbcpack_B.CANPack651.Data[4] = 0;
  dbcpack_B.CANPack651.Data[5] = 0;
  dbcpack_B.CANPack651.Data[6] = 0;
  dbcpack_B.CANPack651.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack651.Data), &dbcpack_P.Constant2_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_651' */
  dbcpack_CAN_651(dbcpack_B.CANPack651, &dbcpack_B.CAN_651, (rtP_CAN_651_dbcpack
    *)&dbcpack_P.CAN_651);

  /* End of Outputs for SubSystem: '<Root>/CAN_651' */

  /* S-Function (scanpack): '<Root>/CAN Pack652' */
  dbcpack_B.CANPack652.ID = 1618U;
  dbcpack_B.CANPack652.Length = 5U;
  dbcpack_B.CANPack652.Extended = 0U;
  dbcpack_B.CANPack652.Remote = !(1);
  dbcpack_B.CANPack652.Data[0] = 0;
  dbcpack_B.CANPack652.Data[1] = 0;
  dbcpack_B.CANPack652.Data[2] = 0;
  dbcpack_B.CANPack652.Data[3] = 0;
  dbcpack_B.CANPack652.Data[4] = 0;
  dbcpack_B.CANPack652.Data[5] = 0;
  dbcpack_B.CANPack652.Data[6] = 0;
  dbcpack_B.CANPack652.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack652.Data), &dbcpack_P.Constant3_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_652' */
  dbcpack_CAN_652(dbcpack_B.CANPack652, &dbcpack_B.CAN_652, (rtP_CAN_652_dbcpack
    *)&dbcpack_P.CAN_652);

  /* End of Outputs for SubSystem: '<Root>/CAN_652' */

  /* S-Function (scanpack): '<Root>/CAN Pack653' */
  dbcpack_B.CANPack653.ID = 1619U;
  dbcpack_B.CANPack653.Length = 6U;
  dbcpack_B.CANPack653.Extended = 0U;
  dbcpack_B.CANPack653.Remote = !(1);
  dbcpack_B.CANPack653.Data[0] = 0;
  dbcpack_B.CANPack653.Data[1] = 0;
  dbcpack_B.CANPack653.Data[2] = 0;
  dbcpack_B.CANPack653.Data[3] = 0;
  dbcpack_B.CANPack653.Data[4] = 0;
  dbcpack_B.CANPack653.Data[5] = 0;
  dbcpack_B.CANPack653.Data[6] = 0;
  dbcpack_B.CANPack653.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack653.Data), &dbcpack_P.Constant4_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_653' */
  dbcpack_CAN_653(dbcpack_B.CANPack653, &dbcpack_B.CAN_653, (rtP_CAN_653_dbcpack
    *)&dbcpack_P.CAN_653);

  /* End of Outputs for SubSystem: '<Root>/CAN_653' */

  /* S-Function (scanpack): '<Root>/CAN Pack654' */
  dbcpack_B.CANPack654.ID = 1620U;
  dbcpack_B.CANPack654.Length = 6U;
  dbcpack_B.CANPack654.Extended = 0U;
  dbcpack_B.CANPack654.Remote = !(1);
  dbcpack_B.CANPack654.Data[0] = 0;
  dbcpack_B.CANPack654.Data[1] = 0;
  dbcpack_B.CANPack654.Data[2] = 0;
  dbcpack_B.CANPack654.Data[3] = 0;
  dbcpack_B.CANPack654.Data[4] = 0;
  dbcpack_B.CANPack654.Data[5] = 0;
  dbcpack_B.CANPack654.Data[6] = 0;
  dbcpack_B.CANPack654.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack654.Data), &dbcpack_P.Constant5_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_654' */
  dbcpack_CAN_654(dbcpack_B.CANPack654, &dbcpack_B.CAN_654, (rtP_CAN_654_dbcpack
    *)&dbcpack_P.CAN_654);

  /* End of Outputs for SubSystem: '<Root>/CAN_654' */

  /* S-Function (scanpack): '<Root>/CAN Pack655' */
  dbcpack_B.CANPack655.ID = 1621U;
  dbcpack_B.CANPack655.Length = 5U;
  dbcpack_B.CANPack655.Extended = 0U;
  dbcpack_B.CANPack655.Remote = !(1);
  dbcpack_B.CANPack655.Data[0] = 0;
  dbcpack_B.CANPack655.Data[1] = 0;
  dbcpack_B.CANPack655.Data[2] = 0;
  dbcpack_B.CANPack655.Data[3] = 0;
  dbcpack_B.CANPack655.Data[4] = 0;
  dbcpack_B.CANPack655.Data[5] = 0;
  dbcpack_B.CANPack655.Data[6] = 0;
  dbcpack_B.CANPack655.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack655.Data), &dbcpack_P.Constant6_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_655' */
  dbcpack_CAN_655(dbcpack_B.CANPack655, &dbcpack_B.CAN_655, (rtP_CAN_655_dbcpack
    *)&dbcpack_P.CAN_655);

  /* End of Outputs for SubSystem: '<Root>/CAN_655' */

  /* S-Function (scanpack): '<Root>/CAN Pack656' */
  dbcpack_B.CANPack656.ID = 1622U;
  dbcpack_B.CANPack656.Length = 6U;
  dbcpack_B.CANPack656.Extended = 0U;
  dbcpack_B.CANPack656.Remote = !(1);
  dbcpack_B.CANPack656.Data[0] = 0;
  dbcpack_B.CANPack656.Data[1] = 0;
  dbcpack_B.CANPack656.Data[2] = 0;
  dbcpack_B.CANPack656.Data[3] = 0;
  dbcpack_B.CANPack656.Data[4] = 0;
  dbcpack_B.CANPack656.Data[5] = 0;
  dbcpack_B.CANPack656.Data[6] = 0;
  dbcpack_B.CANPack656.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack656.Data), &dbcpack_P.Constant7_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_656' */
  dbcpack_CAN_656(dbcpack_B.CANPack656, &dbcpack_B.CAN_656, (rtP_CAN_656_dbcpack
    *)&dbcpack_P.CAN_656);

  /* End of Outputs for SubSystem: '<Root>/CAN_656' */

  /* S-Function (scanpack): '<Root>/CAN Pack657' */
  dbcpack_B.CANPack657.ID = 1623U;
  dbcpack_B.CANPack657.Length = 6U;
  dbcpack_B.CANPack657.Extended = 0U;
  dbcpack_B.CANPack657.Remote = !(1);
  dbcpack_B.CANPack657.Data[0] = 0;
  dbcpack_B.CANPack657.Data[1] = 0;
  dbcpack_B.CANPack657.Data[2] = 0;
  dbcpack_B.CANPack657.Data[3] = 0;
  dbcpack_B.CANPack657.Data[4] = 0;
  dbcpack_B.CANPack657.Data[5] = 0;
  dbcpack_B.CANPack657.Data[6] = 0;
  dbcpack_B.CANPack657.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack657.Data), &dbcpack_P.Constant8_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_657' */
  dbcpack_CAN_657(dbcpack_B.CANPack657, &dbcpack_B.CAN_657, (rtP_CAN_657_dbcpack
    *)&dbcpack_P.CAN_657);

  /* End of Outputs for SubSystem: '<Root>/CAN_657' */

  /* S-Function (scanpack): '<Root>/CAN Pack658' */
  dbcpack_B.CANPack658.ID = 1624U;
  dbcpack_B.CANPack658.Length = 5U;
  dbcpack_B.CANPack658.Extended = 0U;
  dbcpack_B.CANPack658.Remote = !(1);
  dbcpack_B.CANPack658.Data[0] = 0;
  dbcpack_B.CANPack658.Data[1] = 0;
  dbcpack_B.CANPack658.Data[2] = 0;
  dbcpack_B.CANPack658.Data[3] = 0;
  dbcpack_B.CANPack658.Data[4] = 0;
  dbcpack_B.CANPack658.Data[5] = 0;
  dbcpack_B.CANPack658.Data[6] = 0;
  dbcpack_B.CANPack658.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack658.Data), &dbcpack_P.Constant9_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_658' */
  dbcpack_CAN_658(dbcpack_B.CANPack658, &dbcpack_B.CAN_658, (rtP_CAN_658_dbcpack
    *)&dbcpack_P.CAN_658);

  /* End of Outputs for SubSystem: '<Root>/CAN_658' */

  /* S-Function (scanpack): '<Root>/CAN Pack659' */
  dbcpack_B.CANPack659.ID = 1625U;
  dbcpack_B.CANPack659.Length = 6U;
  dbcpack_B.CANPack659.Extended = 0U;
  dbcpack_B.CANPack659.Remote = !(1);
  dbcpack_B.CANPack659.Data[0] = 0;
  dbcpack_B.CANPack659.Data[1] = 0;
  dbcpack_B.CANPack659.Data[2] = 0;
  dbcpack_B.CANPack659.Data[3] = 0;
  dbcpack_B.CANPack659.Data[4] = 0;
  dbcpack_B.CANPack659.Data[5] = 0;
  dbcpack_B.CANPack659.Data[6] = 0;
  dbcpack_B.CANPack659.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack659.Data), &dbcpack_P.Constant10_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_659' */
  dbcpack_CAN_659(dbcpack_B.CANPack659, &dbcpack_B.CAN_659, (rtP_CAN_659_dbcpack
    *)&dbcpack_P.CAN_659);

  /* End of Outputs for SubSystem: '<Root>/CAN_659' */

  /* S-Function (scanpack): '<Root>/CAN Pack65A' */
  dbcpack_B.CANPack65A.ID = 1626U;
  dbcpack_B.CANPack65A.Length = 6U;
  dbcpack_B.CANPack65A.Extended = 0U;
  dbcpack_B.CANPack65A.Remote = !(1);
  dbcpack_B.CANPack65A.Data[0] = 0;
  dbcpack_B.CANPack65A.Data[1] = 0;
  dbcpack_B.CANPack65A.Data[2] = 0;
  dbcpack_B.CANPack65A.Data[3] = 0;
  dbcpack_B.CANPack65A.Data[4] = 0;
  dbcpack_B.CANPack65A.Data[5] = 0;
  dbcpack_B.CANPack65A.Data[6] = 0;
  dbcpack_B.CANPack65A.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack65A.Data), &dbcpack_P.Constant11_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_65A' */
  dbcpack_CAN_65A(dbcpack_B.CANPack65A, &dbcpack_B.CAN_65A, (rtP_CAN_65A_dbcpack
    *)&dbcpack_P.CAN_65A);

  /* End of Outputs for SubSystem: '<Root>/CAN_65A' */

  /* S-Function (scanpack): '<Root>/CAN Pack65B' */
  dbcpack_B.CANPack65B.ID = 1627U;
  dbcpack_B.CANPack65B.Length = 5U;
  dbcpack_B.CANPack65B.Extended = 0U;
  dbcpack_B.CANPack65B.Remote = !(1);
  dbcpack_B.CANPack65B.Data[0] = 0;
  dbcpack_B.CANPack65B.Data[1] = 0;
  dbcpack_B.CANPack65B.Data[2] = 0;
  dbcpack_B.CANPack65B.Data[3] = 0;
  dbcpack_B.CANPack65B.Data[4] = 0;
  dbcpack_B.CANPack65B.Data[5] = 0;
  dbcpack_B.CANPack65B.Data[6] = 0;
  dbcpack_B.CANPack65B.Data[7] = 0;

  {
    {
      (void) memcpy((dbcpack_B.CANPack65B.Data), &dbcpack_P.Constant12_Value,
                    1 * sizeof(uint8_T));
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/CAN_65B' */
  dbcpack_CAN_65B(dbcpack_B.CANPack65B, &dbcpack_B.CAN_65B, (rtP_CAN_65B_dbcpack
    *)&dbcpack_P.CAN_65B);

  /* End of Outputs for SubSystem: '<Root>/CAN_65B' */
}

/* Model initialize function */
void dbcpack_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(dbcpack_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &dbcpack_B), 0,
                sizeof(BlockIO_dbcpack));

  {
    dbcpack_B.CANPack140 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack180 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack200 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack330 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack332 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack340 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack342 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack350 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack352 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack360 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack362 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack370 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack372 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack380 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack382 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack600 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack650 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack651 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack652 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack653 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack654 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack655 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack656 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack657 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack658 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack659 = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack65A = CAN_DATATYPE_GROUND;
    dbcpack_B.CANPack65B = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) memset((void *)&dbcpack_DWork, 0,
                sizeof(D_Work_dbcpack));

  /* Start for Atomic SubSystem: '<Root>/CAN_140' */
  dbcpack_CAN_140_Start();

  /* End of Start for SubSystem: '<Root>/CAN_140' */

  /* Start for Atomic SubSystem: '<Root>/CAN_180' */
  dbcpack_CAN_180_Start();

  /* End of Start for SubSystem: '<Root>/CAN_180' */

  /* Start for Atomic SubSystem: '<Root>/CAN_200' */
  dbcpack_CAN_200_Start();

  /* End of Start for SubSystem: '<Root>/CAN_200' */

  /* Start for Atomic SubSystem: '<Root>/CAN_330' */
  dbcpack_CAN_330_Start();

  /* End of Start for SubSystem: '<Root>/CAN_330' */

  /* Start for Atomic SubSystem: '<Root>/CAN_332' */
  dbcpack_CAN_332_Start();

  /* End of Start for SubSystem: '<Root>/CAN_332' */

  /* Start for Atomic SubSystem: '<Root>/CAN_340' */
  dbcpack_CAN_340_Start();

  /* End of Start for SubSystem: '<Root>/CAN_340' */

  /* Start for Atomic SubSystem: '<Root>/CAN_342' */
  dbcpack_CAN_342_Start();

  /* End of Start for SubSystem: '<Root>/CAN_342' */

  /* Start for Atomic SubSystem: '<Root>/CAN_350' */
  dbcpack_CAN_350_Start();

  /* End of Start for SubSystem: '<Root>/CAN_350' */

  /* Start for Atomic SubSystem: '<Root>/CAN_352' */
  dbcpack_CAN_352_Start();

  /* End of Start for SubSystem: '<Root>/CAN_352' */

  /* Start for Atomic SubSystem: '<Root>/CAN_360' */
  dbcpack_CAN_360_Start();

  /* End of Start for SubSystem: '<Root>/CAN_360' */

  /* Start for Atomic SubSystem: '<Root>/CAN_362' */
  dbcpack_CAN_362_Start();

  /* End of Start for SubSystem: '<Root>/CAN_362' */

  /* Start for Atomic SubSystem: '<Root>/CAN_370' */
  dbcpack_CAN_370_Start();

  /* End of Start for SubSystem: '<Root>/CAN_370' */

  /* Start for Atomic SubSystem: '<Root>/CAN_372' */
  dbcpack_CAN_372_Start();

  /* End of Start for SubSystem: '<Root>/CAN_372' */

  /* Start for Atomic SubSystem: '<Root>/CAN_380' */
  dbcpack_CAN_380_Start();

  /* End of Start for SubSystem: '<Root>/CAN_380' */

  /* Start for Atomic SubSystem: '<Root>/CAN_382' */
  dbcpack_CAN_382_Start();

  /* End of Start for SubSystem: '<Root>/CAN_382' */

  /* Start for Atomic SubSystem: '<Root>/CAN_600' */
  dbcpack_CAN_600_Start();

  /* End of Start for SubSystem: '<Root>/CAN_600' */

  /* Start for Atomic SubSystem: '<Root>/CAN_650' */
  dbcpack_CAN_650_Start();

  /* End of Start for SubSystem: '<Root>/CAN_650' */

  /* Start for Atomic SubSystem: '<Root>/CAN_651' */
  dbcpack_CAN_651_Start();

  /* End of Start for SubSystem: '<Root>/CAN_651' */

  /* Start for Atomic SubSystem: '<Root>/CAN_652' */
  dbcpack_CAN_652_Start();

  /* End of Start for SubSystem: '<Root>/CAN_652' */

  /* Start for Atomic SubSystem: '<Root>/CAN_653' */
  dbcpack_CAN_653_Start();

  /* End of Start for SubSystem: '<Root>/CAN_653' */

  /* Start for Atomic SubSystem: '<Root>/CAN_654' */
  dbcpack_CAN_654_Start();

  /* End of Start for SubSystem: '<Root>/CAN_654' */

  /* Start for Atomic SubSystem: '<Root>/CAN_655' */
  dbcpack_CAN_655_Start();

  /* End of Start for SubSystem: '<Root>/CAN_655' */

  /* Start for Atomic SubSystem: '<Root>/CAN_656' */
  dbcpack_CAN_656_Start();

  /* End of Start for SubSystem: '<Root>/CAN_656' */

  /* Start for Atomic SubSystem: '<Root>/CAN_657' */
  dbcpack_CAN_657_Start();

  /* End of Start for SubSystem: '<Root>/CAN_657' */

  /* Start for Atomic SubSystem: '<Root>/CAN_658' */
  dbcpack_CAN_658_Start();

  /* End of Start for SubSystem: '<Root>/CAN_658' */

  /* Start for Atomic SubSystem: '<Root>/CAN_659' */
  dbcpack_CAN_659_Start();

  /* End of Start for SubSystem: '<Root>/CAN_659' */

  /* Start for Atomic SubSystem: '<Root>/CAN_65A' */
  dbcpack_CAN_65A_Start();

  /* End of Start for SubSystem: '<Root>/CAN_65A' */

  /* Start for Atomic SubSystem: '<Root>/CAN_65B' */
  dbcpack_CAN_65B_Start();

  /* End of Start for SubSystem: '<Root>/CAN_65B' */
}

/* Model terminate function */
void dbcpack_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
