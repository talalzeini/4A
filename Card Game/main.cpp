#include <iostream>
#include <iomanip>
#include "card.hpp"
#include "deck.hpp"

using namespace std;

int main() {
  
    
    
size_t myCard;
int comCounter{ 0 };
int myCounter{ 0 };
DeckOfCards deck;
int i{ 0 };

for (; i < 10; i++) {
        size_t comCard = rand() % (51);
        deck.shuffle();
        do {
            cout << "Choose a card between 0 and 51:";
            cin >> myCard;
        } while (myCard < 0 || myCard > 51);
    

        cout << "Your card is the " << deck.getCard(myCard)->toString() << endl;
    cout << "The computer's card is the " << deck.getCard(comCard)->toString() << "."<<  endl;
    
        if (*(deck.getCard(myCard)) == *(deck.getCard(comCard))) {
            cout << "You and the computer have the same card. You each get a point" << endl;
            ++comCounter;
            ++myCounter;
            cout << "You: " << myCounter << "\t\t Com: " << comCounter << endl;
        }
        if (*(deck.getCard(myCard)) > *(deck.getCard(comCard))) {
            cout << "You win this round. You get 1 point. " << endl;
            ++myCounter;
            cout << "You: " << myCounter << "\t\t Com: " << comCounter << endl << endl;;

        }
        if (*(deck.getCard(myCard)) < *(deck.getCard(comCard))) {
            cout << "You lose this round. Computer gets 1 point." << endl;
            ++comCounter;
            cout << "You: " << myCounter << "\t\t Com: " << comCounter << endl << endl;
        }

        if (comCounter - myCounter == 2) {
            cout << "YOU LOSE! Computer wins.\nGAMEOVER" << endl;
            break;
        }
        if (comCounter - myCounter == -2) {
            cout << "YOU WIN!\nGAMEOVER" << endl;
            break;
        }
    }
    if (i == 10) {
            cout << "The is taking too long, nobody wins.\nGAMEOVER" << endl;
        }
}
