/*
 * File: dbcpack_data.cpp
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

/* Block parameters (auto storage) */
Parameters_dbcpack dbcpack_P = {
  0U,                                  /* Computed Parameter: Constant25_Value
                                        * Referenced by: '<Root>/Constant25'
                                        */
  0U,                                  /* Computed Parameter: Constant26_Value
                                        * Referenced by: '<Root>/Constant26'
                                        */
  0U,                                  /* Computed Parameter: Constant27_Value
                                        * Referenced by: '<Root>/Constant27'
                                        */
  0U,                                  /* Computed Parameter: Constant13_Value
                                        * Referenced by: '<Root>/Constant13'
                                        */
  0U,                                  /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<Root>/Constant14'
                                        */
  0U,                                  /* Computed Parameter: Constant15_Value
                                        * Referenced by: '<Root>/Constant15'
                                        */
  0U,                                  /* Computed Parameter: Constant16_Value
                                        * Referenced by: '<Root>/Constant16'
                                        */
  0U,                                  /* Computed Parameter: Constant17_Value
                                        * Referenced by: '<Root>/Constant17'
                                        */
  0U,                                  /* Computed Parameter: Constant18_Value
                                        * Referenced by: '<Root>/Constant18'
                                        */
  0U,                                  /* Computed Parameter: Constant19_Value
                                        * Referenced by: '<Root>/Constant19'
                                        */
  0U,                                  /* Computed Parameter: Constant20_Value
                                        * Referenced by: '<Root>/Constant20'
                                        */
  0U,                                  /* Computed Parameter: Constant21_Value
                                        * Referenced by: '<Root>/Constant21'
                                        */
  0U,                                  /* Computed Parameter: Constant22_Value
                                        * Referenced by: '<Root>/Constant22'
                                        */
  0U,                                  /* Computed Parameter: Constant23_Value
                                        * Referenced by: '<Root>/Constant23'
                                        */
  0U,                                  /* Computed Parameter: Constant24_Value
                                        * Referenced by: '<Root>/Constant24'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  0U,                                  /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  0U,                                  /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  0U,                                  /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<Root>/Constant3'
                                        */
  0U,                                  /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  0U,                                  /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<Root>/Constant5'
                                        */
  0U,                                  /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<Root>/Constant6'
                                        */
  0U,                                  /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<Root>/Constant7'
                                        */
  0U,                                  /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<Root>/Constant8'
                                        */
  0U,                                  /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<Root>/Constant9'
                                        */
  0U,                                  /* Computed Parameter: Constant10_Value
                                        * Referenced by: '<Root>/Constant10'
                                        */
  0U,                                  /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<Root>/Constant11'
                                        */
  0U,                                  /* Computed Parameter: Constant12_Value
                                        * Referenced by: '<Root>/Constant12'
                                        */

  /* Start of '<Root>/CAN_65B' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S28>/L3_Curvature_Driv'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S28>/L3_Mark_Color'
                                        */
  }
  /* End of '<Root>/CAN_65B' */
  ,

  /* Start of '<Root>/CAN_65A' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S27>/L3_Curvature'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S27>/L3_Heading_Angle'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S27>/L3_Position'
                                        */
  }
  /* End of '<Root>/CAN_65A' */
  ,

  /* Start of '<Root>/CAN_659' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S26>/L3_Location'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S26>/L3_MarkType'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S26>/L3_Quality'
                                        */
  }
  /* End of '<Root>/CAN_659' */
  ,

  /* Start of '<Root>/CAN_658' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S25>/L2_Curvature_Driv'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S25>/L2_Mark_Color'
                                        */
  }
  /* End of '<Root>/CAN_658' */
  ,

  /* Start of '<Root>/CAN_657' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S24>/L2_Curvature'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S24>/L2_Heading_Angle'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S24>/L2_Position'
                                        */
  }
  /* End of '<Root>/CAN_657' */
  ,

  /* Start of '<Root>/CAN_656' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S23>/L2_Location'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S23>/L2_MarkType'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S23>/L2_Quality'
                                        */
  }
  /* End of '<Root>/CAN_656' */
  ,

  /* Start of '<Root>/CAN_655' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S22>/L1_Curvature_Driv'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S22>/L1_Mark_Color'
                                        */
  }
  /* End of '<Root>/CAN_655' */
  ,

  /* Start of '<Root>/CAN_654' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S21>/L1_Curvature'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S21>/L1_Heading_Angle'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S21>/L1_Position'
                                        */
  }
  /* End of '<Root>/CAN_654' */
  ,

  /* Start of '<Root>/CAN_653' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S20>/L1_Location'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S20>/L1_MarkType'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S20>/L1_Quality'
                                        */
  }
  /* End of '<Root>/CAN_653' */
  ,

  /* Start of '<Root>/CAN_652' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S19>/L0_Curvature_Driv'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S19>/L0_Mark_Color'
                                        */
  }
  /* End of '<Root>/CAN_652' */
  ,

  /* Start of '<Root>/CAN_651' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S18>/L0_Curvature'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S18>/L0_Heading_Angle'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S18>/L0_Position'
                                        */
  }
  /* End of '<Root>/CAN_651' */
  ,

  /* Start of '<Root>/CAN_650' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S17>/L0_Location'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S17>/L0_MarkType'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S17>/L0_Quality'
                                        */
  }
  /* End of '<Root>/CAN_650' */
  ,

  /* Start of '<Root>/CAN_600' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S16>/SteerAngle'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S16>/VehicleSpeed'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S16>/YawRate'
                                        */
  }
  /* End of '<Root>/CAN_600' */
  ,

  /* Start of '<Root>/CAN_382' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S15>/Y_Distance_5'
                                        */
  }
  /* End of '<Root>/CAN_382' */
  ,

  /* Start of '<Root>/CAN_380' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S14>/Objects_ID_5'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S14>/Objects_Object_Class_5'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S14>/X_Distance_5'
                                        */
  }
  /* End of '<Root>/CAN_380' */
  ,

  /* Start of '<Root>/CAN_372' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S13>/Y_Distance_4'
                                        */
  }
  /* End of '<Root>/CAN_372' */
  ,

  /* Start of '<Root>/CAN_370' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Objects_ID_4'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S12>/Objects_Object_Class_4'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S12>/X_Distance_4'
                                        */
  }
  /* End of '<Root>/CAN_370' */
  ,

  /* Start of '<Root>/CAN_362' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S11>/Y_Distance_3'
                                        */
  }
  /* End of '<Root>/CAN_362' */
  ,

  /* Start of '<Root>/CAN_360' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S10>/Objects_ID_3'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S10>/Objects_Object_Class_3'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S10>/X_Distance_3'
                                        */
  }
  /* End of '<Root>/CAN_360' */
  ,

  /* Start of '<Root>/CAN_352' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S9>/Y_Distance_2'
                                        */
  }
  /* End of '<Root>/CAN_352' */
  ,

  /* Start of '<Root>/CAN_350' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S8>/Objects_ID_2'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S8>/Objects_Object_Class_2'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S8>/X_Distance_2'
                                        */
  }
  /* End of '<Root>/CAN_350' */
  ,

  /* Start of '<Root>/CAN_342' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S7>/Y_Distance_1'
                                        */
  }
  /* End of '<Root>/CAN_342' */
  ,

  /* Start of '<Root>/CAN_340' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S6>/Objects_ID_1'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S6>/Objects_Object_Class_1'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S6>/X_Distance_1'
                                        */
  }
  /* End of '<Root>/CAN_340' */
  ,

  /* Start of '<Root>/CAN_332' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S5>/Y_Distance'
                                        */
  }
  /* End of '<Root>/CAN_332' */
  ,

  /* Start of '<Root>/CAN_330' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S4>/Objects_ID_0'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S4>/Objects_Object_Class_0'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S4>/X_Distance_0'
                                        */
  }
  /* End of '<Root>/CAN_330' */
  ,

  /* Start of '<Root>/CAN_200' */
  {
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/BrakePedal'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/Collsn_warning_ID'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/Collsn_warning_state'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/ControlType'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/DrivePedal'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/GearPRND'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S3>/TargetPathState'
                                        */
    1.0                                /* Expression: 1
                                        * Referenced by: '<S3>/TurnLamp'
                                        */
  }
  /* End of '<Root>/CAN_200' */
  ,

  /* Start of '<Root>/CAN_180' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S2>/LKASysActStat'
                                        */
  }
  /* End of '<Root>/CAN_180' */
  ,

  /* Start of '<Root>/CAN_140' */
  {
    1.0                                /* Expression: 1
                                        * Referenced by: '<S1>/Lighting_HS'
                                        */
  }
  /* End of '<Root>/CAN_140' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
