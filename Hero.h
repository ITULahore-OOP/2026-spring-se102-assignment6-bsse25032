#ifndef HERO_H
#define HERO_H
#include<iostream>
#include<string>
using namespace std;

class Hero{
    private:
    string heroName;
    int health;
    int basePower;
    public:
    //constructor
    Hero(string name,int health,int bpower);
    //destructor
    ~Hero();
    //getters
    //getter for name
    string getName()const;
    //getter for health
    int getHealth()const;
    //getter for power
    int getPower()const;
    //setter for damage
    void takeDamage(int damage );
    //operator overloading functions
    bool operator>(const Hero &other) const;
    int operator+(const Hero &other) const;
};
#endif
