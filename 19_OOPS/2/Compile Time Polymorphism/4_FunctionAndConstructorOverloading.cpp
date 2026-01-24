#include<iostream>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineType;

    // Constructor Overlaoding
    Bike(int ts, int et) : tyreSize(ts), engineType(et) {}
    Bike(int ts) : tyreSize(ts), engineType(150) {}
    Bike() : tyreSize(12), engineType(150) {}
};

// Function Overloading
void area(int a, int b){
    cout << "Area of rectangle = " << a * b << endl;
}

void area(int s){
    cout << "Area of Square = " << s * s << endl;
}

void add(string a, string b){
    cout << a + b << endl;
}
void add(int a, int b){
    cout << a + b << endl;
}

int main(){
    add("Uday", " Khanna");
    add(12, 5);
    area(7);
    area(12, 5);
    return 0;
}