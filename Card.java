//Kevin Malta, java_practice, 7/28/14
//Card.java, creates a class for a playing card

public class Card{
  
  private char number;
  private String suitType;
  
  public Card(char num, String suit){
    number = num;
    suitType = suit;
  }

  public char getNumber(){
    return number;
  }

  public String getSuitType(){
    return suitType;
  }
}