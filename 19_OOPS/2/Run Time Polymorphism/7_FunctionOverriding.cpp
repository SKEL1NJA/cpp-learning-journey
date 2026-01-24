#include<iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;
    virtual void area(){
        cout << "Area of rectangle = " << length * breadth << endl;
    }
};

class Square : public Rectangle {
public:
    int side;
    void area(){
        cout << "Area of Square = " << side * side << endl;
    }
};

int main(){
    Rectangle *r;
    Square s;
    r = &s;

    r->length = 5;
    r->breadth = 6; 
    s.side = 7;

    r->area();

    return 0;
}