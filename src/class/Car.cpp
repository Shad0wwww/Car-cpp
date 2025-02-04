#include "../header/Car.h"


Cars::Cars(std::string b, std::string m, Engine engine, FuelType fuel) : brand(b), model(m), engine(engine), fuelType(fuel) {}

std::string Cars::getBrand() {
    return brand;
}

std::string Cars::getModel() { 
    return model;
}

FuelType Cars::getFuelType() {
	return fuelType;
}

std::string Cars::getFuelTypeString() {
	return fuelTypeToString(fuelType);
}

Engine Cars::getEngine() {
	return engine;
}

std::string Cars::getNummerplade() {
	return nummerplade.getNummerplade();
}

Cars::~Cars() {}