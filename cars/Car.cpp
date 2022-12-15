#include "Car.hpp"
#include "DieselCar.hpp"
#include "PetrolCar.hpp"

Car::Car()
:hp(110), doors(4)
{}

Car::Car(Driver driver)
:hp(110), doors(4), driver(std::make_unique<Driver>(driver)) 
{}

Car::Car(Car&& rhs) {
    driver = std::move(rhs.driver);
}

Car& Car::operator=(Car&& rhs) {
    driver = std::move(rhs.driver);
    return *this;
}

std::shared_ptr<Car> Car::createCar(Type type) {
    switch(type) {
        case Type::diesel: 
            return std::make_shared<DieselCar>();
            break;
        case Type::petrol: 
            return std::make_shared<PetrolCar>();
            break;
        default: 
            break;
    }
    return std::make_shared<Car>();
}

void Car::increase_hp(int new_hp) {
    hp = new_hp;
}

std::string Car::printDriverName() {
    return driver ? driver->name:"null";
}