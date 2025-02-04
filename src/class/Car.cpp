#include "../header/Car.h"


Cars::Cars(std::string b, std::string m, Engine engine) : brand(b), model(m), engine(engine) {}

std::string Cars::getBrand() {
    return brand;
}

std::string Cars::getModel() {
    return model;
}

Engine Cars::getEngine() {
	return engine;
}

std::string Cars::getNummerplade() {
	return nummerplade.getNummerplade();
}

Cars::~Cars() {}