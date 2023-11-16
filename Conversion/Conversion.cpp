#include<iostream>

using namespace std;

int main() {

	// convert EUR to USD using a conversion factor of 1.19 USD to 1 EUR

	const double usdPerEur{ 1.19 };

	double eur{ 0.0 };
	double usd{ 0.0 };

	cout << "Please enter an amount of money in EUR: ";
	cin >> eur;
	usd = eur * usdPerEur;
	cout << eur << " EUR is " << usd << " USD" << endl;

	return 0;
}