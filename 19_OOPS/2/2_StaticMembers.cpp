#include<iostream>
using namespace std;

class Bike{
public:
    static int noOfBikes; // this belongs to the class
    int tyreSize;
    int engineType;

    static void increaseBikes(){  // static function, this also belongs to the class
        noOfBikes++;
    }
};

int Bike::noOfBikes = 10; // :: -> scope resolution operator;

int main(){
    Bike royalEnfield;
    Bike yamaha;

    cout << royalEnfield.noOfBikes << endl;
    cout << yamaha.noOfBikes << endl;

    royalEnfield.increaseBikes();
    cout << royalEnfield.noOfBikes << endl;
    cout << yamaha.noOfBikes << endl;

    yamaha.increaseBikes();
    cout << royalEnfield.noOfBikes << endl;
    cout << yamaha.noOfBikes << endl;

    Bike::increaseBikes();
    cout << royalEnfield.noOfBikes << endl;
    cout << yamaha.noOfBikes << endl;

    return 0;
}