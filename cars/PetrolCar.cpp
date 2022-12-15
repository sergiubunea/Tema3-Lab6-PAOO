#include "PetrolCar.hpp"

PetrolCar::PetrolCar() {
    std::cout << "Petrol car created(hp:" << hp << ", doors:" << doors <<")\n";
}

PetrolCar::~PetrolCar() {
    std::cout << "Petrol car destroyed(hp:" << hp << ", doors:" << doors <<")\n";
}