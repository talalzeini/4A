#pragma once
#include <vector>
#include "card.hpp"

using namespace std;

class DeckOfCards
{
public:
DeckOfCards();
void shuffle();
Card dealCard();
bool moreCards() const;

private:
vector< Card > deck;
unsigned current;
};



