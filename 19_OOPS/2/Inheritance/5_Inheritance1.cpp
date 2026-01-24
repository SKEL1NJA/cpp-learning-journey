#include<iostream>
using namespace std;

class Vehicle{  // Base/Parent Class
public:
    int tyreSize;
    int engineType;
    int lights;
    string companyName;

    void showCompany(){
        cout << companyName << endl;
    }
};

class Bike : public Vehicle{  // Derived/Child Class
public:
    int handleSize;
};

int main(){
    Bike bmw;
    bmw.companyName = "BMW";
    bmw.tyreSize = 12;
    bmw.engineType = 350;
    bmw.lights = 2;

    bmw.showCompany();

    return 0;
}