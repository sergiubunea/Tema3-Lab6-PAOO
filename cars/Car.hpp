#ifndef __CAR__HPP
#define __CAR__HPP

#include <iostream>
#include <memory>
#include "../Driver.hpp"

class Car {
    private:
        std::unique_ptr<Driver> driver;
    protected:
        int hp;
        int doors;
    public:
        enum class Type {petrol, diesel};
        Car();
        Car(Driver driver);
        Car(const Car& rhs) = delete;
        Car& operator=(const Car& rhs) = delete;
        Car(Car&& rhs);
        Car& operator=(Car&& rhs);
        static std::shared_ptr<Car> createCar(Type type);
        void increase_hp(int new_hp);
        std::string printDriverName();
};

#endif