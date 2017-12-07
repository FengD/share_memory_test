#include "readClient.cpp"

using namespace std;


int main()
{
    ReadSharedMemory *r = NULL;
    try
    {
      r = new ReadSharedMemory;
      cout << "iconType:" << r->getIconType() << endl;
      cout <<  "getCurrentRoadName:" << r->getCurrentRoadName() << endl;
      cout << "getTotalRetainDistance:" << r->getTotalRetainDistance() << endl;
      cout <<  "getTotalRetainTime:" << r->getTotalRetainTime() << endl;
      cout << "getCurrentStepRetainDistance:" << r->getCurrentStepRetainDistance() << endl;
      cout <<  "getCurrentStepRetainTime:" << r->getCurrentStepRetainTime() << endl;

      cout <<  "objects_ID_0:" << r->getObjects_ID_0() << endl;
      cout <<  "objects_Object_Class_0:" << r->getObjects_Object_Class_0() << endl;
      cout <<  "x_Distance_0:" << r->getX_Distance_0() << endl;
      cout <<  "y_Distance_0:" << r->getY_Distance_0() << endl;

      cout <<  "objects_ID_1:" << r->getObjects_ID_1() << endl;
      cout <<  "objects_Object_Class_0:" << r->getObjects_Object_Class_1() << endl;
      cout <<  "x_Distance_1:" << r->getX_Distance_1() << endl;
      cout <<  "y_Distance_1:" << r->getY_Distance_1() << endl;

      cout <<  "objects_ID_2:" << r->getObjects_ID_2() << endl;
      cout <<  "objects_Object_Class_2:" << r->getObjects_Object_Class_2() << endl;
      cout <<  "x_Distance_2:" << r->getX_Distance_2() << endl;
      cout <<  "y_Distance_2:" << r->getY_Distance_2() << endl;

      cout <<  "objects_ID_3:" << r->getObjects_ID_3() << endl;
      cout <<  "objects_Object_Class_3:" << r->getObjects_Object_Class_3() << endl;
      cout <<  "x_Distance_3:" << r->getX_Distance_3() << endl;
      cout <<  "y_Distance_3:" << r->getY_Distance_3() << endl;

      cout <<  "objects_ID_4:" << r->getObjects_ID_4() << endl;
      cout <<  "objects_Object_Class_4:" << r->getObjects_Object_Class_4() << endl;
      cout <<  "x_Distance_4:" << r->getX_Distance_4() << endl;
      cout <<  "y_Distance_4:" << r->getY_Distance_4() << endl;

      cout <<  "objects_ID_5:" << r->getObjects_ID_5() << endl;
      cout <<  "objects_Object_Class_5:" << r->getObjects_Object_Class_5() << endl;
      cout <<  "x_Distance_5:" << r->getX_Distance_5() << endl;
      cout <<  "y_Distance_5:" << r->getY_Distance_5() << endl;

      cout <<  "getVehicleSpeed:" << r->getVehicleSpeed() << endl;
      cout <<  "getSteerAngle:" << r->getSteerAngle() << endl;

      cout <<  "l0_Location:" << r->getL0_Location() << endl;
      cout <<  "l0_MarkType:" << r->getL0_MarkType() << endl;
      cout <<  "l0_Quality:" << r->getL0_Quality() << endl;
      cout <<  "l0_Curvature:" << r->getL0_Curvature() << endl;
      cout <<  "l0_Heading_Angle:" << r->getL0_Heading_Angle() << endl;
      cout <<  "l0_Position:" << r->getL0_Position() << endl;
      cout <<  "l0_Curvature_Driv:" << r->getL0_Curvature_Driv() << endl;
      cout <<  "l0_Mark_Color:" << r->getL0_Mark_Color() << endl;

      cout <<  "l1_Location:" << r->getL1_Location() << endl;
      cout <<  "l1_MarkType:" << r->getL1_MarkType() << endl;
      cout <<  "l1_Quality:" << r->getL1_Quality() << endl;
      cout <<  "l1_Curvature:" << r->getL1_Curvature() << endl;
      cout <<  "l1_Heading_Angle:" << r->getL1_Heading_Angle() << endl;
      cout <<  "l1_Position:" << r->getL1_Position() << endl;
      cout <<  "l1_Curvature_Driv:" << r->getL1_Curvature_Driv() << endl;
      cout <<  "l1_Mark_Color:" << r->getL1_Mark_Color() << endl;

      cout <<  "l2_Location:" << r->getL2_Location() << endl;
      cout <<  "l2_MarkType:" << r->getL2_MarkType() << endl;
      cout <<  "l2_Quality:" << r->getL2_Quality() << endl;
      cout <<  "l2_Curvature:" << r->getL2_Curvature() << endl;
      cout <<  "l2_Heading_Angle:" << r->getL2_Heading_Angle() << endl;
      cout <<  "l2_Position:" << r->getL2_Position() << endl;
      cout <<  "l2_Curvature_Driv:" << r->getL2_Curvature_Driv() << endl;
      cout <<  "l2_Mark_Color:" << r->getL2_Mark_Color() << endl;

      cout <<  "l3_Location:" << r->getL3_Location() << endl;
      cout <<  "l3_MarkType:" << r->getL3_MarkType() << endl;
      cout <<  "l3_Quality:" << r->getL3_Quality() << endl;
      cout <<  "l3_Curvature:" << r->getL3_Curvature() << endl;
      cout <<  "l3_Heading_Angle:" << r->getL3_Heading_Angle() << endl;
      cout <<  "l3_Position:" << r->getL3_Position() << endl;
      cout <<  "l3_Curvature_Driv:" << r->getL3_Curvature_Driv() << endl;
      cout <<  "l3_Mark_Color:" << r->getL3_Mark_Color() << endl;

    }
    catch(char const*str)
    {
        cout << str <<endl;
    }
    catch(...)
    {
        cout<<"universal"<<endl;
    }
    delete r;
    return 0;
}
