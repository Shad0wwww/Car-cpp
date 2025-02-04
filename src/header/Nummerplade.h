#pragma once
#ifndef NUMMERPLADE_H
#define NUMMERPLADE_H

#include <iostream>

class Nummerplade {
	private:
		std::string nummerplade;

		std::string generateNummerplade() {
			static const char alphanum[] =
				"0123456789"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

			for (int i = 0; i < 7; i++) {
				nummerplade += alphanum[ rand() % (sizeof(alphanum) - 1) ];

			}

			return nummerplade;
		}

	public:
		Nummerplade() { generateNummerplade(); }
		std::string getNummerplade();
		~Nummerplade();
		
};

#endif NUMMERPLADE_H