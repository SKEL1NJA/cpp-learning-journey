#include<iostream>
#include<vector>
using namespace std;

class Cricketer{
private:
    string name;
    int testMatches;
    float avgRuns;

public:
    void details(){
        cout << "Enter Cricketer's name: ";
        cin >> name;
        cout << "No. of test matches played: ";
        cin >> testMatches;
        cout << "Enter average runs: ";
        cin >> avgRuns;
    }
    void display(){
        cout << "Name: " << name << endl
             << "No. of test matches played: " << testMatches << endl
             << "Average runs: " << avgRuns << endl
             << endl;
    }
};

int main(){
    vector<Cricketer> cricketers;
    int n;
    cout << "Enter no. of cricketers: ";
    cin >> n;

    cricketers.resize(n);

    // Input data
    for (int i = 0; i < n;i++){
        cout << "Enter details of the cricketer: " << i + 1 << ": " << endl;
        cricketers[i].details();
    }

    // Display data
    cout << endl;
    for (int i = 0; i < n;i++){
        cricketers[i].display();
    }

        return 0;
}