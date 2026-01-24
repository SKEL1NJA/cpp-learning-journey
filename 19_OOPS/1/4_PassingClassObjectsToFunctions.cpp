#include<iostream>
using namespace std;

class Player{
private:
    int health;
    bool alive;
public:
    int getHealth(){
        return health;
    }
    bool getIsAlive(){
        return alive;
    }
    void setHealth(int health) {
        this->health = health;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
};

int addHealth(Player a, Player b){
    return a.getHealth() + b.getHealth();
}

Player getMaxHealth(Player a, Player b){
    if(a.getHealth()>b.getHealth())
        return a;
    else
        return b;
}

int main(){
    Player harsh;
    harsh.setHealth(12);
    harsh.setIsAlive(true);

    Player uday;
    uday.setHealth(73);
    uday.setIsAlive(true);

    cout << addHealth(harsh, uday) << endl;

    Player NoobMaster69 = getMaxHealth(harsh, uday);
    cout << NoobMaster69.getHealth() << endl;
    cout << NoobMaster69.getIsAlive() << endl;

    return 0;
}