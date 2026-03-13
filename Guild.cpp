#include"Guild.h"

Guild::Guild(string gN){
guildName=gN;
memberCount=0;
for(int i=0;i<15;i++){
    roster[i]=nullptr;
}
}
    //destructor
    Guild::~Guild(){
      cout <<"The guild " <<guildName<< " has been disbanded!\n";
    }
    //MEMBER FUNCTIONS
    int Guild::calculateTotalGuildPower(){
    //initializing the total power to 0 so it doesnot contain any garbage value
        int totalPower=0;
        for(int i=0;i<memberCount;i++){
            totalPower+=roster[i]->getPower();
        }
        //returning totalPower bcz function returns an int
        return totalPower;
    }
    void Guild::displayGuildStats(){
        //displaying guild information
             cout<< "Guild Name: "<<guildName<<endl;
             cout<<"Total Members: "<<memberCount<<"/15"<<endl;
             cout<<"Total Guild Power: "<<calculateTotalGuildPower()<<endl;
    }
    //operator overloading 
    void Guild::operator+=(Hero* newHero){
        //a check to ensure that membercount is not greater than 15
       if(memberCount<15){
        //adding new hero
            roster[memberCount]=newHero;
            //increasing the memberCount
            memberCount++;
       }
        else{
            cout<<"Guild is at full capacity!\n";}
    }
    //displays the guild info
    ostream& operator<<(std::ostream& os, const Guild& g){
     os<<"Guild: "<<g.guildName<<endl;
     os<<"Members: "<<g.memberCount<<endl;
     for(int i=0;i<g.memberCount;i++){
        os<<"- "<<g.roster[i]->getName()<<" (Power: "<<g.roster[i]-> getPower()<< ")"<<endl;
     }
     //returning
     return os;
    }
