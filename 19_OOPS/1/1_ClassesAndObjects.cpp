#include<iostream>
using namespace std;

class Player{     // Player is a class
public:
    // Data Memebers
    string name;
    float health;
    int score;
    // Member Function
    void details(){
        cout << name << " " << health << " " << score << endl;
    }
};

int main(){
    Player player1; // player1 is an object

    player1.name = "Uday";
    player1.health = 100.00;
    player1.score = 86;

    Player player2; // player2 is another object of the same class
    player2.name = "Parth";
    player2.health = 98.67;
    player2.score = 87;

    cout << player1.name << " " << player1.health << " " << player1.score << endl;
    cout << player2.name << " " << player2.health << " " << player2.score << endl;

    cout << endl;

    player1.details();
    player2.details();

    return 0;
}