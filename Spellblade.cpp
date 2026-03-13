#include"Spellblade.h"

//constructor
Spellblade::Spellblade(string hName,int health,int bPower,int armorRate,int manaP, int spellPwr)
:Warrior(hName,health,bPower,armorRate),MagicalEntity(manaP,spellPwr){

}
//destructor
Spellblade::~Spellblade(){
}
//function for calculating hybrid damage 
int Spellblade::calculateHybridDamage(){

int Hybrid_Damage=getPower() + getSpellPower();
//returning damage
return Hybrid_Damage;
}
