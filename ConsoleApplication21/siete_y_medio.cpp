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
		Player user(100);
		Player dealer(900);
		int bet;
		string response;
		int umoney = user.get_money();
		int dmoney = dealer.get_money();
		

		cout << "You have " << "$" << user.get_money();

		cout << " Enter bet: ";
		cin >> bet;
		cout << endl;

   return 0;
}
