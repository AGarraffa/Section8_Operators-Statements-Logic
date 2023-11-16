#include<iostream>
using namespace std;

int main() {

	int age{ 15 };
	bool parentalConsent{ true };
	bool ssn{ true };
	bool accident{ false };

	cout << boolalpha;

	if (ssn && !accident && (age >= 18 || (age > 15 && parentalConsent))) {
		cout << "Yes, you can work";
	};

	return 0;
}