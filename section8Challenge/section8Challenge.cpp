/* write a program that asks the user to enter the following :
* an integer representing the number of cents
* 
* assume the number entered is >= 0.
* 
* using standard US coinage, display how best to provide that amount of cents to the user
*/

#include <iostream>
using namespace std;

int main() {


	int input{};

	cout << "Please enter a dollar amount in cents: ";
	cin >> input;
	
	cout << "Dollars: " << (input/100) << endl;
	input %= 100;
	cout << "Quarters: " << (input/25) << endl;
	input %=25;
	cout << "Dimes: " << (input/10) << endl; 
	input %=10;
	cout << "Nickels: " << (input/5) << endl;
	input %=5;
	cout << "Pennies: " << input << endl;


	// This code uses extra variables to do teh same thing. While I prefer this method as it maintains data integrity, it is less efficient as it needs more memory. 
	//int dollars{}, quarters{}, dimes{}, nickels{};
	
	//dollars = input / 100;
	//input%= 100;

	//cout << "Dollars: " << dollars << endl;

	//quarters = input / 25;

	//cout << "Quarters: " << quarters << endl;

	//input %= 25;
	//dimes = input / 10;

	//cout << "Dimes: " << dimes << endl;

	//input  %= 10;
	//nickels =  input / 5;

	//cout << "Nickels: " << nickels << endl;

	//input %= 5; 
	//
	//cout << "Pennies: " << input << endl;

	return 0;
}

