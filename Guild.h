#ifndef GUILD_H
#define GUILD_H
#include<iostream>
#include<string>
#include "Hero.h"
using namespace std;

class Guild{
    private:
    string guildName;
    Hero* roster[15];
    int memberCount;

    public:
    //constructor
    Guild(string gN);
    //destructor
    ~Guild();
    //MEMBER FUNCTIONS
    //for calculation
    int calculateTotalGuildPower();
    //for display
    void displayGuildStats();
    //operator overloading functions
    void operator+=(Hero* newHero);
   friend std::ostream& operator<<(std::ostream& os, const Guild& g);

};
#endif