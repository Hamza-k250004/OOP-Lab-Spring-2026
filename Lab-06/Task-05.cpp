#include "iostream"
using namespace std;

class Vehicle {
    public:
        virtual void startEngine() {
            cout << "Engine Started!" << endl;
        }    
};

class Car : public Vehicle {
    public:
        virtual void startEngine() {
            cout << "Car Started!" << endl;
        }
};

class Bike : public Vehicle {
    public:
        virtual void startEngine() {
            cout << "Bike Started!" << endl;
        }
};

class Truck : public Vehicle {
    public:
        virtual void startEngine() {
            cout << "Truck Started!" << endl;
        }
};

int main() {
    Vehicle v;
    Car c;
    Bike b;
    Truck t;

    v.startEngine();
    c.startEngine();
    b.startEngine();
    t.startEngine();

    return 0;
}