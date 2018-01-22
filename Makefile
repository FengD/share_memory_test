CC = gcc
CXX = g++
CFLAGS = -pipe -g -Wall -Wextra -Werror -O2  -D_REENTRANT
CXXFLAGS = -pipe -g -Wall -W -D_REENTRANT
LDFLAGS = -L..
LDLIBS = -lcanlib -lpthread
STD11 = -std=c++11

server: main.cpp \
	 server.cpp \
	 sharedStruct.h \
	 naviInfo.h \
	 server.h \
	 canMsgFuncUtil.h \
	 dbcpack_ert_rtw/dbcpack.h \
	 dbcpack_ert_rtw/rtwtypes.h \
	 dbcpack_ert_rtw/can_message.h \
	 dbcpack_ert_rtw/dbcpack_types.h \
	 dbcpack_ert_rtw/CAN_200.h \
	 dbcpack_ert_rtw/CAN_330.h \
	 dbcpack_ert_rtw/CAN_332.h \
	 dbcpack_ert_rtw/CAN_340.h \
	 dbcpack_ert_rtw/CAN_342.h \
	 dbcpack_ert_rtw/CAN_350.h \
	 dbcpack_ert_rtw/CAN_352.h \
	 dbcpack_ert_rtw/CAN_360.h \
	 dbcpack_ert_rtw/CAN_362.h \
	 dbcpack_ert_rtw/CAN_370.h \
	 dbcpack_ert_rtw/CAN_372.h \
	 dbcpack_ert_rtw/CAN_380.h \
	 dbcpack_ert_rtw/CAN_382.h \
	 dbcpack_ert_rtw/CAN_600.h \
	 dbcpack_ert_rtw/CAN_650.h \
	 dbcpack_ert_rtw/CAN_651.h \
	 dbcpack_ert_rtw/CAN_652.h \
	 dbcpack_ert_rtw/CAN_653.h \
	 dbcpack_ert_rtw/CAN_654.h \
	 dbcpack_ert_rtw/CAN_655.h \
	 dbcpack_ert_rtw/CAN_656.h \
	 dbcpack_ert_rtw/CAN_657.h \
	 dbcpack_ert_rtw/CAN_658.h \
	 dbcpack_ert_rtw/CAN_659.h \
	 dbcpack_ert_rtw/CAN_65A.h \
	 dbcpack_ert_rtw/CAN_65B.h
		${CXX} -o server.out \
			main.cpp \
			server.cpp \
			canMsgFuncUtil.cpp \
			dbcpack_ert_rtw/dbcpack_data.cpp \
			dbcpack_ert_rtw/CAN_200.cpp \
			dbcpack_ert_rtw/CAN_330.cpp \
			dbcpack_ert_rtw/CAN_332.cpp \
			dbcpack_ert_rtw/CAN_340.cpp \
			dbcpack_ert_rtw/CAN_342.cpp \
			dbcpack_ert_rtw/CAN_350.cpp \
			dbcpack_ert_rtw/CAN_352.cpp \
			dbcpack_ert_rtw/CAN_360.cpp \
			dbcpack_ert_rtw/CAN_362.cpp \
			dbcpack_ert_rtw/CAN_370.cpp \
			dbcpack_ert_rtw/CAN_372.cpp \
			dbcpack_ert_rtw/CAN_380.cpp \
			dbcpack_ert_rtw/CAN_382.cpp \
			dbcpack_ert_rtw/CAN_600.cpp \
			dbcpack_ert_rtw/CAN_650.cpp \
			dbcpack_ert_rtw/CAN_651.cpp \
			dbcpack_ert_rtw/CAN_652.cpp \
			dbcpack_ert_rtw/CAN_653.cpp \
			dbcpack_ert_rtw/CAN_654.cpp \
			dbcpack_ert_rtw/CAN_655.cpp \
			dbcpack_ert_rtw/CAN_656.cpp \
			dbcpack_ert_rtw/CAN_657.cpp \
			dbcpack_ert_rtw/CAN_658.cpp \
			dbcpack_ert_rtw/CAN_659.cpp \
			dbcpack_ert_rtw/CAN_65A.cpp \
			dbcpack_ert_rtw/CAN_65B.cpp ${STD11} ${LDLIBS}

readShareMemory: readClient.cpp readClientMain.cpp sharedStruct.h
				${CXX} -o accepter.out readClient.cpp readClientMain.cpp ${STD11} ${LDLIBS}


clean:
	rm -f $(OBJS) *.out *~
