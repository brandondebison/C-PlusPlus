
#include "Card.h" 



Card::Card(){
    ID = 0;
    Suit = "";
    Name = "";
    Value = 0;
    aceValue =0;
}

Card::Card(std::string s1,std::string s2, int i3, int i4){
    ID = 0;
    Suit = s1;
    Name = s2;
    Value = i3;
    aceValue = i4;
}

Card::~Card(){ //a til day ~ a destructor 

}

int Card::getID(){
    return ID;
} 
std::string Card::getSuit(){
    return Suit;
}
std::string Card::getName(){
    return Name;
}
int Card::getValue(){
    return Value;
}
int Card::getAceValue(){
    return aceValue;
}


void Card::setID(int temp){
    ID = temp;
}
void Card::setSuit(std::string temp){
    Suit = temp;
}
void Card::setName(std::string temp){
    Name = temp;
}
void Card::setValue(int temp){
    Value = temp;
}
void Card::setAceValue(int temp){
    aceValue = temp;
}


void Card::Display(){
    std::cout << "ID: " << ID << std::endl;
    std::cout << "Suit: " << Suit << std::endl;
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Value: " << Value << std::endl;
} 
