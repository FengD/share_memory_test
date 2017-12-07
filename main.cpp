//This is the main method to run the server.

#include "server.h"

using namespace std;

static Server *s = NULL;

//thread function socket server
static void *socketThreadFunc(void *args){
	try
	{
		s->run();
	}
	catch(char const*str)
	{
			cout << str <<endl;
	}
	catch(...)
	{
			cout<<"universal"<<endl;
	}
}

//thread function CAN channel1
static void *canChannel1ThreadFunc (void *args){
	try
	{
		s->canReadMsg1();
	}
	catch(char const*str)
	{
			cout << str <<endl;
	}
	catch(...)
	{
			cout<<"universal"<<endl;
	}
}

//thread function CAN channel2
static void *canChannel2ThreadFunc (void *args){
	try
	{
		s->canReadMsg2();
	}
	catch(char const*str)
	{
			cout << str <<endl;
	}
	catch(...)
	{
			cout<<"universal"<<endl;
	}
}

void mainRun(const char * argv[]){
	pthread_t socketThread, canChannel1Thread, canChannel2Thread;

	try
	{
		s = new Server(8888);
		if(*argv[1] == '1'){
			pthread_create(&socketThread, NULL, socketThreadFunc, NULL);
		}

		if(*argv[2] == '1'){
			pthread_create(&canChannel1Thread, NULL, canChannel1ThreadFunc, NULL);
		}

		if(*argv[3] == '1'){
			pthread_create(&canChannel2Thread, NULL, canChannel2ThreadFunc, NULL);
		}

		// pthread_create(&canChannel1Thread, NULL, canChannel1ThreadFunc, NULL);
		// pthread_create(&canChannel2Thread, NULL, canChannel2ThreadFunc, NULL);
	}
	catch(char const*str)
	{
			cout << str <<endl;
	}
	catch(...)
	{
			cout<<"universal"<<endl;
	}

	if(*argv[1] == '1'){
		pthread_join(socketThread, NULL);
	}

	if(*argv[2] == '1'){
		pthread_join(canChannel1Thread, NULL);
	}

	if(*argv[3] == '1'){
		pthread_join(canChannel2Thread, NULL);
	}
	// pthread_join(socketThread, NULL);
	// pthread_join(canChannel1Thread, NULL);
	// pthread_join(canChannel2Thread, NULL);
	delete s;
}


// Use the argument to define which server you want to open
// first argv: socket server, "1" represents open
// second argv: CAN channel 1, "1" represents open
// third argv: CAN channel 2, "1" represents open
int main(int argc, const char * argv[]) {
	mainRun(argv);
	return 0;
}
