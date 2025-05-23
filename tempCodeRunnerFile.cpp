#include <iostream>
using namespace std;
class Car {
public:
    string model; 
    double price; 
    Car(string m, double p) {
        model = m;
        price = p;
        cout << "Car constructor called for " << model << endl;
    }

    // Destructor
    virtual ~Car() {
        cout << "Car destructor called for " << model << endl;
    }
};

// Derived class ElectricCar
class ElectricCar : public Car {
public:
    int batteryLife; // Battery life in hours

    // Constructor
    ElectricCar(string m, double p, int bLife) : Car(m, p) {
        batteryLife = bLife;
        cout << "ElectricCar constructor called for " << model << " with battery life " << batteryLife << " hours" << endl;
    }

    // Destructor
    ~ElectricCar() {
        cout << "ElectricCar destructor called for " << model << endl;
    }
};

// Derived class GasolineCar
class GasolineCar : public Car {
public:
    double fuelTankCapacity; // Fuel tank capacity in liters

    // Constructor
    GasolineCar(string m, double p, double fTankCapacity) : Car(m, p) {
        fuelTankCapacity = fTankCapacity;
        cout << "GasolineCar constructor called for " << model << " with fuel tank capacity " << fuelTankCapacity << " liters" << endl;
    }

    // Destructor
    ~GasolineCar() {
        cout << "GasolineCar destructor called for " << model << endl;
    }
};

int main() {
    // Create objects of derived classes ElectricCar and GasolineCar
    ElectricCar eCar("Tesla Model S", 79999, 24);
    GasolineCar gCar("Ford Mustang", 55999, 60);

    // Here, the destructors will be called automatically when the objects go out of scope
    return 0;
}