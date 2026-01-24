#include<iostream>
using namespace std;

class Date{
private:
    int day, month, year;
public:
    void setDay(int day){
        this->day = day;
    }
    void setMonth(int month){
        this->month = month;
    }
    void setYear(int year){
        this->year = year;
    }

    void compare(Date& d2){
        if(day==d2.day && month==d2.month && year==d2.year)
            cout << "Equal" << endl;
        else
            cout << "Unequal" << endl;
    }
};

int main(){
    Date d1;
    d1.setDay(14);
    d1.setMonth(3);
    d1.setYear(2002);

    Date d2;
    d2.setDay(15);
    d2.setMonth(12);
    d2.setYear(2005);

    d1.compare(d2);

    return 0;
}