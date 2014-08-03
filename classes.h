#ifndef CLASSES_H
#define CLASSES_H
#include <string>
#include <vector>

using namespace std;

class card{
  private:
    char number;
    string suitType;

  public:
    card(char num, string suit);
    char getNumber();
    string getSuitType();

};

class deck{
   private:
     vector<card> deckOfCards;
     string suitArray[4] = {"Diamonds", "Clubs", "Hearts", "Spades"};
     char numArray[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 
                                    'T', 'J', 'Q', 'K'};

   public:
    deck();
    ~deck();
    void shuffle();
    void print();
    
};














#endif