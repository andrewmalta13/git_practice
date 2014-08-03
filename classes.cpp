#include "classes.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

card::card(char num, string suit){
  number = num;
  suitType = suit;
}

char card::getNumber(){
  return number;
}

string card::getSuitType(){
  return suitType;
}



deck::deck(){
  for (int i = 0; i < 13; i++) {
    for (int j = 0; j < 4; j++) {
      deckOfCards.push_back(card(numArray[i], suitArray[j]));
    }
  }
}

deck::~deck(){
  while(deckOfCards.size()){
    deckOfCards.pop_back();
  }
}

void deck::shuffle(){
  int numShuffles = (rand() % 100) + 100; // generate a random number between 100 and 200
  int randIndexForShuffle1;
  int randIndexForShuffle2;

  

  for(int i =0; i < numShuffles; i++){
    randIndexForShuffle1 = rand() % 52;
    randIndexForShuffle2 = rand() % 52;

    card temp = card(deckOfCards[randIndexForShuffle1].getNumber(), deckOfCards[randIndexForShuffle1].getSuitType());


    deckOfCards[randIndexForShuffle1] = deckOfCards[randIndexForShuffle2];
    deckOfCards[randIndexForShuffle2] = temp;

  }

}

void deck::print(){
  for (int i = 0; i < 52; i++) {
      cout << deckOfCards[i].getNumber() << " of " << deckOfCards[i].getSuitType() << " Card Number: " << (i + 1) << endl;
    }
}




