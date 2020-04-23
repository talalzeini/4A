#include <iostream>
#pragma once
#define card_hpp
#include <string>
#include <iomanip>
using namespace std;

class Card
{
public:
Card(int cardFace, int cardSuit);
int getSuit()const;
int getFace()const;
string const toString();

private:
int suit;
int face;


static const string suitName[];
static const string faceName[];

};
