#include<iostream>
using namespace std;

class Student{
public:
    int rollNo;
    int age;

    Student(int r, int a = 12) : rollNo(r), age(a) {}
};

int main(){
    Student uday(10, 19);
    Student parth(1);

    cout << uday.rollNo << " " << uday.age << endl;
    cout << parth.rollNo << " " << parth.age << endl;

    return 0;
}