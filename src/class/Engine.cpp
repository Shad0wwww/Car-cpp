#include "../header/Engine.h"

Engine::Engine(int a, int t) : acceleration(a), topSpeed(t) {}

int Engine::getAcceleration() {
	return acceleration;
}

int Engine::getTopSpeed() {
	return topSpeed;
}

Engine::~Engine() {}