#include"Hero.h"

Hero::Hero(string name,int health,int bpower){
    heroName=name;
    this-> health=health;
    basePower=bpower;
}
    //destructor
    Hero::~Hero(){
    }
    //getters
    //getter for name
    string Hero::getName()const{
        //returning
        return heroName;
    }
    //getter for health
    int Hero::getHealth()const{
        //returning
        return health;
    }
    //getter for power
    int Hero::getPower()const{
        //returning
        return basePower;
    }
    //setter for damage
    void Hero::takeDamage(int damage ){
        if(health<0)
            health=0;
        else
        //subtracting damage from the health
            health=health-damage;

    }
    bool Hero::operator>(const Hero &other) const{
    if(basePower>other.basePower)
            return true;
        else
            return false;
    
    }
    int Hero::operator+(const Hero &other) const{
    return health + other.health;
    } 