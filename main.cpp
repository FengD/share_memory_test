#include "server.h"

using namespace std;

static Server *s = NULL;

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

void mainRun(){
	pthread_t socketThread, canChannel1Thread, canChannel2Thread;

	try
	{
		s = new Server;
		pthread_create(&socketThread, NULL, socketThreadFunc, NULL);
		pthread_create(&canChannel1Thread, NULL, canChannel1ThreadFunc, NULL);
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

	pthread_join(socketThread, NULL);
	pthread_join(canChannel1Thread, NULL);
	// pthread_join(canChannel2Thread, NULL);
	delete s;
}



int main(int argc, const char * argv[]) {
	mainRun();
	return 0;
}
