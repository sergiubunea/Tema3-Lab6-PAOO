#include <iostream>
#include "cars/Car.hpp"
#include "Driver.hpp"

void stage1(Car::Type type) {
    auto car = Car::createCar(type);
    if(type == Car::Type::diesel) {
        std::cout << "Diesel-ul e poluant\n";
        return;
    }
    car->increase_hp(420);
    return;
}

int main() {

    stage1(Car::Type::diesel);
    stage1(Car::Type::petrol);

    Driver d1("Pier");
    Car c1(d1);
    std::cout << c1.printDriverName() << "\n";
    Car c2(std::move(c1));
    std::cout << c1.printDriverName() << "\n";
    std::cout << c2.printDriverName() << "\n";

    Driver d2("Weber");
    Car c3(d2);
    std::cout << c3.printDriverName() << "\n";
    c1 = std::move(c3);
    std::cout << c3.printDriverName() << "\n";
    std::cout << c1.printDriverName() << "\n";
    


    return 0;
}
