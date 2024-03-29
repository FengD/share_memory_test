/**
  This class is the API to get the information in the shared memory.
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/shm.h>
#include <string.h>
#include <iostream>
#include "sharedStruct.h"

using namespace std;

class ReadSharedMemory{

  private:

    void *shm;//分配的共享内存的原始首地址
    struct SharedInfo *shared;//指向shm
    int shmid;//共享内存标识符

  public:

    //constructor
    ReadSharedMemory(){
        shm = NULL;
        //创建共享内存
        shmid = shmget((key_t)6668, sizeof(struct SharedInfo), 0666|IPC_CREAT);
        if(shmid == -1)
        {
            throw("shmget failed");
        }
        //将共享内存连接到当前进程的地址空间
        shm = shmat(shmid, 0, 0);
        if(shm == (void*)-1)
        {
            throw("shmat failed");
        }
        //设置共享内存
        shared = (struct SharedInfo*)shm;
    }

    //destructor
    ~ReadSharedMemory(){
        cout << "ReadSharedMemory destructor" << endl;//destructor
        //把共享内存从当前进程中分离
        if(shmdt(shm) == -1)
        {
            fprintf(stderr, "shmdt failed\n");
            exit(EXIT_FAILURE);
        }
        exit(EXIT_SUCCESS);
    }

//all the getXXX could be used to get the data correspondent

    int getIconType(){
      if(shared->canReadNaviInfo == 1) {
        int iconType;
        shared->canWriteNaviInfo = 0;
        iconType = shared->iconType;
        shared->canWriteNaviInfo = 1;
        return iconType;
      } else {
        // return getIconType();
        return shared->iconType;
      }
    }

    int getTotalRetainDistance(){
      if(shared->canReadNaviInfo == 1) {
        int totalRetainDistance;
        shared->canWriteNaviInfo = 0;
        totalRetainDistance = shared->totalRetainDistance;
        shared->canWriteNaviInfo = 1;
        return totalRetainDistance;
      } else {
        // return getTotalRetainDistance();
        return shared->totalRetainDistance;
      }
    }

    int getTotalRetainTime(){
      if(shared->canReadNaviInfo == 1) {
        int totalRetainTime;
        shared->canWriteNaviInfo = 0;
        totalRetainTime = shared->totalRetainTime;
        shared->canWriteNaviInfo = 1;
        return totalRetainTime;
      } else {
        // return getTotalRetainTime();
        return shared->totalRetainTime;
      }
    }

    int getCurrentStepRetainDistance(){
      if(shared->canReadNaviInfo == 1) {
        int currentStepRetainDistance;
        shared->canWriteNaviInfo = 0;
        currentStepRetainDistance = shared->currentStepRetainDistance;
        shared->canWriteNaviInfo = 1;
        return currentStepRetainDistance;
      } else {
        // return getCurrentStepRetainDistance();
        return shared->currentStepRetainDistance;
      }
    }

    int getCurrentStepRetainTime(){
      if(shared->canReadNaviInfo == 1) {
        int currentStepRetainTime;
        shared->canWriteNaviInfo = 0;
        currentStepRetainTime = shared->currentStepRetainTime;
        shared->canWriteNaviInfo = 1;
        return currentStepRetainTime;
      } else {
        // return getCurrentStepRetainTime();
        return shared->currentStepRetainTime;
      }
    }

    char* getCurrentRoadName(){
      if(shared->canReadNaviInfo == 1) {
        char* currentRoadName;
        shared->canWriteNaviInfo = 0;
        currentRoadName = shared->currentRoadName;
        shared->canWriteNaviInfo = 1;
        return currentRoadName;
      } else {
        // return getCurrentRoadName();
        return shared->currentRoadName;
      }
    }

    char* getNextRoadName(){
      if(shared->canReadNaviInfo == 1) {
        char* nextRoadName;
        shared->canWriteNaviInfo = 0;
        nextRoadName = shared->nextRoadName;
        shared->canWriteNaviInfo = 1;
        return nextRoadName;
      } else {
        // return getNextRoadName();
        return shared->nextRoadName;
      }
    }

    double getObjects_ID_0(){
      if(shared->canReadCan330Msg == 1){
        double v;
        shared->canWriteCan330Msg = 0;
        v = shared->objects_ID_0;
        shared->canWriteCan330Msg = 1;
        return v;
      } else {
        // return getObjects_ID_0();
        return shared->objects_ID_0;
      }
    }

    double getObjects_Object_Class_0(){
      if(shared->canReadCan330Msg == 1){
        double v;
        shared->canWriteCan330Msg = 0;
        v = shared->objects_Object_Class_0;
        shared->canWriteCan330Msg = 1;
        return v;
      } else {
        // return getObjects_Object_Class_0();
        return shared->objects_Object_Class_0;
      }
    }

    double getX_Distance_0(){
      if(shared->canReadCan330Msg == 1){
        double v;
        shared->canWriteCan330Msg = 0;
        v = shared->x_Distance_0;
        shared->canWriteCan330Msg = 1;
        return v;
      } else {
        // return getX_Distance_0();
        return shared->x_Distance_0;
      }
    }

    double getY_Distance_0(){
      if(shared->canReadCan332Msg == 1){
        double v;
        shared->canWriteCan332Msg = 0;
        v = shared->y_Distance_0;
        shared->canWriteCan332Msg = 1;
        return v;
      } else {
        // return getY_Distance_0();
        return shared->y_Distance_0;
      }
    }

    double getObjects_ID_1(){
      if(shared->canReadCan340Msg == 1){
        double v;
        shared->canWriteCan340Msg = 0;
        v = shared->objects_ID_1;
        shared->canWriteCan340Msg = 1;
        return v;
      } else {
        // return getObjects_ID_1();
        return shared->objects_ID_1;
      }
    }

    double getObjects_Object_Class_1(){
      if(shared->canReadCan340Msg == 1){
        double v;
        shared->canWriteCan340Msg = 0;
        v = shared->objects_Object_Class_1;
        shared->canWriteCan340Msg = 1;
        return v;
      } else {
        // return getObjects_Object_Class_1();
        return shared->objects_Object_Class_1;
      }
    }

    double getX_Distance_1(){
      if(shared->canReadCan340Msg == 1){
        double v;
        shared->canWriteCan340Msg = 0;
        v = shared->x_Distance_1;
        shared->canWriteCan340Msg = 1;
        return v;
      } else {
        // return getX_Distance_1();
        return shared->x_Distance_1;
      }
    }

    double getY_Distance_1(){
      if(shared->canReadCan342Msg == 1){
        double v;
        shared->canWriteCan342Msg = 0;
        v = shared->y_Distance_1;
        shared->canWriteCan342Msg = 1;
        return v;
      } else {
        // return getY_Distance_1();
        return shared->y_Distance_1;
      }
    }

    double getObjects_ID_2(){
      if(shared->canReadCan350Msg == 1){
        double v;
        shared->canWriteCan350Msg = 0;
        v = shared->objects_ID_2;
        shared->canWriteCan350Msg = 1;
        return v;
      } else {
        // return getObjects_ID_2();
        return shared->objects_ID_2;
      }
    }

    double getObjects_Object_Class_2(){
      if(shared->canReadCan350Msg == 1){
        double v;
        shared->canWriteCan350Msg = 0;
        v = shared->objects_Object_Class_2;
        shared->canWriteCan350Msg = 1;
        return v;
      } else {
        // return getObjects_Object_Class_2();
        return shared->objects_Object_Class_2;
      }
    }

    double getX_Distance_2(){
      if(shared->canReadCan350Msg == 1){
        double v;
        shared->canWriteCan350Msg = 0;
        v = shared->x_Distance_2;
        shared->canWriteCan350Msg = 1;
        return v;
      } else {
        // return getX_Distance_2();
        return shared->x_Distance_2;
      }
    }

    double getY_Distance_2(){
      if(shared->canReadCan352Msg == 1){
        double v;
        shared->canWriteCan352Msg = 0;
        v = shared->y_Distance_2;
        shared->canWriteCan352Msg = 1;
        return v;
      } else {
        // return getY_Distance_2();
        return shared->y_Distance_2;
      }
    }

    double getObjects_ID_3(){
      if(shared->canReadCan360Msg == 1){
        double v;
        shared->canWriteCan360Msg = 0;
        v = shared->objects_ID_3;
        shared->canWriteCan360Msg = 1;
        return v;
      } else {
        // return getObjects_ID_3();
        return shared->objects_ID_3;
      }
    }

    double getObjects_Object_Class_3(){
      if(shared->canReadCan360Msg == 1){
        double v;
        shared->canWriteCan360Msg = 0;
        v = shared->objects_Object_Class_3;
        shared->canWriteCan360Msg = 1;
        return v;
      } else {
        // return getObjects_Object_Class_3();
        return shared->objects_Object_Class_3;
      }
    }

    double getX_Distance_3(){
      if(shared->canReadCan360Msg == 1){
        double v;
        shared->canWriteCan360Msg = 0;
        v = shared->x_Distance_3;
        shared->canWriteCan360Msg = 1;
        return v;
      } else {
        // return getX_Distance_3();
        return shared->x_Distance_3;
      }
    }

    double getY_Distance_3(){
      if(shared->canReadCan362Msg == 1){
        double v;
        shared->canWriteCan362Msg = 0;
        v = shared->y_Distance_3;
        shared->canWriteCan362Msg = 1;
        return v;
      } else {
        // return getY_Distance_3();
        return shared->y_Distance_3;
      }
    }

    double getObjects_ID_4(){
      if(shared->canReadCan370Msg == 1){
        double v;
        shared->canWriteCan370Msg = 0;
        v = shared->objects_ID_4;
        shared->canWriteCan370Msg = 1;
        return v;
      } else {
        // return getObjects_ID_4();
        return shared->objects_ID_4;
      }
    }

    double getObjects_Object_Class_4(){
      if(shared->canReadCan370Msg == 1){
        double v;
        shared->canWriteCan370Msg = 0;
        v = shared->objects_Object_Class_4;
        shared->canWriteCan370Msg = 1;
        return v;
      } else {
        // return getObjects_Object_Class_4();
        return shared->objects_Object_Class_4;
      }
    }

    double getX_Distance_4(){
      if(shared->canReadCan370Msg == 1){
        double v;
        shared->canWriteCan370Msg = 0;
        v = shared->x_Distance_4;
        shared->canWriteCan370Msg = 1;
        return v;
      } else {
        // return getX_Distance_4();
        return shared->x_Distance_4;
      }
    }

    double getY_Distance_4(){
      if(shared->canReadCan372Msg == 1){
        double v;
        shared->canWriteCan372Msg = 0;
        v = shared->y_Distance_4;
        shared->canWriteCan372Msg = 1;
        return v;
      } else {
        // return getY_Distance_4();
        return shared->y_Distance_4;
      }
    }

    double getObjects_ID_5(){
      if(shared->canReadCan380Msg == 1){
        double v;
        shared->canWriteCan380Msg = 0;
        v = shared->objects_ID_5;
        shared->canWriteCan380Msg = 1;
        return v;
      } else {
        // return getObjects_ID_5();
        return shared->objects_ID_5;
      }
    }

    double getObjects_Object_Class_5(){
      if(shared->canReadCan380Msg == 1){
        double v;
        shared->canWriteCan380Msg = 0;
        v = shared->objects_Object_Class_5;
        shared->canWriteCan380Msg = 1;
        return v;
      } else {
        // return getObjects_Object_Class_5();
        return shared->objects_Object_Class_5;
      }
    }

    double getX_Distance_5(){
      if(shared->canReadCan380Msg == 1){
        double v;
        shared->canWriteCan380Msg = 0;
        v = shared->x_Distance_5;
        shared->canWriteCan380Msg = 1;
        return v;
      } else {
        // return getX_Distance_5();
        return shared->x_Distance_5;
      }
    }

    double getY_Distance_5(){
      if(shared->canReadCan382Msg == 1){
        double v;
        shared->canWriteCan382Msg = 0;
        v = shared->y_Distance_5;
        shared->canWriteCan382Msg = 1;
        return v;
      } else {
        // return getX_Distance_5();
        return shared->y_Distance_5;
      }
    }

    double getSteerAngle(){
      if(shared->canReadCan600Msg == 1){
        double v;
        shared->canWriteCan600Msg = 0;
        v = shared->steerAngle;
        shared->canWriteCan600Msg = 1;
        return v;
      } else {
        // return getSteerAngle();
        return shared->steerAngle;
      }
    }

    double getVehicleSpeed(){
      if(shared->canReadCan600Msg == 1){
        double v;
        shared->canWriteCan600Msg = 0;
        v = shared->vehicleSpeed;
        shared->canWriteCan600Msg = 1;
        return v;
      } else {
        // return getVehicleSpeed();
        return shared->vehicleSpeed;
      }
    }

    double getL0_Location(){
      if(shared->canReadCan650Msg == 1){
        double v;
        shared->canWriteCan650Msg = 0;
        v = shared->l0_Location;
        shared->canWriteCan650Msg = 1;
        return v;
      } else {
        // return getL0_Location();
        return shared->l0_Location;
      }
    }

    double getL0_MarkType(){
      if(shared->canReadCan650Msg == 1){
        double v;
        shared->canWriteCan650Msg = 0;
        v = shared->l0_MarkType;
        shared->canWriteCan650Msg = 1;
        return v;
      } else {
        // return getL0_MarkType();
        return shared->l0_MarkType;
      }
    }

    double getL0_Quality(){
      if(shared->canReadCan650Msg == 1){
        double v;
        shared->canWriteCan650Msg = 0;
        v = shared->l0_Quality;
        shared->canWriteCan650Msg = 1;
        return v;
      } else {
        // return getL0_Quality();
        return shared->l0_Quality;
      }
    }

    double getL0_Curvature(){
      if(shared->canReadCan651Msg == 1){
        double v;
        shared->canWriteCan651Msg = 0;
        v = shared->l0_Curvature;
        shared->canWriteCan651Msg = 1;
        return v;
      } else {
        // return getL0_Curvature();
        return shared->l0_Curvature;
      }
    }

    double getL0_Heading_Angle(){
      if(shared->canReadCan651Msg == 1){
        double v;
        shared->canWriteCan651Msg = 0;
        v = shared->l0_Heading_Angle;
        shared->canWriteCan651Msg = 1;
        return v;
      } else {
        // return getL0_Heading_Angle();
        return shared->l0_Heading_Angle;
      }
    }

    double getL0_Position(){
      if(shared->canReadCan651Msg == 1){
        double v;
        shared->canWriteCan651Msg = 0;
        v = shared->l0_Position;
        shared->canWriteCan651Msg = 1;
        return v;
      } else {
        // return getL0_Position();
        return shared->l0_Position;
      }
    }

    double getL0_Curvature_Driv(){
      if(shared->canReadCan652Msg == 1){
        double v;
        shared->canWriteCan652Msg = 0;
        v = shared->l0_Curvature_Driv;
        shared->canWriteCan652Msg = 1;
        return v;
      } else {
        // return getL0_Curvature_Driv();
        return shared->l0_Curvature_Driv;
      }
    }

    double getL0_Mark_Color(){
      if(shared->canReadCan652Msg == 1){
        double v;
        shared->canWriteCan652Msg = 0;
        v = shared->l0_Mark_Color;
        shared->canWriteCan652Msg = 1;
        return v;
      } else {
        // return getL0_Mark_Color();
        return shared->l0_Mark_Color;
      }
    }

    double getL1_Location(){
      if(shared->canReadCan653Msg == 1){
        double v;
        shared->canWriteCan653Msg = 0;
        v = shared->l1_Location;
        shared->canWriteCan653Msg = 1;
        return v;
      } else {
        // return getL1_Location();
        return shared->l1_Location;
      }
    }

    double getL1_MarkType(){
      if(shared->canReadCan653Msg == 1){
        double v;
        shared->canWriteCan653Msg = 0;
        v = shared->l1_MarkType;
        shared->canWriteCan653Msg = 1;
        return v;
      } else {
        // return getL1_MarkType();
        return shared->l1_MarkType;
      }
    }

    double getL1_Quality(){
      if(shared->canReadCan653Msg == 1){
        double v;
        shared->canWriteCan653Msg = 0;
        v = shared->l1_Quality;
        shared->canWriteCan653Msg = 1;
        return v;
      } else {
        // return getL1_Quality();
        return shared->l1_Quality;
      }
    }

    double getL1_Curvature(){
      if(shared->canReadCan654Msg == 1){
        double v;
        shared->canWriteCan654Msg = 0;
        v = shared->l1_Curvature;
        shared->canWriteCan654Msg = 1;
        return v;
      } else {
        // return getL1_Curvature();
        return shared->l1_Curvature;
      }
    }

    double getL1_Heading_Angle(){
      if(shared->canReadCan654Msg == 1){
        double v;
        shared->canWriteCan654Msg = 0;
        v = shared->l1_Heading_Angle;
        shared->canWriteCan654Msg = 1;
        return v;
      } else {
        // return getL1_Heading_Angle();
        return shared->l1_Heading_Angle;
      }
    }

    double getL1_Position(){
      if(shared->canReadCan654Msg == 1){
        double v;
        shared->canWriteCan654Msg = 0;
        v = shared->l1_Position;
        shared->canWriteCan654Msg = 1;
        return v;
      } else {
        // return getL1_Position();
        return shared->l1_Position;
      }
    }

    double getL1_Curvature_Driv(){
      if(shared->canReadCan655Msg == 1){
        double v;
        shared->canWriteCan655Msg = 0;
        v = shared->l1_Curvature_Driv;
        shared->canWriteCan655Msg = 1;
        return v;
      } else {
        // return getL1_Curvature_Driv();
        return shared->l1_Curvature_Driv;
      }
    }

    double getL1_Mark_Color(){
      if(shared->canReadCan655Msg == 1){
        double v;
        shared->canWriteCan655Msg = 0;
        v = shared->l1_Mark_Color;
        shared->canWriteCan655Msg = 1;
        return v;
      } else {
        // return getL1_Mark_Color();
        return shared->l1_Mark_Color;
      }
    }

    double getL2_Location(){
      if(shared->canReadCan656Msg == 1){
        double v;
        shared->canWriteCan656Msg = 0;
        v = shared->l2_Location;
        shared->canWriteCan656Msg = 1;
        return v;
      } else {
        // return getL2_Location();
        return shared->l2_Location;
      }
    }

    double getL2_MarkType(){
      if(shared->canReadCan656Msg == 1){
        double v;
        shared->canWriteCan656Msg = 0;
        v = shared->l2_MarkType;
        shared->canWriteCan656Msg = 1;
        return v;
      } else {
        // return getL2_MarkType();
        return shared->l2_MarkType;
      }
    }

    double getL2_Quality(){
      if(shared->canReadCan656Msg == 1){
        double v;
        shared->canWriteCan656Msg = 0;
        v = shared->l2_Quality;
        shared->canWriteCan656Msg = 1;
        return v;
      } else {
        // return getL2_Quality();
        return shared->l2_Quality;
      }
    }

    double getL2_Curvature(){
      if(shared->canReadCan657Msg == 1){
        double v;
        shared->canWriteCan657Msg = 0;
        v = shared->l2_Curvature;
        shared->canWriteCan657Msg = 1;
        return v;
      } else {
        // return getL2_Curvature();
        return shared->l2_Curvature;
      }
    }

    double getL2_Heading_Angle(){
      if(shared->canReadCan657Msg == 1){
        double v;
        shared->canWriteCan657Msg = 0;
        v = shared->l2_Heading_Angle;
        shared->canWriteCan657Msg = 1;
        return v;
      } else {
        // return getL2_Heading_Angle();
        return shared->l2_Heading_Angle;
      }
    }

    double getL2_Position(){
      if(shared->canReadCan657Msg == 1){
        double v;
        shared->canWriteCan657Msg = 0;
        v = shared->l2_Position;
        shared->canWriteCan657Msg = 1;
        return v;
      } else {
        // return getL2_Position();
        return shared->l2_Position;
      }
    }

    double getL2_Curvature_Driv(){
      if(shared->canReadCan658Msg == 1){
        double v;
        shared->canWriteCan658Msg = 0;
        v = shared->l2_Curvature_Driv;
        shared->canWriteCan658Msg = 1;
        return v;
      } else {
        // return getL2_Curvature_Driv();
        return shared->l2_Curvature_Driv;
      }
    }

    double getL2_Mark_Color(){
      if(shared->canReadCan658Msg == 1){
        double v;
        shared->canWriteCan658Msg = 0;
        v = shared->l2_Mark_Color;
        shared->canWriteCan658Msg = 1;
        return v;
      } else {
        // return getL2_Mark_Color();
        return shared->l2_Mark_Color;
      }
    }

    double getL3_Location(){
      if(shared->canReadCan659Msg == 1){
        double v;
        shared->canWriteCan659Msg = 0;
        v = shared->l3_Location;
        shared->canWriteCan659Msg = 1;
        return v;
      } else {
        // return getL3_Location();
        return shared->l3_Location;
      }
    }

    double getL3_MarkType(){
      if(shared->canReadCan659Msg == 1){
        double v;
        shared->canWriteCan659Msg = 0;
        v = shared->l3_MarkType;
        shared->canWriteCan659Msg = 1;
        return v;
      } else {
        // return getL3_MarkType();
        return shared->l3_MarkType;
      }
    }

    double getL3_Quality(){
      if(shared->canReadCan659Msg == 1){
        double v;
        shared->canWriteCan659Msg = 0;
        v = shared->l3_Quality;
        shared->canWriteCan659Msg = 1;
        return v;
      } else {
        // return getL3_Quality();
        return shared->l3_Quality;
      }
    }

    double getL3_Curvature(){
      if(shared->canReadCan65AMsg == 1){
        double v;
        shared->canWriteCan65AMsg = 0;
        v = shared->l3_Curvature;
        shared->canWriteCan65AMsg = 1;
        return v;
      } else {
        // return getL3_Curvature();
        return shared->l3_Curvature;
      }
    }

    double getL3_Heading_Angle(){
      if(shared->canReadCan65AMsg == 1){
        double v;
        shared->canWriteCan65AMsg = 0;
        v = shared->l3_Heading_Angle;
        shared->canWriteCan65AMsg = 1;
        return v;
      } else {
        // return getL3_Heading_Angle();
        return shared->l3_Heading_Angle;
      }
    }

    double getL3_Position(){
      if(shared->canReadCan65AMsg == 1){
        double v;
        shared->canWriteCan65AMsg = 0;
        v = shared->l3_Position;
        shared->canWriteCan65AMsg = 1;
        return v;
      } else {
        // return getL3_Position();
        return shared->l3_Position;
      }
    }

    double getL3_Curvature_Driv(){
      if(shared->canReadCan65BMsg == 1){
        double v;
        shared->canWriteCan65BMsg = 0;
        v = shared->l3_Curvature_Driv;
        shared->canWriteCan65BMsg = 1;
        return v;
      } else {
        // return getL3_Curvature_Driv();
        return shared->l3_Curvature_Driv;
      }
    }

    double getL3_Mark_Color(){
      if(shared->canReadCan65BMsg == 1){
        double v;
        shared->canWriteCan65BMsg = 0;
        v = shared->l3_Mark_Color;
        shared->canWriteCan65BMsg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l3_Mark_Color;
      }
 double getL8_BrakePedal(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_BrakePedal;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_BrakePedal;
      }
    }
    double getL8_Collsn_warning_ID(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_Collsn_warning_ID;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_Collsn_warning_ID;
      }
    }
    double getL8_Collsn_warning_state(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_Collsn_warning_state;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_Collsn_warning_state;
      }
    }
    double getL8_Control_Type(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_Control_Type;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_Control_Type;
      }
    }
    double getL8_DrivePedal(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_DrivePedal;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_DrivePedal;
      }
    }
    double getL8_GearPRND(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_GearPRND;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_GearPRND;
      }
    }
    double getL8_TargetPathState(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_TargetPathState;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_TargetPathState;
      }
    }
    double getL8_TurnLamp(){
      if(shared->canReadCan200Msg == 1){
        double v;
        shared->canWriteCan200Msg = 0;
        v = shared->l8_TurnLamp;
        shared->canWriteCan200Msg = 1;
        return v;
      } else {
        // return getL3_Mark_Color();
        return shared->l8_TurnLamp;
      }
    }
  }
};
