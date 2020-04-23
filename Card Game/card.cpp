#include <iostream>
#include <string>
#include "card.hpp"
#include "deck.hpp"
#include <array>
#include <iomanip>
using namespace std;

Card::Card(int cardFace, int cardSuit)
{
suit = cardSuit;
face = cardFace;
}
const string Card::faceName[13] = {"Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace"};
const string Card::suitName[4] = {"Hearts", "Clubs", "Diamonds", "Spades"
};
const string Card:: toString(){
return faceName[face] + " of " + suitName[suit];    
}
int Card::getFace()const {
    return face;
}
int Card::getSuit()const {
    return suit;
}
bool  Card  :: operator > (const Card& right) {
    if (face > right.face) return true;
    if (face < right.face) return false;
    return (suit>right.suit);
}
bool  Card  :: operator == (const Card& right) {
   return(face == right.face && suit == right.suit);
    

}
bool  Card  :: operator < (const Card& right) {
       if (face < right.face) return true;
    if (face > right.face) return false;
return (suit<right.suit);
}

