#include "canMsgFuncUtil.h"

using namespace std;

//update the given one value in the share memory
void updateInfo1(int *writeFlag, int *readFlag, double *target, double source){
  if(*writeFlag == 1){
    *writeFlag = 0;
    *readFlag = 0;
    *target = source;
    *writeFlag = 1;
    *readFlag = 1;
  }
}

//update the given two values in the share memory
void updateInfo2(int *writeFlag, int *readFlag, double *target1, double source1, double *target2, double source2){
  if(*writeFlag == 1){
    *writeFlag = 0;
    *readFlag = 0;
    *target1 = source1;
    *target2 = source2;
    *writeFlag = 1;
    *readFlag = 1;
  }
}

//upfate the given three values in the share memory
void updateInfo3(int *writeFlag, int *readFlag, double *target1, double source1, double *target2, double source2, double *target3, double source3){
  if(*writeFlag == 1){
    *writeFlag = 0;
    *readFlag = 0;
    *target1 = source1;
    *target2 = source2;
    *target3 = source3;
    *writeFlag = 1;
    *readFlag = 1;
  }
}

//the mehtod is used to call the aiming function by the msg id
void canMsgSwitch(long id, unsigned int dlc, unsigned char *msg, struct SharedInfo *shared){
  BlockIO_dbcpack dbcpack_B;

  switch(id){
    case 816:
      can330_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 818:
      can332_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 832:
      can340_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 834:
      can342_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 848:
      can350_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 850:
      can352_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 864:
      can360_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 866:
      can362_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 880:
      can370_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 882:
      can372_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 896:
      can380_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 898:
      can382_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1536:
      can600_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1616:
      can650_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1617:
      can651_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1618:
      can652_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1619:
      can653_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1620:
      can654_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1621:
      can655_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1622:
      can656_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1623:
      can657_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1624:
      can658_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1625:
      can659_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1626:
      can65A_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    case 1627:
      can65B_MsgTransform(dlc, msg, dbcpack_B, id, shared);
      break;
    default:;
  }

}

//set the accepted can message in the package
CAN_MESSAGE canMsgUpdateToCanpack(unsigned int dlc, unsigned char *msg, CAN_MESSAGE canMsg, long id, unsigned int canMsgLength){
  canMsg.ID = id;
  canMsg.Length = canMsgLength;
  canMsg.Extended = 0;
  canMsg.Remote = !(1);
  for(int ii = 0; ii < dlc; ii++) {
    canMsg.Data[ii] = msg[ii];
    // printf("%2.2x ", msg[ii]);
  }
  // cout << "" << endl;
  cout << "ID: " << canMsg.ID << endl;
  return canMsg;
}

