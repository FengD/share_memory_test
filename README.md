# This is a guide book of how to use the share memory server and API

### Server

* Build

    Use the command `make server`  to build the server.

* Execute

    Use the command `./server.out ? ? ?` to execute the server.
    
    * `?` represents `1` or `0`
    
        * First ?: socket server, "1" represents open
    
        * Second ?: CAN channel 1, "1" represents open
    
        * Third ?: CAN channel 2, "1" represents open

For example is you want to execute the server with the only the socket server. Use the command 
```
./server.out 1 0 0
```
If you want just open the CAN channel 1, the command is like
```
./server.out 0 1 0
```
#### `PS: Do not forget to give the argument or give more than three arguments.`


### Read API

* Build
    
    `make readShareMemory` can be used to build the example.

* Execute

    `./accepter.out` can be used to run the example. You could read the result getting from the memory.


# How to use the API
Copy the `readClient.cpp` and the `sharedStruct.h` in your project. 
Include the file `readClient.cpp` in your file where you want to use the API. 
Create the class `ReadSharedMemory`, you could also see the example in the `readClientMain.cpp`.

```cpp
#include "readClient.cpp"
int main()
{
    ReadSharedMemory *r = NULL;
    try
    {
      r = new ReadSharedMemory;
      cout << "iconType:" << r->getIconType() << endl; // Get the type of navigation icon 
    }
    return 0;
}
```

# Enjoy to use it.

[![image]](http://gitlab.hirain.com/feng.ding1/share_memory_for_HMI)  
[image]: https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1512717868080&di=55a9ce4b49389f8f69d2a5cb4b7844aa&imgtype=0&src=http%3A%2F%2Fim1.tongbu.com%2Fappicon%2Fapp%2F902%2F2%2F943837902_953B8372.jpg "share_memory_for_HMI" 