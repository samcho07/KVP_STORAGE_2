
#include <iostream>
#include <sstream>
#include "key_storage.h"        //kvp_storage.h

int main()
{
    KVPStorage Storage;
    std::string inp, cmd, key, value;   //input, command, key, value 

    while(true)
    {
        std::cout << ">";       //first of all...
        std::getline(std::cin, inp);
        std::istringstream iss(inp);
        iss >> cmd >> key >> std::ws;       //char class
        std::getline(iss, value);


        if(cmd == "SET")
        {
            Storage.set(key, value);
            std::cout << "OK" << std::endl;
        }
        else if(cmd == "GET")
        {
            std::string res = Storage.get(key);
            if(!res.empty())
            {
            std::cout << res << std::endl;
            }
 
        }
        else if(cmd == "DELETE")
        {
            if(Storage.remove(key))
            {
                std::cout << "OK" << std::endl;
            }
        }
        else
        {
            std::cout << "Invalid Command!!!" << std::endl;
        }
    }

    return 0;
}