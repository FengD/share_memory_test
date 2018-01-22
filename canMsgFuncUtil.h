//The head file of the canMsgFunctionUtil.cpp

#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "sharedStruct.h"
#include "dbcpack_ert_rtw/dbcpack.h"

void updateInfo1(int *writeFlag, int *readFlag, double *target, double source);
void updateInfo2(int *writeFlag, int *readFlag, double *target1, double source1, double *target2, double source2);
void updateInfo3(int *writeFlag, int *readFlag, double *target1, double source1, double *target2, double source2, double *target3, double source3);
//2017.12.27/////
void updateInfo8(int *writeFlag, int *readFlag, double *target1, double source1, double *target2, double source2, double *target3, double source3, double *target4, double source4, double *target5, double source5, double *target6, double source6, double *target7, double source7, double *target8, double source8);
void canMsgSwitch(long id, unsigned int dlc, unsigned char *msg, struct SharedInfo *shared);
CAN_MESSAGE canMsgUpdateToCanpack(unsigned int dlc, unsigned char *msg, CAN_MESSAGE canMsg, long id, unsigned int canMsgLength);

void can200_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);//2017.12.27//
void can212_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can330_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can332_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can340_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can342_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can350_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can352_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can360_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can362_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can370_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can372_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can380_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can382_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can390_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can392_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can3A0_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can3A2_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can3B0_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can3B2_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can3C0_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can3C2_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can450_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can4A0_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can600_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can611_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can650_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can651_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can652_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can653_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can654_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can655_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can656_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can657_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can658_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can659_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can65A_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can65B_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
void can661_MsgTransform(unsigned int dlc, unsigned char *msg, BlockIO_dbcpack dbcpack_B, long id, struct SharedInfo *shared);