void can330_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack330 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack330, id, 8);
  dbcpack_CAN_330(dbcpack_B.CANPack330, &dbcpack_B.CAN_330, (rtP_CAN_330_dbcpack *)&dbcpack_P.CAN_330);
  updateInfo3(&shared->canWriteCan330Msg, &shared->canReadCan330Msg, &shared->objects_ID_0, dbcpack_B.CAN_330.Objects_ID_0,
    &shared->objects_Object_Class_0, dbcpack_B.CAN_330.Objects_Object_Class_0,
    &shared->x_Distance_0, dbcpack_B.CAN_330.X_Distance_0
  );
  // if(shared->canWriteCan330Msg == 1){
  //   shared->canWriteCan330Msg = 0;
  //   shared->objects_ID_0 = dbcpack_B.CAN_330.Objects_ID_0;
  //   shared->objects_Object_Class_0 = dbcpack_B.CAN_330.Objects_Object_Class_0;
  //   shared->x_Distance_0 = dbcpack_B.CAN_330.X_Distance_0;
  //   shared->canWriteCan330Msg = 1;
  // }
  cout << "Objects_ID_0: " << dbcpack_B.CAN_330.Objects_ID_0 << endl;
  cout << "Objects_Object_Class_0: " << dbcpack_B.CAN_330.Objects_Object_Class_0 << endl;
  cout << "X_Distance_0: " << dbcpack_B.CAN_330.X_Distance_0 << endl;
}
void can332_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack332 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack332, id, 8);
  dbcpack_CAN_332(dbcpack_B.CANPack332, &dbcpack_B.CAN_332, (rtP_CAN_332_dbcpack *)&dbcpack_P.CAN_332);
  updateInfo1(&shared->canWriteCan332Msg, &shared->canReadCan332Msg, &shared->y_Distance_0, dbcpack_B.CAN_332.Y_Distance);
  cout << "Y_Distance: " << dbcpack_B.CAN_332.Y_Distance << endl;
}
void can340_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack340 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack340, id, 8);
  dbcpack_CAN_340(dbcpack_B.CANPack340, &dbcpack_B.CAN_340, (rtP_CAN_340_dbcpack *)&dbcpack_P.CAN_340);
  updateInfo3(&shared->canWriteCan340Msg, &shared->canReadCan340Msg, &shared->objects_ID_1, dbcpack_B.CAN_340.Objects_ID_1,
    &shared->objects_Object_Class_1, dbcpack_B.CAN_340.Objects_Object_Class_1,
    &shared->x_Distance_1, dbcpack_B.CAN_340.X_Distance_1
  );
  cout << "Objects_ID_1: " << dbcpack_B.CAN_340.Objects_ID_1 << endl;
  cout << "Objects_Object_Class_1: " << dbcpack_B.CAN_340.Objects_Object_Class_1 << endl;
  cout << "X_Distance_1: " << dbcpack_B.CAN_340.X_Distance_1 << endl;
}
void can342_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack342 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack342, id, 8);
  dbcpack_CAN_342(dbcpack_B.CANPack342, &dbcpack_B.CAN_342, (rtP_CAN_342_dbcpack *)&dbcpack_P.CAN_342);
  updateInfo1(&shared->canWriteCan342Msg, &shared->canReadCan342Msg, &shared->y_Distance_1, dbcpack_B.CAN_342.Y_Distance_1);
  cout << "Y_Distance_1: " << dbcpack_B.CAN_342.Y_Distance_1 << endl;
}
void can350_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack350 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack350, id, 8);
  dbcpack_CAN_350(dbcpack_B.CANPack350, &dbcpack_B.CAN_350, (rtP_CAN_350_dbcpack *)&dbcpack_P.CAN_350);
  updateInfo3(&shared->canWriteCan350Msg, &shared->canReadCan350Msg, &shared->objects_ID_2, dbcpack_B.CAN_350.Objects_ID_2,
    &shared->objects_Object_Class_2, dbcpack_B.CAN_350.Objects_Object_Class_2,
    &shared->x_Distance_2, dbcpack_B.CAN_350.X_Distance_2
  );
  cout << "Objects_ID_2: " << dbcpack_B.CAN_350.Objects_ID_2 << endl;
  cout << "Objects_Object_Class_2: " << dbcpack_B.CAN_350.Objects_Object_Class_2 << endl;
  cout << "X_Distance_2: " << dbcpack_B.CAN_350.X_Distance_2 << endl;
}
void can352_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack352 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack352, id, 8);
  dbcpack_CAN_352(dbcpack_B.CANPack352, &dbcpack_B.CAN_352, (rtP_CAN_352_dbcpack *)&dbcpack_P.CAN_352);
  updateInfo1(&shared->canWriteCan352Msg, &shared->canReadCan352Msg, &shared->y_Distance_2, dbcpack_B.CAN_352.Y_Distance_2);
  cout << "Y_Distance_2: " << dbcpack_B.CAN_352.Y_Distance_2 << endl;
}
void can360_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack360 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack360, id, 8);
  dbcpack_CAN_360(dbcpack_B.CANPack360, &dbcpack_B.CAN_360, (rtP_CAN_360_dbcpack *)&dbcpack_P.CAN_360);
  updateInfo3(&shared->canWriteCan360Msg, &shared->canReadCan360Msg, &shared->objects_ID_3, dbcpack_B.CAN_360.Objects_ID_3,
    &shared->objects_Object_Class_3, dbcpack_B.CAN_360.Objects_Object_Class_3,
    &shared->x_Distance_3, dbcpack_B.CAN_360.X_Distance_3
  );
  cout << "Objects_ID_3: " << dbcpack_B.CAN_360.Objects_ID_3 << endl;
  cout << "Objects_Object_Class_3: " << dbcpack_B.CAN_360.Objects_Object_Class_3 << endl;
  cout << "X_Distance_3: " << dbcpack_B.CAN_360.X_Distance_3 << endl;
}
void can362_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack362 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack362, id, 8);
  dbcpack_CAN_362(dbcpack_B.CANPack362, &dbcpack_B.CAN_362, (rtP_CAN_362_dbcpack *)&dbcpack_P.CAN_362);
  updateInfo1(&shared->canWriteCan362Msg, &shared->canReadCan362Msg, &shared->y_Distance_3, dbcpack_B.CAN_362.Y_Distance_3);
  cout << "Y_Distance_3: " << dbcpack_B.CAN_362.Y_Distance_3 << endl;
}
void can370_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack370 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack370, id, 8);
  dbcpack_CAN_370(dbcpack_B.CANPack370, &dbcpack_B.CAN_370, (rtP_CAN_370_dbcpack *)&dbcpack_P.CAN_370);
  updateInfo3(&shared->canWriteCan370Msg, &shared->canReadCan370Msg, &shared->objects_ID_4, dbcpack_B.CAN_370.Objects_ID_4,
    &shared->objects_Object_Class_4, dbcpack_B.CAN_370.Objects_Object_Class_4,
    &shared->x_Distance_4, dbcpack_B.CAN_370.X_Distance_4
  );
  cout << "Objects_ID_4: " << dbcpack_B.CAN_370.Objects_ID_4 << endl;
  cout << "Objects_Object_Class_4: " << dbcpack_B.CAN_370.Objects_Object_Class_4 << endl;
  cout << "X_Distance_4: " << dbcpack_B.CAN_370.X_Distance_4 << endl;
}
void can372_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack372 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack372, id, 8);
  dbcpack_CAN_372(dbcpack_B.CANPack372, &dbcpack_B.CAN_372, (rtP_CAN_372_dbcpack *)&dbcpack_P.CAN_372);
  updateInfo1(&shared->canWriteCan372Msg, &shared->canReadCan372Msg, &shared->y_Distance_4, dbcpack_B.CAN_372.Y_Distance_4);
  cout << "Y_Distance_4: " << dbcpack_B.CAN_372.Y_Distance_4 << endl;
}
void can380_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack380 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack380, id, 8);
  dbcpack_CAN_380(dbcpack_B.CANPack380, &dbcpack_B.CAN_380, (rtP_CAN_380_dbcpack *)&dbcpack_P.CAN_380);
  updateInfo3(&shared->canWriteCan380Msg, &shared->canReadCan380Msg, &shared->objects_ID_5, dbcpack_B.CAN_380.Objects_ID_5,
    &shared->objects_Object_Class_5, dbcpack_B.CAN_380.Objects_Object_Class_5,
    &shared->x_Distance_5, dbcpack_B.CAN_380.X_Distance_5
  );
  cout << "Objects_ID_5: " << dbcpack_B.CAN_380.Objects_ID_5 << endl;
  cout << "Objects_Object_Class_5: " << dbcpack_B.CAN_380.Objects_Object_Class_5 << endl;
  cout << "X_Distance_5: " << dbcpack_B.CAN_380.X_Distance_5 << endl;
}
void can382_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack382 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack382, id, 8);
  dbcpack_CAN_382(dbcpack_B.CANPack382, &dbcpack_B.CAN_382, (rtP_CAN_382_dbcpack *)&dbcpack_P.CAN_382);
  updateInfo1(&shared->canWriteCan382Msg, &shared->canReadCan382Msg, &shared->y_Distance_5, dbcpack_B.CAN_382.Y_Distance_5);
  cout << "Y_Distance_5: " << dbcpack_B.CAN_382.Y_Distance_5 << endl;
}

