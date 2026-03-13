#include"Knight.h"

//constructor
Knight::Knight(string hName,int health,int bPower,int armorRate,int cBonus):Warrior(hName,health,bPower,armorRate){
    chargeBonus=cBonus;
}

//destructor
Knight::~Knight(){
}
//getter for bonus 
int Knight::getChargeBonus(){
    return chargeBonus;
}
//function for calculating the burst damage
int Knight::calculateBurstDamage(){
    //declaring and storing in burst damage variable
    int Burst_Damage=getPower() + chargeBonus;
    //returning it
    return Burst_Damage;
}

