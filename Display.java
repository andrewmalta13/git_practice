//Kevin Malta, java_practice, 7/28/14
//Display, creates a class to print the deck of cards
//made in class Deck

public class Display{

  public static void main(String [] args) {
    Deck d = new Deck();
    d.shuffle();
    d.print();
  }
}