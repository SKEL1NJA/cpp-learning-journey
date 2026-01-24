#include<iostream>
using namespace std;

class Player{
private:
    int health;
    int score;
public:
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return score;
    }
};

int main(){
    Player *uday = new Player;  // Dynamic allocation, memory allocation at runtime,
                                // stored in heap memory rather than stack meamory

    // ways to access
    Player udayObj = *uday; // way 1
    udayObj.setScore(289);
    cout << udayObj.getScore() << endl;

    cout << endl;

    (*uday).setScore(263); // way 2
    cout << (*uday).getScore() << endl;

    cout << endl;

    uday->setScore(305); // way 3  ,   prefer this one
    cout << uday->getScore() << endl;

    return 0;
}