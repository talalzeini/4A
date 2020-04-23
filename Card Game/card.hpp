#include <iostream>
#pragma once
#include <string>
#include <iomanip>
#include <array>
using namespace std;

class Card
{
    private:
        
    int suit;
    int face;
    static const string suitName[];
    static const string faceName[];
    
public:
Card(int cardFace, int cardSuit);
    
int getSuit() const;
int getFace() const;
const string toString() ;
bool operator > (const Card& right);
bool operator == (const Card& right);
bool operator < (const Card& right);
};
