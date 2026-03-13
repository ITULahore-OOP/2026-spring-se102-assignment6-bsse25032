#ifndef WARRIOR_H
#define WARRIOR_H
#include<iostream>
#include<string>
#include "Hero.h"
using namespace std;

class Warrior: public Hero{
    private:
int armorRating;
    public:
//constructor
Warrior(string hName,int health,int bPower,int armorRate);
//destructor
~Warrior();
int getArmor();
int calculateEffectiveHealth() const;
};
#endif