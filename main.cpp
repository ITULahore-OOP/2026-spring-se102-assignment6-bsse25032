#include"Hero.h"
#include"Guild.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
using namespace std;
int main() {
    //Initializing the Guild
    Guild myGuild("Pak Defenders xD");
    //Creating Heroes using dynamic memory allocation 
    Hero* h1 = new Warrior("Mavra", 100, 50, 20);
    Hero* h2 = new Knight("Rohma", 120, 60, 25, 30);
    Hero* h3 = new Spellblade("Minahil", 80, 40, 10, 100, 70);
    //Recruiting heroes using the overloading += operator
    myGuild+=h1;
    myGuild+=h2;
    myGuild+=h3;
    //Printing the entire guild roster using the overloading << operator
    cout<<"*** Guild Status ***"<<endl;
    cout<<myGuild<<endl;

    // Hero operations
    cout<<"*** Testing Hero Operators ***"<<endl;
    if (*h2>*h1) {
        cout<<h2->getName()<<" is stronger than "<<h1->getName()<<".\n";
    }
    cout<<"Combined Vitality of Mavra and Rohma: "<<(*h1 + *h2)<<"\n\n";
    return 0;
}