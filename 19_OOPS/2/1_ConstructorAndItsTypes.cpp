#include<iostream>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineType;

    // default constructor
    // Bike(){
    //     cout << "This is a default constructor" << endl;
    // }

    // Parameterized Constructor
    Bike(int tyreSize, int engineType){
        this->tyreSize = tyreSize;
        this->engineType = engineType;
        cout << "This is parameterized constructor" << endl;
    }

    // Destructor   --> deallocates the allocated mememory   --> is called automatically when object goes out of its scope
    ~Bike(){
        cout << "Destructor is called" << endl;
    }
};

int main(){
    Bike tvs(12,100);
    Bike honda(13,150);
    Bike royalEnfield(15,350);

    cout << tvs.tyreSize << " " << tvs.engineType << endl;
    cout << honda.tyreSize << " " << honda.engineType << endl;
    cout << honda.tyreSize << " " << honda.engineType << endl;

    return 0;
}