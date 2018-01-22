//the structure of the sharedInfo in the memory

#ifndef SharedInfo_
#define SharedInfo_
#define NAME_SIZE 120

struct SharedInfo{
	int canWriteNaviInfo; //flag: whether write action is available to naviInfo
	int canReadNaviInfo; //flag: whether read action is available to naviInfo
	int iconType; // naviinfo
	int totalRetainDistance; // naviinfo
	int totalRetainTime; // naviinfo
	int currentStepRetainDistance; // naviinfo
	int currentStepRetainTime; // naviinfo
	char currentRoadName[NAME_SIZE]; // naviinfo
	char nextRoadName[NAME_SIZE]; // naviinfo

	int canWriteCan330Msg;
	int canReadCan330Msg;
	double objects_ID_0;
	double objects_Object_Class_0;
	double x_Distance_0;

	int canWriteCan332Msg;
	int canReadCan332Msg;
	double y_Distance_0;

	int canWriteCan340Msg;
	int canReadCan340Msg;
	double objects_ID_1;
	double objects_Object_Class_1;
	double x_Distance_1;

	int canWriteCan342Msg;
	int canReadCan342Msg;
	double y_Distance_1;

	int canWriteCan350Msg;
	int canReadCan350Msg;
	double objects_ID_2;
	double objects_Object_Class_2;
	double x_Distance_2;

	int canWriteCan352Msg;
	int canReadCan352Msg;
	double y_Distance_2;

	int canWriteCan360Msg;
	int canReadCan360Msg;
	double objects_ID_3;
	double objects_Object_Class_3;
	double x_Distance_3;

	int canWriteCan362Msg;
	int canReadCan362Msg;
	double y_Distance_3;

	int canWriteCan370Msg;
	int canReadCan370Msg;
	double objects_ID_4;
	double objects_Object_Class_4;
	double x_Distance_4;

	int canWriteCan372Msg;
	int canReadCan372Msg;
	double y_Distance_4;

	int canWriteCan380Msg;
	int canReadCan380Msg;
	double objects_ID_5;
	double objects_Object_Class_5;
	double x_Distance_5;

	int canWriteCan382Msg;
	int canReadCan382Msg;
	double y_Distance_5;

	int canWriteCan600Msg;
	int canReadCan600Msg;
	double steerAngle;
	double vehicleSpeed;

	int canWriteCan650Msg;
	int canReadCan650Msg;
	double l0_Location;
	double l0_MarkType;
	double l0_Quality;

	int canWriteCan651Msg;
	int canReadCan651Msg;
	double l0_Curvature;
	double l0_Heading_Angle;
	double l0_Position;

	int canWriteCan652Msg;
	int canReadCan652Msg;
	double l0_Curvature_Driv;
	double l0_Mark_Color;

	int canWriteCan653Msg;
	int canReadCan653Msg;
	double l1_Location;
	double l1_MarkType;
	double l1_Quality;

	int canWriteCan654Msg;
	int canReadCan654Msg;
	double l1_Curvature;
	double l1_Heading_Angle;
	double l1_Position;

	int canWriteCan655Msg;
	int canReadCan655Msg;
	double l1_Curvature_Driv;
	double l1_Mark_Color;

	int canWriteCan656Msg;
	int canReadCan656Msg;
	double l2_Location;
	double l2_MarkType;
	double l2_Quality;

	int canWriteCan657Msg;
	int canReadCan657Msg;
	double l2_Curvature;
	double l2_Heading_Angle;
	double l2_Position;

	int canWriteCan658Msg;
	int canReadCan658Msg;
	double l2_Curvature_Driv;
	double l2_Mark_Color;

	int canWriteCan659Msg;
	int canReadCan659Msg;
	double l3_Location;
	double l3_MarkType;
	double l3_Quality;

	int canWriteCan65AMsg;
	int canReadCan65AMsg;
	double l3_Curvature;
	double l3_Heading_Angle;
	double l3_Position;

	int canWriteCan65BMsg;
	int canReadCan65BMsg;
	double l3_Curvature_Driv;
	double l3_Mark_Color;
//2017.12.27///
	int canWriteCan200Msg;
	int canReadCan200Msg;
	double l8_BrakePedal;
	double l8_Collsn_warning_ID;
	double l8_Collsn_warning_state;
	double l8_Control_Type;
	double l8_DrivePedal;
	double l8_GearPRND;
	double l8_TargetPathState;
	double l8_TurnLamp;
};
#endif
