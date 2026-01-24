// A friend function is a function that is not a member of a class but is allowed to access its private and protected members.

// - Declared inside the class using the keyword friend.

// - Defined outside the class like a normal function.

// - Useful when you want external functions (or operator overloads) to work with private data of a class.

#include<iostream>
using namespace std;

class Box{
private:
    int length;

public:
    Box(int l) : length(l) {}
    friend void printLength(Box b);
};

void printLength(Box b){
    cout << "Length of box: " << b.length << endl;
}

int main(){
    Box b1(10);
    printLength(b1);
    return 0;
}