#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <array>
#include "card.hpp"
#include "deck.hpp"

using namespace std;

DeckOfCards::DeckOfCards(){
    
for(int face{0}; face < 13; ++face)
{
for(int suit{0}; suit< 4; ++suit)
{
Card myCard(face, suit);
deck.emplace_back(new Card(face, suit));
}
}
    current = 0;
}


void DeckOfCards::shuffle()
{
for (int i{0}; i<=100 ; i++)
{
current = 0;
int x = rand() % (51);
int y = rand() % (51);
Card* temp = deck[x];
deck[x] = deck[y];
deck[y] = temp;
}
}




Card* DeckOfCards::dealCard()
  {
return deck[current++];
  }
Card* DeckOfCards::getCard(size_t i)
  {
return deck[i];
  }

  bool DeckOfCards::moreCards()const
  {
    return current <= 51;
  }














