#pragma once
#ifndef CARS_H
#define CARS_H

#include <iostream>
#include "Engine.h"
#include "Nummerplade.h"

class Cars {
    private:
        std::string brand;
        std::string model;
        Engine engine;
        Nummerplade nummerplade;

    public:
        Cars(std::string brand, std::string model, Engine engine);
        std::string getBrand();
        std::string getModel();
        std::string getNummerplade();
        Engine getEngine();
        ~Cars();
};

#endif CARS_H