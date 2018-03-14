#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main() {
	Player user(100); // Create a user who is a player with initial cash of 100
	Player dealer(900); // Create a dealer who is also a player with cash of 900
	int bet; // variable that holds the users bet
	string response;
	int umoney = user.get_money();
	int dmoney = dealer.get_money();

	while ((user.get_money() > 0) && (dealer.get_money() > 0))
	{

		cout << "You have " << "$" << user.get_money(); // Print out users money

		cout << " Enter bet: "; // Prompting user for bet
		cin >> bet; // Reading In the Bet
		cout << endl;

		// Create a hand for the user // 
		Card* c = new(Card); // Creates a Pointer to a new Card c 
		cout << "Your cards: \n";
		user.addHand(*c); // Add newly created card c to users Hand
		user.print_hand(); // Print users hand
		cout << "Do you want another card (y/n)?";
		cin >> response;
		while ((response == "y") && (user.get_total() < 7.5)) {
			Card * c = new(Card);
			user.addHand(*c);
			cout << "User's Cards:  \n";
			user.print_hand();
			cout << "Do you want another card (y/n)?";
			cin >> response;
		}

		// Create a hand for the  dealer // 
		Card* d = new(Card); // Creates a Pointer to a new Card c 
		cout << "Dealer's cards: \n";
		dealer.addHand(*d); // Add newly created card c to users Hand
		dealer.print_hand(); // Print users hand
		while (dealer.get_total() < 5.5) {
			Card * c = new(Card);
			dealer.addHand(*c);
			cout << "Dealer's Cards:  \n";
			dealer.print_hand();
		}
		int win; // Win= 1 for user win Win=2 for dealer win Win=3 for draw

		if (user.get_total() > 7.5)
			win = 2;
		else if (user.get_total() == dealer.get_total())
			win = 3;
		else if (dealer.get_total() > 7.5)
			win = 1;
		else
			win = 2;

		if (win == 1) // User wins
		{
			user.update_money(bet);
			dealer.update_money(-bet);
			cout << "You win $" << bet << endl;
		}
		else if (win == 2)// Dealer wins
		{
			user.update_money(-bet);
			dealer.update_money(-bet);
			cout << " Too bad. You lose $" << bet << endl;
		}
		else
			cout << "Nobody wins!";
		user.clearHand();  // Reset the users Hand
		dealer.clearHand(); // Reset the dealers Hand
	} // End of the while loop across all games
		
   return 0;
}
