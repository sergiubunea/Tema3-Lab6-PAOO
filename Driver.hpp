#ifndef __DRIVER__HPP
#define __DRIVER__HPP

#include <iostream>

class Driver {
    public:
        int skillLevel;
        std::string name;
        Driver();
        Driver(std::string name);
};

#endif