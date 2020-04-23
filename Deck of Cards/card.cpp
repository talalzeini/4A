#include <iostream>
#include <string>
#include "card.hpp"
using namespace std;

Card::Card(int cardFace, int cardSuit)
{
suit = cardSuit;
face = cardFace;
}
const string Card::faceName[13]=
{
"Deuce", "Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace"
};
const string Card:: suitName[4]=
{
"Hearts", "Clubs", "Diamonds", "Spades"
}; 
string const Card:: toString(){
return faceName[face] + " of " + suitName[suit];
}
int Card::getFace() const
{
return face;
}
int Card::getSuit() const
{
return suit;
}


