#include<iostream>
using namespace std;

class Player{
private:
    string name;
    float health;
    int score;
public:
    // setter function
    void setHealth(float h){
        cout << "Health is being modified" << endl; // logs
        health = h;
    }
    void setScore(int s){
        cout << "Score is being modified" << endl;
        score = s;
    }
    // getter function
    float getHealth(){
        return health;
    }
    int getScore(){ 
        return score;
    }
};

int main(){
    Player player1;
    player1.setHealth(98.96);
    cout << player1.getHealth();
    return 0;
}