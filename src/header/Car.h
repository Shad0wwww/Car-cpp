#pragma once
#ifndef CARS_H
#define CARS_H

#include <iostream>
#include "Engine.h"
#include "Nummerplade.h"
#include "../enum/fuelType.cpp"

class Cars {
    private:
        std::string brand;
        std::string model;
        Engine engine;
        Nummerplade nummerplade;
        FuelType fuelType;

    public:
        Cars(std::string brand, std::string model, Engine engine, FuelType fueltype);
        std::string getBrand();
        std::string getModel();
        std::string getNummerplade();
        FuelType getFuelType();
        std::string getFuelTypeString();
        Engine getEngine();
        ~Cars();
};

#endif CARS_H