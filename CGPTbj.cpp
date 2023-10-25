#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));  // Seed random number generator with current time

    int player_total = 0;  // Total value of player's cards
    int dealer_total = 0;  // Total value of dealer's cards

    // Deal two cards to the player
    int card1 = rand() % 10 + 1;  // Random card value between 1 and 10
    int card2 = rand() % 10 + 1;
    player_total = card1 + card2;

    // Deal two cards to the dealer
    int dealer_card1 = rand() % 10 + 1;
    int dealer_card2 = rand() % 10 + 1;
    dealer_total = dealer_card1 + dealer_card2;

    // Show the player's cards and ask for input
    cout << "You were dealt a " << card1 << " and a " << card2 << ". Your total is " << player_total << "." << endl;
    cout << "The dealer's face-up card is a " << dealer_card1 << "." << endl;
    cout << "Do you want to hit or stand? (h/s)" << endl;

    // Get input from the player
    char input;
    cin >> input;

    // Continue dealing cards to the player until they choose to stand or bust
    while (input == 'h') {
        int new_card = rand() % 10 + 1;
        player_total += new_card;
        cout << "You were dealt a " << new_card << ". Your total is now " << player_total << "." << endl;

        if (player_total > 21) {
            cout << "Bust! You lose." << endl;
            return 0;
        }

        cout << "Do you want to hit or stand? (h/s)" << endl;
        cin >> input;
    }

    // Dealer's turn to draw cards
    cout << "The dealer reveals his second card: " << dealer_card2 << ". His total is " << dealer_total << "." << endl;

    while (dealer_total < 17) {
        int new_card = rand() % 10 + 1;
        dealer_total += new_card;
        cout << "Dealer hits and draws a " << new_card << ". His total is now " << dealer_total << "." << endl;
    }

    // Determine winner
    if (dealer_total > 21) {
        cout << "Dealer busts! You win." << endl;
    } else if (dealer_total > player_total) {
        cout << "Dealer wins." << endl;
    } else if (dealer_total < player_total) {
        cout << "You win!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
 
