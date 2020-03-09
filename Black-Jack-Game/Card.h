#include <iostream>
#include <string>


class Card {

    private:
        int ID;
        std::string Suit;
        std::string Name;
        int Value;
        int aceValue;
        

    public:
        Card();
        Card(std::string s1,std::string s2, int i3, int i4);
        ~Card(); //a til day ~ a destructor 

        int getID(); 
        std::string getSuit();
        std::string getName();
        int getValue();
        int getAceValue(); 

        void setID(int temp); 
        void setSuit(std::string temp);
        void setName(std::string temp);
        void setValue(int temp);
        void setAceValue(int temp);

        void Display(); 

};
