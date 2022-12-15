#include "DieselCar.hpp"

DieselCar::DieselCar() {
    std::cout << "Diesel car created(hp:" << hp << ", doors:" << doors <<")\n";
}

DieselCar::~DieselCar() {
    std::cout << "Diesel car destroyed(hp:" << hp << ", doors:" << doors <<")\n";
}