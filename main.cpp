#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Guild.h"
#include <iostream>

int main()
{
    Hero h1("Mavra",100,50);
    Warrior w("Gimli",100,40,10);
    Knight k("Arthur", 150, 60, 20, 25);

    return 0;
}