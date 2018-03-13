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

		cout << " Enter bet: " // Prompting user for bet
		cin >> bet; // Reading In the Bet
		cout << endl;
		Card* c = new(Card); // Creates a Pointer to a new Card c 
		cout << "Your cards: \n"; 
		user.addHand(*c); // Add newly created card c to users Hand
		user.print_hand(); // Print users hand


   return 0;
}