void can600_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack600 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack600, id, 8);
  dbcpack_CAN_600(dbcpack_B.CANPack600, &dbcpack_B.CAN_600, (rtP_CAN_600_dbcpack *)&dbcpack_P.CAN_600);
  updateInfo2(&shared->canWriteCan600Msg, &shared->canReadCan600Msg, &shared->steerAngle, dbcpack_B.CAN_600.SteerAngle,
     &shared->vehicleSpeed, dbcpack_B.CAN_600.VehicleSpeed
  );
  cout << "SteerAngle: " << dbcpack_B.CAN_600.SteerAngle << endl;
  cout << "VehicleSpeed: " << dbcpack_B.CAN_600.VehicleSpeed << endl;
}

void can650_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack650 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack650, id, 6);
  dbcpack_CAN_650(dbcpack_B.CANPack650, &dbcpack_B.CAN_650, (rtP_CAN_650_dbcpack *)&dbcpack_P.CAN_650);
  updateInfo3(&shared->canWriteCan650Msg, &shared->canReadCan650Msg, &shared->l0_Location, dbcpack_B.CAN_650.L0_Location,
    &shared->l0_MarkType, dbcpack_B.CAN_650.L0_MarkType,
    &shared->l0_Quality, dbcpack_B.CAN_650.L0_Quality
  );
  cout << "L0_Location: " << dbcpack_B.CAN_650.L0_Location << endl;
  cout << "L0_MarkType: " << dbcpack_B.CAN_650.L0_MarkType << endl;
  cout << "L0_Quality: " << dbcpack_B.CAN_650.L0_Quality << endl;
}
void can651_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack651 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack651, id, 6);
  dbcpack_CAN_651(dbcpack_B.CANPack651, &dbcpack_B.CAN_651, (rtP_CAN_651_dbcpack *)&dbcpack_P.CAN_651);
  updateInfo3(&shared->canWriteCan651Msg, &shared->canReadCan651Msg, &shared->l0_Curvature, dbcpack_B.CAN_651.L0_Curvature,
    &shared->l0_Heading_Angle, dbcpack_B.CAN_651.L0_Heading_Angle,
    &shared->l0_Position, dbcpack_B.CAN_651.L0_Position
  );
  cout << "L0_Curvature: " << dbcpack_B.CAN_651.L0_Curvature << endl;
  cout << "L0_Heading_Angle: " << dbcpack_B.CAN_651.L0_Heading_Angle << endl;
  cout << "L0_Position: " << dbcpack_B.CAN_651.L0_Position << endl;
}
void can652_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack652 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack652, id, 5);
  dbcpack_CAN_652(dbcpack_B.CANPack652, &dbcpack_B.CAN_652, (rtP_CAN_652_dbcpack *)&dbcpack_P.CAN_652);
  updateInfo2(&shared->canWriteCan652Msg, &shared->canReadCan652Msg, &shared->l0_Curvature_Driv, dbcpack_B.CAN_652.L0_Curvature_Driv,
    &shared->l0_Mark_Color, dbcpack_B.CAN_652.L0_Mark_Color
  );
  cout << "L0_Curvature_Driv: " << dbcpack_B.CAN_652.L0_Curvature_Driv << endl;
  cout << "L0_Mark_Color: " << dbcpack_B.CAN_652.L0_Mark_Color << endl;
}
void can653_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack653 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack653, id, 6);
  dbcpack_CAN_653(dbcpack_B.CANPack653, &dbcpack_B.CAN_653, (rtP_CAN_653_dbcpack *)&dbcpack_P.CAN_653);
  updateInfo3(&shared->canWriteCan653Msg, &shared->canReadCan653Msg, &shared->l1_Location, dbcpack_B.CAN_653.L1_Location,
    &shared->l1_MarkType, dbcpack_B.CAN_653.L1_MarkType,
    &shared->l1_Quality, dbcpack_B.CAN_653.L1_Quality
  );
  cout << "L1_Location: " << dbcpack_B.CAN_653.L1_Location << endl;
  cout << "L1_MarkType: " << dbcpack_B.CAN_653.L1_MarkType << endl;
  cout << "L1_Quality: " << dbcpack_B.CAN_653.L1_Quality << endl;
}
void can654_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack654 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack654, id, 6);
  dbcpack_CAN_654(dbcpack_B.CANPack654, &dbcpack_B.CAN_654, (rtP_CAN_654_dbcpack *)&dbcpack_P.CAN_654);
  updateInfo3(&shared->canWriteCan654Msg, &shared->canReadCan654Msg, &shared->l1_Curvature, dbcpack_B.CAN_654.L1_Curvature,
    &shared->l1_Heading_Angle, dbcpack_B.CAN_654.L1_Heading_Angle,
    &shared->l1_Position, dbcpack_B.CAN_654.L1_Position
  );
  cout << "L1_Curvature: " << dbcpack_B.CAN_654.L1_Curvature << endl;
  cout << "L1_Heading_Angle: " << dbcpack_B.CAN_654.L1_Heading_Angle << endl;
  cout << "L1_Position: " << dbcpack_B.CAN_654.L1_Position << endl;
}
void can655_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack655 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack655, id, 5);
  dbcpack_CAN_655(dbcpack_B.CANPack655, &dbcpack_B.CAN_655, (rtP_CAN_655_dbcpack *)&dbcpack_P.CAN_655);
  updateInfo2(&shared->canWriteCan655Msg, &shared->canReadCan655Msg, &shared->l1_Curvature_Driv, dbcpack_B.CAN_655.L1_Curvature_Driv,
    &shared->l1_Mark_Color, dbcpack_B.CAN_655.L1_Mark_Color
  );
  cout << "L1_Curvature_Driv: " << dbcpack_B.CAN_655.L1_Curvature_Driv << endl;
  cout << "L1_Mark_Color: " << dbcpack_B.CAN_655.L1_Mark_Color << endl;
}
void can656_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack656 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack656, id, 6);
  dbcpack_CAN_656(dbcpack_B.CANPack656, &dbcpack_B.CAN_656, (rtP_CAN_656_dbcpack *)&dbcpack_P.CAN_656);
  updateInfo3(&shared->canWriteCan656Msg, &shared->canReadCan656Msg, &shared->l2_Location, dbcpack_B.CAN_656.L2_Location,
    &shared->l2_MarkType, dbcpack_B.CAN_656.L2_MarkType,
    &shared->l2_Quality, dbcpack_B.CAN_656.L2_Quality
  );
  cout << "L2_Location: " << dbcpack_B.CAN_656.L2_Location << endl;
  cout << "L2_MarkType: " << dbcpack_B.CAN_656.L2_MarkType << endl;
  cout << "L2_Quality: " << dbcpack_B.CAN_656.L2_Quality << endl;
}
void can657_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack657 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack657, id, 6);
  dbcpack_CAN_657(dbcpack_B.CANPack657, &dbcpack_B.CAN_657, (rtP_CAN_657_dbcpack *)&dbcpack_P.CAN_657);
  updateInfo3(&shared->canWriteCan657Msg, &shared->canReadCan657Msg, &shared->l2_Curvature, dbcpack_B.CAN_657.L2_Curvature,
    &shared->l2_Heading_Angle, dbcpack_B.CAN_657.L2_Heading_Angle,
    &shared->l2_Position, dbcpack_B.CAN_657.L2_Position
  );
  cout << "L2_Curvature: " << dbcpack_B.CAN_657.L2_Curvature << endl;
  cout << "L2_Heading_Angle: " << dbcpack_B.CAN_657.L2_Heading_Angle << endl;
  cout << "L2_Position: " << dbcpack_B.CAN_657.L2_Position << endl;
}
void can658_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack658 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack658, id, 5);
  dbcpack_CAN_658(dbcpack_B.CANPack658, &dbcpack_B.CAN_658, (rtP_CAN_658_dbcpack *)&dbcpack_P.CAN_658);
  updateInfo2(&shared->canWriteCan658Msg, &shared->canReadCan658Msg, &shared->l2_Curvature_Driv, dbcpack_B.CAN_658.L2_Curvature_Driv,
    &shared->l2_Mark_Color, dbcpack_B.CAN_658.L2_Mark_Color
  );
  cout << "L2_Curvature_Driv: " << dbcpack_B.CAN_658.L2_Curvature_Driv << endl;
  cout << "L2_Mark_Color: " << dbcpack_B.CAN_658.L2_Mark_Color << endl;
}
void can659_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack659 = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack659, id, 6);
  dbcpack_CAN_659(dbcpack_B.CANPack659, &dbcpack_B.CAN_659, (rtP_CAN_659_dbcpack *)&dbcpack_P.CAN_659);
  updateInfo3(&shared->canWriteCan659Msg, &shared->canReadCan659Msg, &shared->l3_Location, dbcpack_B.CAN_659.L3_Location,
    &shared->l3_MarkType, dbcpack_B.CAN_659.L3_MarkType,
    &shared->l3_Quality, dbcpack_B.CAN_659.L3_Quality
  );
  cout << "L3_Location: " << dbcpack_B.CAN_659.L3_Location << endl;
  cout << "L3_MarkType: " << dbcpack_B.CAN_659.L3_MarkType << endl;
  cout << "L3_Quality: " << dbcpack_B.CAN_659.L3_Quality << endl;
}

