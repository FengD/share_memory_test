// Define the method in extern file of class Server.

#include "server.h"

void Server::writeNaviInfoInSharedMem(NaviInfo naviInfo){
	if(shared->canWriteNaviInfo == 1 && shared->canReadNaviInfo == 1){
    shared->canWriteNaviInfo = 0;
    shared->canReadNaviInfo = 0;
    // char it[INT_SIZE], trd[INT_SIZE], trt[INT_SIZE],
		// char crd[INT_SIZE], crt[INT_SIZE];

		shared->iconType = naviInfo.iconType;
    // sprintf(it, "%d", naviInfo.iconType);
    // strncpy(shared->iconType, it, INT_SIZE);
		shared->totalRetainDistance = naviInfo.totalRetainDistance;
    // sprintf(trd, "%d", naviInfo.totalRetainDistance);
    // strncpy(shared->totalRetainDistance, trd, INT_SIZE);
		shared->totalRetainTime = naviInfo.totalRetainTime;
    // sprintf(trt, "%d", naviInfo.totalRetainTime);
    // strncpy(shared->totalRetainTime, trt, INT_SIZE);
		shared->currentStepRetainDistance = naviInfo.currentStepRetainDistance;
    // sprintf(crd, "%d", naviInfo.currentStepRetainDistance);
    // strncpy(shared->currentStepRetainDistance, crd, INT_SIZE);
		shared->currentStepRetainTime = naviInfo.currentStepRetainTime;
    // sprintf(crt, "%d", naviInfo.currentStepRetainTime);
    // strncpy(shared->currentStepRetainTime, crt, INT_SIZE);

    strncpy(shared->currentRoadName, naviInfo.currentRoadName, NAME_SIZE);

    strncpy(shared->nextRoadName, naviInfo.nextRoadName, NAME_SIZE);

    cout << "iconType:" << shared->iconType << endl;
    cout << "totalRetainDistance:" << shared->totalRetainDistance << endl;
    cout << "totalRetainTime:" << shared->totalRetainTime << endl;
    cout << "currentStepRetainDistance:" << shared->currentStepRetainDistance << endl;
    cout << "currentStepRetainTime:" << shared->currentStepRetainTime << endl;
    cout << "currentRoadName:" << shared->currentRoadName << endl;
    cout << "nextRoadName:" << shared->nextRoadName << endl;

    shared->canWriteNaviInfo = 1;
    shared->canReadNaviInfo = 1;
	} else{
		Server::writeNaviInfoInSharedMem(naviInfo);
	}
}

void Server::shareMemFinished(){
    if(shmdt(shm) == -1)
    {
        fprintf(stderr, "shmdt failed\n");
        exit(EXIT_FAILURE);
    }
    //删除共享内存
    if(shmctl(shmid, IPC_RMID, 0) == -1)
    {
        fprintf(stderr, "shmctl(IPC_RMID) failed\n");
        exit(EXIT_FAILURE);
    }
}

void Server::canLink1() {
  hnd1 = canOpenChannel(channel1, canOPEN_EXCLUSIVE | canOPEN_REQUIRE_EXTENDED);
  if (hnd1 < 0) {
    throw("canOpenChannel1 failed");
  }
  canSetBusParams(hnd1, BAUD_500K, 0, 0, 0, 0, 0); //set the channel parameters
  canSetBusOutputControl(hnd1, canDRIVER_NORMAL);
  canBusOn(hnd1);
}

void Server::canLink2(){
  hnd2 = canOpenChannel(channel2, canOPEN_EXCLUSIVE | canOPEN_REQUIRE_EXTENDED);
  if (hnd2 < 0) {
    throw("canOpenChannel2 failed");
  }
  canSetBusParams(hnd2, BAUD_500K, 0, 0, 0, 0, 0); //set the channel parameters
  canSetBusOutputControl(hnd2, canDRIVER_NORMAL);
  canBusOn(hnd2);
}

void Server::canUnLink() {
  canBusOff(hnd1);
  canClose(hnd1);
  canBusOff(hnd2);
  canClose(hnd2);
}

