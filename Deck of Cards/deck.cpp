#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "card.hpp"
#include "deck.hpp"

using namespace std;


DeckOfCards::DeckOfCards(){
for(int aFace{0}; aFace < 13; ++ aFace)
{
for(int aSuit{0}; aSuit< 4; ++aSuit)
{
Card myCard(aFace, aSuit);
deck.emplace_back(myCard);
}
}
current = 0;
}
void DeckOfCards::shuffle()
{
for (int i{0}; i <=100; i++)
{

int j = (rand()% 51);
int z = (rand()% 51);

Card temp = deck[j];
deck[j] = deck[z];
deck[z] = temp;
}
current = 0;
return;
}

Card DeckOfCards::dealCard()
  {
return deck[current++];
  }
  bool DeckOfCards::moreCards() const
  {
    return current <=51;
  }














