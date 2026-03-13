#ifndef KNIGHT_H
#define KNIGHT_H
#include<iostream>
#include<string>
#include "Warrior.h"
using namespace std;

class Knight:public Warrior{
    private:
int chargeBonus;
    public:
Knight(string hName,int health,int bPower,int armorRate,int cBonus);
~Knight();
int getChargeBonus();
int calculateBurstDamage();

};
#endif