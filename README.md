#This is a guide book of how to use the share memory server and API
===================================================================
##Server
--------
###Build
Use the command below to build the server:

####make server

###Execute
Use the command below to execute the server
####./server.out ? ? ?
####? represents "1" or "0"
first ?: socket server, "1" represents open
second ?: CAN channel 1, "1" represents open
third ?: CAN channel 2, "1" represents open

#####For example is you want to execute the server with the only the socket server. Use the command "./server.out 1 0 0".
#####If you want just open the CAN channel 1, the command is like "./server 0 1 0".
----------------------------------------------------------------
##Do not forget to give the argument or give more than three arguments.


##Read API
###Build
####"make readShareMemory"
can be used to build the example.

###Execute
####"./accepter.out"
can be used to run the example. You could read the result getting from the memory.


#How to use the API.
Copy the "readClient.cpp" and the "sharedStruct.h" in your project. Include the file "readClient.cpp" in your file where you want to use the API. Create the class "ReadSharedMemory", you could also see the example in the readClientMain.cpp.

At the end use the correspondent method to get the information that you want.


Enjoy to use it.
