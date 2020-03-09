#include "Card.h" 
#include <iostream>
#include <string>
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock


int main () {
    std::array<Card,52> Deck;
    std::string userName;
    std::string nextHand = "";

    bool keepPlaying = true; 
    bool hitOrStay = false; 
    std::string answer = "";
    int j =0;
    int temp = 0; 

    int playerCard1 = 0;
    int playerFinalHand = 0; 
    int dealerFinalHand = 0;
    int playerCard2 = 0;
    int playersScore = 0; 
    int dealersScore = 0; 
    int dealerCard1 = 0; 
    int dealerCard2 = 0;
    int playerAceH = 0;
    int playerAceD = 0;
    int playerAceC = 0; 
    int playerAceS = 0; 
    int dealerAceH = 0; 
    int dealerAceD = 0; 
    int dealerAceC = 0; 
    int dealerAceS = 0;


            
            
    //Creating the Deck Loading into the Array of Class Cards 
    for(int i=0; i < 52; i++ ) {


            switch (i) {
            case 0: Deck[i].setID(i); Deck[i].setName( "king"); Deck[i].setValue(10); Deck[i].setSuit("Clubs"); break;
            case 1: Deck[i].setID(i); Deck[i].setName("ace"); Deck[i].setValue(11); Deck[i].setSuit("Hearts"); Deck[i].setAceValue(1);break;
            case 2: Deck[i].setID(i); Deck[i].setName("two"); Deck[i].setValue(2); Deck[i].setSuit("Hearts"); break;
            case 3: Deck[i].setID(i); Deck[i].setName("three"); Deck[i].setValue(3); Deck[i].setSuit("Hearts"); break;
            case 4: Deck[i].setID(i); Deck[i].setName("four"); Deck[i].setValue(4); Deck[i].setSuit("Hearts"); break;
            case 5: Deck[i].setID(i); Deck[i].setName("five"); Deck[i].setValue(5); Deck[i].setSuit("Hearts"); break;
            case 6: Deck[i].setID(i); Deck[i].setName("six"); Deck[i].setValue(6); Deck[i].setSuit("Hearts"); break;
            case 7: Deck[i].setID(i); Deck[i].setName("seven"); Deck[i].setValue(7); Deck[i].setSuit("Hearts"); break;
            case 8: Deck[i].setID(i); Deck[i].setName("eight"); Deck[i].setValue(8); Deck[i].setSuit("Hearts"); break;
            case 9: Deck[i].setID(i); Deck[i].setName("nine"); Deck[i].setValue(9); Deck[i].setSuit("Hearts"); break;
            case 10: Deck[i].setID(i); Deck[i].setName("ten"); Deck[i].setValue(10); Deck[i].setSuit("Hearts"); break;
            case 11: Deck[i].setID(i); Deck[i].setName("jack"); Deck[i].setValue(10); Deck[i].setSuit("Hearts"); break;
            case 12: Deck[i].setID(i); Deck[i].setName("queen"); Deck[i].setValue(10); Deck[i].setSuit("Hearts"); break;
            case 13: Deck[i].setID(i); Deck[i].setName("king"); Deck[i].setValue(10); Deck[i].setSuit("Hearts"); break;

            case 14: Deck[i].setID(i); Deck[i].setName("ace"); Deck[i].setValue(11); Deck[i].setSuit("Diamonds"); Deck[i].setAceValue(2);break;
            case 15: Deck[i].setID(i); Deck[i].setName("two"); Deck[i].setValue(2); Deck[i].setSuit("Diamonds"); break;
            case 16: Deck[i].setID(i); Deck[i].setName("three"); Deck[i].setValue(3); Deck[i].setSuit("Diamonds"); break;
            case 17: Deck[i].setID(i); Deck[i].setName("four"); Deck[i].setValue(4); Deck[i].setSuit("Diamonds"); break;
            case 18: Deck[i].setID(i); Deck[i].setName("five"); Deck[i].setValue(5); Deck[i].setSuit("Diamonds"); break;
            case 19: Deck[i].setID(i); Deck[i].setName("six"); Deck[i].setValue(6); Deck[i].setSuit("Diamonds"); break;
            case 20: Deck[i].setID(i); Deck[i].setName("seven"); Deck[i].setValue(7); Deck[i].setSuit("Diamonds"); break;
            case 21: Deck[i].setID(i); Deck[i].setName("eight"); Deck[i].setValue(8); Deck[i].setSuit("Diamonds"); break;
            case 22: Deck[i].setID(i); Deck[i].setName("nine"); Deck[i].setValue(9); Deck[i].setSuit("Diamonds"); break;
            case 23: Deck[i].setID(i); Deck[i].setName("ten"); Deck[i].setValue(10); Deck[i].setSuit("Diamonds"); break;
            case 24: Deck[i].setID(i); Deck[i].setName("jack"); Deck[i].setValue(10); Deck[i].setSuit("Diamonds"); break;
            case 25: Deck[i].setID(i); Deck[i].setName("queen"); Deck[i].setValue(10); Deck[i].setSuit("Diamonds"); break;
            case 26: Deck[i].setID(i); Deck[i].setName("king"); Deck[i].setValue(10); Deck[i].setSuit("Diamonds"); break;

            case 27: Deck[i].setID(i); Deck[i].setName("ace"); Deck[i].setValue(11); Deck[i].setSuit("Spades");Deck[i].setAceValue(3); break;
            case 28: Deck[i].setID(i); Deck[i].setName("two"); Deck[i].setValue(2); Deck[i].setSuit("Spades"); break;
            case 29: Deck[i].setID(i); Deck[i].setName("three"); Deck[i].setValue(3); Deck[i].setSuit("Spades"); break;
            case 30: Deck[i].setID(i); Deck[i].setName("four"); Deck[i].setValue(4); Deck[i].setSuit("Spades"); break;
            case 31: Deck[i].setID(i); Deck[i].setName("five"); Deck[i].setValue(5); Deck[i].setSuit("Spades"); break;
            case 32: Deck[i].setID(i); Deck[i].setName("six"); Deck[i].setValue(6); Deck[i].setSuit("Spades"); break;
            case 33: Deck[i].setID(i); Deck[i].setName("seven"); Deck[i].setValue(7); Deck[i].setSuit("Spades"); break;
            case 34: Deck[i].setID(i); Deck[i].setName("eight"); Deck[i].setValue(8); Deck[i].setSuit("Spades"); break;
            case 35: Deck[i].setID(i); Deck[i].setName("nine"); Deck[i].setValue(9); Deck[i].setSuit("Spades"); break;
            case 36: Deck[i].setID(i); Deck[i].setName("ten"); Deck[i].setValue(10); Deck[i].setSuit("Spades"); break;
            case 37: Deck[i].setID(i); Deck[i].setName("jack"); Deck[i].setValue(10); Deck[i].setSuit("Spades"); break;
            case 38: Deck[i].setID(i); Deck[i].setName("queen"); Deck[i].setValue(10); Deck[i].setSuit("Spades"); break;
            case 39: Deck[i].setID(i); Deck[i].setName("king"); Deck[i].setValue(10); Deck[i].setSuit("Spades"); break;

            case 40: Deck[i].setID(i); Deck[i].setName("ace"); Deck[i].setValue(11); Deck[i].setSuit("Clubs"); Deck[i].setAceValue(3); break;
            case 41: Deck[i].setID(i); Deck[i].setName("two"); Deck[i].setValue(2); Deck[i].setSuit("Clubs"); break;
            case 42: Deck[i].setID(i); Deck[i].setName("three"); Deck[i].setValue(3); Deck[i].setSuit("Clubs"); break;
            case 43: Deck[i].setID(i); Deck[i].setName("four"); Deck[i].setValue(4); Deck[i].setSuit("Clubs"); break;
            case 44: Deck[i].setID(i); Deck[i].setName("five"); Deck[i].setValue(5); Deck[i].setSuit("Clubs"); break;
            case 45: Deck[i].setID(i); Deck[i].setName("six"); Deck[i].setValue(6); Deck[i].setSuit("Clubs"); break;
            case 46: Deck[i].setID(i); Deck[i].setName("seven"); Deck[i].setValue(7); Deck[i].setSuit("Clubs"); break;
            case 47: Deck[i].setID(i); Deck[i].setName("eight"); Deck[i].setValue(8); Deck[i].setSuit("Clubs"); break;
            case 48: Deck[i].setID(i); Deck[i].setName("nine"); Deck[i].setValue(9); Deck[i].setSuit("Clubs"); break;
            case 49: Deck[i].setID(i); Deck[i].setName("ten"); Deck[i].setValue(10); Deck[i].setSuit("Clubs"); break;
            case 50: Deck[i].setID(i); Deck[i].setName("jack"); Deck[i].setValue(10); Deck[i].setSuit("Clubs"); break;
            case 51: Deck[i].setID(i); Deck[i].setName("queen"); Deck[i].setValue(10); Deck[i].setSuit("Clubs"); break;
            //case 52: Deck[i].setID(i); Deck[i].setName( "king"); Deck[i].setValue(10); Deck[i].setSuit("Clubs"); break;

            default: std::cout << "No card found" << std::endl;    
        }
    }
    
    // Display Loop
    //for(int i=0; i < 52; i++ ) { Deck[i].Display(); };

    std::cout << "Please Enter your Name for regulation purposes" << std::endl; 
    std::cin >> userName; 

    int c = 0; 
    // ========================================================================================================================================================================================================================

  while (keepPlaying) {
    // Mix up the deck 
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle( Deck.begin(), Deck.end(), std::default_random_engine(seed) );

    while( c != 53) {
      

      // Handing out First Card to player
      std::cout << "Your first Card is: " << Deck[c].getName() << " of " << Deck[c].getSuit() << std::endl; 

      // Checking if it is an Ace, if it is then you need to flag it for 1 or 11. 
      if (Deck[c].getName() == "ace") {
          temp = Deck[c].getAceValue();
        switch (temp) {
          case 1: playerAceH = Deck[c].getValue(); break; 
          case 2: playerAceD = Deck[c].getValue(); break;
          case 3: playerAceS = Deck[c].getValue(); std::cout << "Entered ace of spades" << std::endl;  break;
          case 4: playerAceC = Deck[c].getValue(); std::cout << "Entered ace of clubs" << std::endl;  break;
          default : break;
        }
      } else {
        //std::cout << playerCard1 << std::endl;
        playerCard1 = playerCard1 + Deck[c].getValue(); 
        //std::cout << playerCard1 << std::endl;

      }
      c++;

      // Handing out Second Card to player
      std::cout << "Your second Card is: " << Deck[c].getName() << " of " << Deck[c].getSuit() << std::endl; 

      // Checking if it is an Ace, if it is then you need to flag it for 1 or 11. 
      if (Deck[c].getName() == "ace") {
        temp = Deck[c].getAceValue();
        switch (temp) {
          case 1: playerAceH = Deck[c].getValue(); std::cout << "Entered ace of hearts" << std::endl; break; 
          case 2: playerAceD = Deck[c].getValue(); std::cout << "Entered ace of diamonds" << std::endl;  break;
          case 3: playerAceS = Deck[c].getValue(); std::cout << "Entered ace of spades" << std::endl; break;
          case 4: playerAceC = Deck[c].getValue(); std::cout << "Entered ace of clubs" << std::endl; break;
          default : break;
        }
      } else {
        //std::cout << playerCard2 << std::endl;

        playerCard2 = playerCard2 + Deck[c].getValue(); 
        //std::cout << playerCard2 << std::endl;

      }
      c++;

      // Dealers Section 
      if (Deck[c].getName() == "ace") {
        temp = Deck[c].getAceValue();
        switch (temp) {
          case 1: dealerAceH = Deck[c].getValue(); break; 
          case 2: dealerAceD = Deck[c].getValue(); break;
          case 3: dealerAceS = Deck[c].getValue(); break;
          case 4: dealerAceC = Deck[c].getValue(); break;
          default : break;
        }
      } else {
        dealerCard1 = dealerCard1 + Deck[c].getValue(); 
      }
      c++;

      std::cout << "Dealers face up card is: " << Deck[c].getName() << " of " << Deck[c].getSuit() << std::endl; 
      if (Deck[c].getName() == "ace") {
        temp = Deck[c].getAceValue();
        switch (temp) {
          case 1: dealerAceH = Deck[c].getValue(); break; 
          case 2: dealerAceD = Deck[c].getValue(); break;
          case 3: dealerAceS = Deck[c].getValue(); break;
          case 4: dealerAceC = Deck[c].getValue(); break;
          default : break;
        }
      } else {
        dealerCard2 = dealerCard2 + Deck[c].getValue(); 
      }
      c++;

      std::cout << std::endl; std::cout << std::endl;
      

      std::cout << "Your hand value is: " << playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC << std::endl; 
      //std::cout << "Dealers hand value is: " << dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC << std::endl; 

      

      if (playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC == 21 ) {
        std::cout << "BLACK JACK! for Player " << std::endl; 
        break;
      }

      
      std::cout << "Do you want to hit or stay? H / S" << std::endl; 
      std::cin >> answer; 

      

      // ========================================================================================================================================================================================================================
      // Loop for Player -------------------------------------------
      while (answer == "H" || answer == "h") {
        std::cout << "Going Through Player loop" << std::endl;
        std::cout << "Your new Card is: " << Deck[c].getName() << " of " << Deck[c].getSuit() << std::endl; 

        if (Deck[c].getName() == "ace") {
          temp = Deck[c].getAceValue();
          switch (temp) {
            case 1: playerAceH = Deck[c].getValue(); std::cout << "Entered ace of hearts" << std::endl;break; 
            case 2: playerAceD = Deck[c].getValue(); std::cout << "Entered ace of diamonds" << std::endl;break;
            case 3: playerAceS = Deck[c].getValue(); std::cout << "Entered ace of spades" << std::endl;break;
            case 4: playerAceC = Deck[c].getValue(); std::cout << "Entered ace of clubs" << std::endl;break;
            default : break;
          }
        } else {
          playerCard1 = playerCard1 + Deck[c].getValue(); 
        }
        c++;
          
        if (playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC > 21) {
          if ( playerAceH == 11) {
            playerAceH = 1;
          } else if (playerAceD == 11) {
            playerAceD = 1;
          } else if ( playerAceS == 11){
            playerAceS = 1;
          } else if (playerAceC == 11 ){
            playerAceC = 1;
          } 
          
        }
            
        if (playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC > 21) { 
          std::cout << "Your hand value is: " << playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC << std::endl;
          std::cout << "Player BUST! " << std::endl; 
          playerCard1 = 0;
          playerCard2 = 0;
          playerAceH = 0;
          playerAceD = 0;
          playerAceS = 0;
          playerAceC = 0;

          break; 
        } else if (playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC == 21) {
          std::cout << "Player hit BLACK JACK! " << std::endl;
          
          break;
        } else { 

          std::cout << "Your hand value is: " << playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC << std::endl;
          std::cout << "Do you want to hit or stay? H / S" << std::endl; 
          std::cin >> answer;
          std::cout << answer;
        }
        if (answer == "S" || answer == "s") {break;}

      } // End of Player Loop 
        answer = "s";

        std::cout << "Your final hand value is: " << playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC << std::endl;
        std::cout << std::endl;
        std::cout << "Dealers hand value is: " << dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC << std::endl; 
        std::cout << std::endl;
    



      playerFinalHand = playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC; 
      dealerFinalHand = dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC;
      //std::cout << "playerFinalHand: " << playerFinalHand << " dealerFinalHand: " << dealerFinalHand <<  std::endl;
      //std::cout << answer <<  std::endl;

      if (dealerFinalHand < playerFinalHand) { answer = "H";}
      // ========================================================================================================================================================================================================================
      //std::cout << answer << std::endl;

      if (dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC == 21 ) {
        std::cout << "BLACK JACK! for Dealer Wins" << std::endl; 
        break;
      }

      // Loop for Dealer
      while (answer == "H" || answer == "h") {
            //std::cout << "Going Through dealer loop" << std::endl;
            std::cout << "Dealers new Card is: " << Deck[c].getName() << " of " << Deck[c].getSuit() << std::endl; 
            if (Deck[c].getName() == "ace") {
              temp = Deck[c].getAceValue();
              switch (temp) {
                case 1: dealerAceH = Deck[c].getValue(); std::cout << "Entered ace of hearts" << std::endl;break; 
                case 2: dealerAceD = Deck[c].getValue(); std::cout << "Entered ace of diamonds" << std::endl;break;
                case 3: dealerAceS = Deck[c].getValue(); std::cout << "Entered ace of spades" << std::endl;break;
                case 4: dealerAceC = Deck[c].getValue(); std::cout << "Entered ace of clubs" << std::endl;break;
                default : break;
              }
            } else {
              dealerCard1 = dealerCard1 + Deck[c].getValue(); 
            }
            c++;
          
          // reSetting the Aces
            if (dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC > 21) {
              if ( dealerAceH == 11) {
                dealerAceH = 1;
              } else if (dealerAceD == 11) {
                dealerAceD = 1;
              } else if ( dealerAceS == 11){
                dealerAceS = 1;
              } else if (dealerAceC == 11 ){
                dealerAceC = 1;
              } 
              
            }
            
            //Dealer Bust
            if (dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC  > 21) { 
              std::cout << "Dealer BUST! " << std::endl; 
              
              break; 
            } 
            // Dealer Black Jack
            else if (dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC == 21) {
              std::cout << "Dealer hit BLACK JACK! " << std::endl;
              
              break;
            } else { 

              std::cout << "Dealers hand value is: " << dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC << std::endl;
              dealerFinalHand = dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC;

              std::cout << "Do you want to hit or stay? H / S" << std::endl; 
              // need to do if statement for H /S 
            if (dealerFinalHand < playerFinalHand) { answer = "H";}
            if (dealerFinalHand >= playerFinalHand) { answer = "S";}

            if (dealerFinalHand == 21) { std::cout << "BLACK JACK! for Dealer " << std::endl; }
            

              
          }
          if (answer == "S" || answer == "s") {break;}
        }

            if (dealerFinalHand < playerFinalHand) { 
              std::cout << "Player wins! " << std::endl; 
              playersScore = playersScore + 50;
            } else if (dealerFinalHand > playerFinalHand) { 
              std::cout << "Dealer wins! " << std::endl; 
              playersScore = playersScore - 50;
            }

        std::cout << "Your end hand value is: " << playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC << std::endl;
        std::cout << "Dealers end hand value is: " << dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;

        playerCard1 = 0;
        playerCard2 = 0;
        playerAceH = 0;
        playerAceD = 0;
        playerAceS = 0;
        playerAceC = 0;
        dealerCard1 = 0;
        dealerCard2 = 0;
        dealerAceH = 0;
        dealerAceD = 0;
        dealerAceS = 0;
        dealerAceC = 0;

        std::cout << "Do you want to play another hand? Y / N " << std::endl; 
        std::cin >> nextHand; 
        if (nextHand == "N" || nextHand == "n") {break;}
    }
      // ========================================================================================================================================================================================================================

        // std::cout << "Your final hand value is: " << playerCard1 + playerCard2 + playerAceH + playerAceD + playerAceS + playerAceC << std::endl;
        // std::cout << "Dealers hand value is: " << dealerCard1 + dealerCard2 + dealerAceH + dealerAceD + dealerAceS + dealerAceC << std::endl;
        // playerCard1 = 0;
        // playerCard2 = 0;
        // playerAceH = 0;
        // playerAceD = 0;
        // playerAceS = 0;
        // playerAceC = 0;
        // dealerCard1 = 0;
        // dealerCard2 = 0;
        // dealerAceH = 0;
        // dealerAceD = 0;
        // dealerAceS = 0;
        // dealerAceC = 0;

      std::cout << std::endl;
      std::cout << std::endl;

      std::cout << "Starting next hand "<< std::endl;


      std::cout << "Do you want to play another deck? Y / N " <<std::endl; 
      std::cin >> answer;
      if (answer == "N" || answer == "n") {
        keepPlaying = false; 
      } else { 
        keepPlaying = true;
      }

  }

  std::cout << "Thanks for playing " << userName << "!" << std::endl;
  std::cout << "Your Score is: " << playersScore << std::endl; 

  return 0; 
}