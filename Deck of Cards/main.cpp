#include <iostream>
#include <iomanip>
#include "card.hpp"
#include "deck.hpp"

using namespace std;

int main() {
  
DeckOfCards deck;
//  for the shuffle
deck.shuffle();
while(deck.moreCards())
{
cout << deck.dealCard().toString();
cout << endl;
}
return 0;
}
