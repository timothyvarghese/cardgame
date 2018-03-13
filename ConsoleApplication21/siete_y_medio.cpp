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
int main(){
		Player user(100); // Create a user who is a player with initial cash of 100
		Player dealer(900); // Create a dealer who is also a player with cash of 900
		int bet; // variable that holds the users bet
		string response;
		int umoney = user.get_money();
		int dmoney = dealer.get_money();
		

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
		cout << "Your cards: \n";
		dealer.addHand(*d); // Add newly created card c to users Hand
		dealer.print_hand(); // Print users hand
		cout << "Do you want another card (y/n)?";
		cin >> response;
		while  (dealer.get_total() < 5.5)) {
			Card * c = new(Card);
			dealer.addHand(*c);
			cout << "User's Cards:  \n";
			dealer.print_hand();
		}



   return 0;
}
