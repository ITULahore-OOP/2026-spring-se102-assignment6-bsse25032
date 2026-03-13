#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include<iostream>
#include<string>
#include"Warrior.h"
#include "MagicalEntity.h"
using namespace std;
class Spellblade:public Warrior,public MagicalEntity{
    public:
//constructor
Spellblade(string hName,int health,int bPower,int armorRate,int manaP, int spellPwr);
//destructor
~Spellblade();
int calculateHybridDamage();
};
#endif