void can65A_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack65A = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack65A, id, 6);
  dbcpack_CAN_65A(dbcpack_B.CANPack65A, &dbcpack_B.CAN_65A, (rtP_CAN_65A_dbcpack *)&dbcpack_P.CAN_65A);
  updateInfo3(&shared->canWriteCan65AMsg, &shared->canReadCan65AMsg, &shared->l3_Curvature, dbcpack_B.CAN_65A.L3_Curvature,
    &shared->l3_Heading_Angle, dbcpack_B.CAN_65A.L3_Heading_Angle,
    &shared->l3_Position, dbcpack_B.CAN_65A.L3_Position
  );
  cout << "L3_Curvature: " << dbcpack_B.CAN_65A.L3_Curvature << endl;
  cout << "L3_Heading_Angle: " << dbcpack_B.CAN_65A.L3_Heading_Angle << endl;
  cout << "L3_Position: " << dbcpack_B.CAN_65A.L3_Position << endl;
}
void can65B_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared){
  dbcpack_B.CANPack65B = canMsgUpdateToCanpack(dlc, msg, dbcpack_B.CANPack65B, id, 5);
  dbcpack_CAN_65B(dbcpack_B.CANPack65B, &dbcpack_B.CAN_65B, (rtP_CAN_65B_dbcpack *)&dbcpack_P.CAN_65B);
  updateInfo2(&shared->canWriteCan65BMsg, &shared->canReadCan65BMsg, &shared->l3_Curvature_Driv, dbcpack_B.CAN_65B.L3_Curvature_Driv,
    &shared->l3_Mark_Color, dbcpack_B.CAN_65B.L3_Mark_Color
  );
  cout << "L3_Curvature_Driv: " << dbcpack_B.CAN_65B.L3_Curvature_Driv << endl;
  cout << "L3_Mark_Color: " << dbcpack_B.CAN_65B.L3_Mark_Color << endl;
}
