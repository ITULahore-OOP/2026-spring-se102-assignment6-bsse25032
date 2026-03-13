#include "Warrior.h"

Warrior::Warrior(string hName,int health,int bPower,int armorRate):Hero(hName,health,bPower){
armorRating=armorRate;
}
//destructor
Warrior::~Warrior(){
}
//getter for armor
int Warrior::getArmor(){
    return armorRating;
}
//function for calculating effective health
int Warrior::calculateEffectiveHealth() const{
    //declaring and storing in effective health variable
int Effective_Health =getHealth()+(armorRating*2);
//returning it
return Effective_Health;
}