void Server::initFlags(struct SharedInfo *shared){
  shared->canWriteNaviInfo = 1;
  shared->canReadNaviInfo = 1;
  shared->canWriteCan330Msg = 1;
  shared->canReadCan330Msg = 1;
  shared->canWriteCan332Msg = 1;
  shared->canReadCan332Msg = 1;
  shared->canWriteCan340Msg = 1;
  shared->canReadCan340Msg = 1;
  shared->canWriteCan342Msg = 1;
  shared->canReadCan342Msg = 1;
  shared->canWriteCan350Msg = 1;
  shared->canReadCan352Msg = 1;
  shared->canWriteCan360Msg = 1;
  shared->canReadCan362Msg = 1;
  shared->canWriteCan370Msg = 1;
  shared->canReadCan372Msg = 1;
  shared->canWriteCan380Msg = 1;
  shared->canReadCan382Msg = 1;
  shared->canWriteCan600Msg = 1;
  shared->canReadCan600Msg = 1;
  shared->canWriteCan650Msg = 1;
  shared->canReadCan650Msg = 1;
  shared->canWriteCan651Msg = 1;
  shared->canReadCan651Msg = 1;
  shared->canWriteCan652Msg = 1;
  shared->canReadCan652Msg = 1;
  shared->canWriteCan653Msg = 1;
  shared->canReadCan653Msg = 1;
  shared->canWriteCan654Msg = 1;
  shared->canReadCan654Msg = 1;
  shared->canWriteCan655Msg = 1;
  shared->canReadCan655Msg = 1;
  shared->canWriteCan656Msg = 1;
  shared->canReadCan656Msg = 1;
  shared->canWriteCan657Msg = 1;
  shared->canReadCan657Msg = 1;
  shared->canWriteCan658Msg = 1;
  shared->canReadCan658Msg = 1;
  shared->canWriteCan659Msg = 1;
  shared->canReadCan659Msg = 1;
  shared->canWriteCan65AMsg = 1;
  shared->canReadCan65AMsg = 1;
  shared->canWriteCan65BMsg = 1;
  shared->canReadCan65BMsg = 1;
}

