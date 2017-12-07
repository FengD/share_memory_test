#include <canlib.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string>
#include <unistd.h>
#include <map>
#include <sstream>
#include <sys/types.h>
#include <cstring>
#include <cstdio>
#include <canstat.h>
#include <sys/shm.h>
#include <pthread.h>
#include "dbcpack_ert_rtw/dbcpack.h" //the package which used to transform the can message
#include "sharedStruct.h" //define the struture of the SharedInfo
#include "canMsgFuncUtil.h"
#include "naviInfo.h" //define the struture of the naviInfo

#define BACKLOG 3    //the lenght of the queue in which the element finishes three handshakes
#define CONCURRENT_MAX 4   //max number of the connections at the same time
#define SERVER_PORT 8888 //the socket server which listening at port 8888

using namespace std;

class Server{
  private:
    int client_fds[CONCURRENT_MAX];
    int client_sock_fd;
    int server_sock_fd;
    int port;
    int bind_result;

    //local address
    struct sockaddr_in server_addr;

    void *shm = NULL;
    struct SharedInfo *shared = NULL;
    int shmid;

    //can component
    CanHandle hnd1, hnd2; //define two canHandle for channel1 and channel2
    int channel1 = 0;
    int channel2 = 1;
    int canRet1, canRet2;
    long id1, id2;
    unsigned char msg1[8], msg2[8];
    unsigned int dlc1, dlc2;
    unsigned int flag1, flag2;
    unsigned long t1, t2;

    void writeNaviInfoInSharedMem(NaviInfo naviInfo);

    void shareMemFinished();

    void canLink1();

    void canLink2();

    void canUnLink();

    void initFlags(struct SharedInfo *shared);


  public:

    Server(int port);

    ~Server();

    void canReadMsg1();

    void canReadMsg2();

    void run();
};
