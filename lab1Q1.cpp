#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    Playing cards are organized into 4 suits: clubs, diamonds, hearts and spades.
    
    Define a function print_suit that, given an integer between 1 and 4,
    prints the name of the corresponding suit of cards, using the ordering listed. 
        E.g., print_suit(2) prints diamonds.
*/

void print_suite ( int suiteNum ) {
    suiteNum -= 1;
    
    static const vector<string> suiteNames = {
        "Clubs",
        "Diamonds",
        "Hearts",
        "Spades"
    };

    static const vector<string> cardNames = {
        "Ace",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "10",
        "Jack",
        "Queen",
        "King"
    };

    for ( int i = 0; i < cardNames.size(); i++ ) {
        cout << cardNames.at( i ) << " of " << suiteNames.at( suiteNum );
    }
}

int main () {

}