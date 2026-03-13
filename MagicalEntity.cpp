#include "MagicalEntity.h"

MagicalEntity::MagicalEntity( int manaP, int spellPwr){
manaPool=manaP;
spellPower=spellPwr;
}
    //destructor
   MagicalEntity::~MagicalEntity(){
   }
   //getter for manaPOOl
   const int MagicalEntity::getMana(){
    //returning
    return manaPool;
   }
   //getter for spellpower
   const int MagicalEntity::getSpellPower(){
    //returning
    return spellPower;
   }