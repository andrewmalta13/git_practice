//Kevin Malta, java_practice, 7/28/14
//Deck, creates a class calling Card to
//make a 52 card playing deck

import java.util.*;

public class Deck{

  private Random rand = new Random();
  private ArrayList<Card> deckOfCards = new ArrayList<Card>();

  public static String [] suitArray = {"Diamonds", "Clubs", "Hearts", "Spades"};
  public static char [] numArray = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 
                                    'T', 'J', 'Q', 'K'};
  public Deck() {

    for (int i = 0; i < 13; i++) {

      for (int j = 0; j < 4; j++) {
        deckOfCards.add(new Card(numArray[i], suitArray[j]));
      }
    }
  }

  public void shuffle() {
    int numShuffles = rand.nextInt(100) + 100;
    int randIndexForShuffle1;
    int randIndexForShuffle2;
    Card temp;
    for (int i = 0; i < numShuffles; i++) {
      randIndexForShuffle1 = rand.nextInt(52);
      randIndexForShuffle2 = rand.nextInt(52);
      temp = deckOfCards.get(randIndexForShuffle1);
      deckOfCards.set(randIndexForShuffle1, deckOfCards.get(randIndexForShuffle2));
      deckOfCards.set(randIndexForShuffle2, temp);
    }
  }

  public void print() {

    for (int i = 0; i < 52; i++) {
      System.out.println(deckOfCards.get(i).getNumber() + " of " + deckOfCards.get(i).getSuitType() + " Card Number: " + (i + 1));
    }
  }
}
