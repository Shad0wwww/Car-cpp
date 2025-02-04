#include <iostream>
#include "./header/Car.h" 
using namespace std;

int main() {

    //Creating my engine object
    Engine myEngine(10, 200);

    //Creating my car object
    Cars myCar("Toyota", "Corolla", myEngine);

    string brand = myCar.getBrand();
    string model = myCar.getModel();
    int acceleration = myCar.getEngine().getAcceleration();
    string nummerplade = myCar.getNummerplade();

  
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Acceleration: " << acceleration << endl;
    cout << "Nummerplade: " << nummerplade << endl;

    return 0;
}