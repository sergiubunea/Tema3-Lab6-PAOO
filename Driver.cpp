#include <iostream>
#include "Driver.hpp"

Driver::Driver()
:skillLevel(0), name("")
{}

Driver::Driver(std::string name)
:skillLevel(10), name(name)
{}
