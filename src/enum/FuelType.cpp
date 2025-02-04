#include <iostream>

enum FuelType {
	DIESEL,
	GASOLINE,
	HYBRID,
	ELECTRIC
};

static std::string fuelTypeToString(FuelType fuelType) {
	switch(fuelType) {
		case DIESEL:
			return "Diesel";
		case GASOLINE:
			return "Gasoline";
		case HYBRID:
			return "Hybrid";
		case ELECTRIC:
			return "Electric";
	}
}