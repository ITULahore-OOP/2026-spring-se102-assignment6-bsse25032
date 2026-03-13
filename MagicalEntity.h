#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include<iostream>
#include<string>
using namespace std;

class MagicalEntity{
    private:
int manaPool;
int spellPower;
    public:
    //constructor
MagicalEntity(int manaP, int spellPwr);
    //destructor
   ~ MagicalEntity();
   const int getMana();
   const int getSpellPower();
};
#endif
