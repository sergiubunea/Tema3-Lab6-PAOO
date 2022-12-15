cmake_minimum_required(VERSION 3.16)

project(lab6 VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} 
    main.cpp
    Driver.cpp
    cars/Car.cpp
    cars/DieselCar.cpp
    cars/PetrolCar.cpp
)