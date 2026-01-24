#include<iostream>
using namespace std;

class ComplexNumber{
public:
    int real;
    int imaginary;

    ComplexNumber operator+(const ComplexNumber& c2){
        ComplexNumber c3;
        c3.real = this->real + c2.real;
        c3.imaginary = this->imaginary + c2.imaginary;
        return c3;
    }

    ComplexNumber operator-(const ComplexNumber& c2){
        ComplexNumber c4;
        c4.real = this->real - c2.real;
        c4.imaginary = this->imaginary - c2.imaginary;
        return c4;
    }
};

int main(){
    ComplexNumber c1, c2;
    c1.real = 10;
    c1.imaginary = 6;
    c2.real = 8;
    c2.imaginary = 1;

    ComplexNumber c3 = c1 + c2;
    ComplexNumber c4 = c1 - c2;

    cout << "real: " << c3.real << " , " << "imaginary: " << c3.imaginary << endl;
    cout << "real: " << c4.real << " , " << "imaginary: " << c4.imaginary << endl;

    return 0;
}