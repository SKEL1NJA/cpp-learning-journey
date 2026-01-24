#include<iostream>
using namespace std;

class ComplexNumber{
private:
    int real;
    int imaginary;
public:
    ComplexNumber(int r, int i) : real(r),imaginary(i) {} // parameterized constructor

    friend ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
    friend ComplexNumber operator-(const ComplexNumber& c1, const ComplexNumber& c2);

    void display(){
        cout << "real: " << real << " , " << "imaginary: " << imaginary << endl;
    }
};

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2){
    return ComplexNumber(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

ComplexNumber operator-(const ComplexNumber& c1, const ComplexNumber& c2){
    return ComplexNumber(c1.real - c2.real, c1.imaginary - c2.imaginary);
}

int main(){
    ComplexNumber c1(10, 6), c2(8, 1);

    ComplexNumber c3 = c1 + c2;
    ComplexNumber c4 = c1 - c2;

    c3.display();
    c4.display();

    return 0;
}