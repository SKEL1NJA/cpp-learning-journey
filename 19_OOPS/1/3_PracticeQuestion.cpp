#include<iostream>
using namespace std;

class Book{
public:
    string name;
    float price;
    int noOfPages;

    int countBooks(int p){
        if(price<p)
            return 1;
        else
            return 0;
    }
    bool isBookPresent(string title){
        if(name==title)
            return true;
        else
            return false;
    }
};

int main(){
    Book book1;
    book1.name = "Geronimo Stilton";
    book1.price = 449.99;
    book1.noOfPages = 300;

    cout << book1.countBooks(470) << endl;
    cout << book1.isBookPresent("Harry Potter And The Goblet Of Fire") << endl;

    return 0;
}