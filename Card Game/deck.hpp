#pragma once
#include <vector>
#include "card.hpp"

using namespace std;

class DeckOfCards
{
public:
    
DeckOfCards(); // constructor initializes deck
void shuffle(); // shuffles cards in deck
Card *dealCard(); // deals a card from the deck
Card* getCard(size_t);
bool moreCards() const;
    
private:
vector <Card*> deck;
size_t current;
};
