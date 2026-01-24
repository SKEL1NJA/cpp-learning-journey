// Abstract Class - Which contains pure virtual functions
// Pure Virtual Function - Declaration in base class, definition in derived class
// It is necessary to override the pure virtual function 
// Pure Abstract Class - which contains *only* pure virtual functions

#include<iostream>
using namespace std;

class Vehicle{
public:
    virtual void calculateMileage() = 0;
    virtual void refuel() = 0;
};

class Bike{
public:
    void calculateMileage(){
        cout << "Mileage calculated" << endl;
    }
    void refuel(){
        cout << "Refuled Bike" << endl;
    }
};

int main(){
    Bike b;
    b.calculateMileage();
    b.refuel();
    return 0;
}