Server::Server(int port = SERVER_PORT):port(port), server_sock_fd(-1), client_sock_fd(-1) {
  canRet1 = -1;
  canRet2 = -1;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(SERVER_PORT);
  server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  bzero(&(server_addr.sin_zero), 8);
  //create socket
  server_sock_fd = socket(AF_INET, SOCK_STREAM, 0);
  if(server_sock_fd == -1) {
      throw("socket error");
  }
  //bind socket
  bind_result = bind(server_sock_fd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if(bind_result == -1) {
      throw("bind error");
  }
  //listen
  if(listen(server_sock_fd, BACKLOG) == -1) {
      throw("listen error");
  }

  //创建共享内存
  shmid = shmget((key_t)6667, sizeof(struct SharedInfo), 0666|IPC_CREAT);
  if(shmid == -1)
  {
      throw("shmget failed");
  }
  //将共享内存连接到当前进程的地址空间
  shm = shmat(shmid, (void*)0, 0);
  if(shm == (void*)-1)
  {
      throw("shmat failed");
  }
  // printf("Memory attached at %X\n", (int)shm);
  //设置共享内存
  shared = (struct SharedInfo*)shm;

  Server::initFlags(shared);

}

Server::~Server() {
    cout << "server destructor" << endl;//destructor
    if(-1 != server_sock_fd)
    shutdown(server_sock_fd,SHUT_RDWR);
    if(-1 != client_sock_fd)
    shutdown(client_sock_fd,SHUT_RDWR);
    Server::shareMemFinished();
    Server::canUnLink();
}

void Server::canReadMsg1(){
  Server::canLink1();
  do{
    sleep(0.1);
    int j = 0;
    canRet1 = canReadWait(hnd1, &id1, &msg1, &dlc1, &flag1, &t1, -1);
    switch (canRet1) {
      case 0:
        if (dlc1 > 8) {
          dlc1 = 8;
        }
        canMsgSwitch(id1, dlc1, msg1, shared);
        break;
      case canERR_NOMSG:
        break;
      default:
        perror("canReadBlock error");
        break;
      }
  } while(canRet1 == canOK);
}

void Server::canReadMsg2(){
  Server::canLink2();
  do{
    int j = 0;
    canRet2 = canReadWait(hnd2, &id2, &msg2, &dlc2, &flag2, &t2, -1);
    switch (canRet2) {
      case 0:
        if (dlc2 > 8) {
          dlc2 = 8;
        }
        break;
      case canERR_NOMSG:
        break;
      default:
        perror("canReadBlock error");
        break;
      }
  } while(canRet2 == canOK);
}

void Server::run(){
    //fd_set
    fd_set server_fd_set;
    int max_fd = -1;
    struct timeval tv;  //timeout setting

    while(1) {
        tv.tv_sec = 20;
        tv.tv_usec = 0;
        FD_ZERO(&server_fd_set);
        FD_SET(STDIN_FILENO, &server_fd_set);
        if(max_fd < STDIN_FILENO)
        {
            max_fd = STDIN_FILENO;
        }
        //server socket
        FD_SET(server_sock_fd, &server_fd_set);
        if(max_fd < server_sock_fd)
        {
            max_fd = server_sock_fd;
        }
        //client connect
        for(int i =0; i < CONCURRENT_MAX; i++)
        {
            if(client_fds[i] != 0)
            {
                FD_SET(client_fds[i], &server_fd_set);
                if(max_fd < client_fds[i])
                {
                    max_fd = client_fds[i];
                }
            }
        }
        int ret = select(max_fd + 1, &server_fd_set, NULL, NULL, &tv);
        if(ret < 0)
        {
            perror("select error\n");
            continue;
        }
        else if(ret == 0)
        {
            printf("select timeout\n");
            continue;
        }
        else
        {
            if(FD_ISSET(server_sock_fd, &server_fd_set))
            {
                //new connection request
                struct sockaddr_in client_address;
                socklen_t address_len;
                client_sock_fd = accept(server_sock_fd, (struct sockaddr *)&client_address, &address_len);
                printf("new connection client_sock_fd = %d\n", client_sock_fd);
                if(client_sock_fd > 0)
                {
                    int index = -1;
                    for(int i = 0; i < CONCURRENT_MAX; i++)
                    {
                        if(client_fds[i] == 0)
                        {
                            index = i;
                            client_fds[i] = client_sock_fd;
                            break;
                        }
                    }
                    if(index >= 0)
                    {
                        printf("new client(%d)connect successfully %s:%d\n", index, inet_ntoa(client_address.sin_addr), ntohs(client_address.sin_port));
                    }
                    else
                    {
                        printf("max connection. new client cannot join. %s:%d\n", inet_ntoa(client_address.sin_addr), ntohs(client_address.sin_port));
                    }
                }
            }
            for(int i =0; i < CONCURRENT_MAX; i++)
            {
                if(client_fds[i] !=0)
                {
                    if(FD_ISSET(client_fds[i], &server_fd_set))
                    {
                        //traite the message from one client

                        NaviInfo naviInfo;
                        long byte_num = 0;
                        byte_num = recv(client_fds[i], (char*)&naviInfo, sizeof(naviInfo), 0);

                        if (byte_num > 0)
                        {

                            while(shared->canWriteNaviInfo != 1)
                            {
                                sleep(1);
                                printf("Waiting...\n");
                            }
                            //update the naviInfo in the shared memory
                            writeNaviInfoInSharedMem(naviInfo);
                        }
                        else if(byte_num < 0)
                        {
                            printf("get message from client(%d)error.\n", i);
                        }
                        else
                        {
                            FD_CLR(client_fds[i], &server_fd_set);
                            client_fds[i] = 0;
                            printf("client(%d)exit\n", i);
                        }
                    }
                }
            }
        }
    }
}
