#include<iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class Player{
private:
    Gun gun;
public:
    void setGun(Gun gun){
        this->gun = gun;
    }
    Gun getGun(){
        return gun;
    }
};

int main(){
    Player uday, raghav;  // static allocation
    Player *urvi = new Player; // dynamic allocation

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    raghav.setGun(awm);
    urvi->setGun(akm);

    // Printing results
    Gun g1 = raghav.getGun();
    cout << "Raghav's gun ->" << endl
         << "ammo: " << g1.ammo << endl
         << "damage: " << g1.damage << endl
         << "scope: " << g1.scope << endl;

    cout << endl;

    Gun g2 = urvi->getGun();
    cout << "Urvi's gun ->" << endl
         << "ammo: " << g2.ammo << endl
         << "damage: " << g2.damage << endl
         << "scope: " << g2.scope << endl;

    delete urvi;

    return 0;
}