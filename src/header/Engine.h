#pragma once
#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>

class Engine {
	private:
		int acceleration;
		int topSpeed;

	public:
		Engine(int acceleration, int topSpeed);
		int getAcceleration();
		int getTopSpeed();
		~Engine();
};

#endif 