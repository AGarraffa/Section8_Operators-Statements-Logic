#include <iostream>

using namespace std;

int main() {

	// operator groups:
	// assignment
	// arithmetic 
	// increment/decrement
	// relational
	// logical
	// member access
	// other

	// = is an assignment operator. It sets the value and doesn't check for equality
	// a = x; x is stored in a as long as a is assignable (ex not a literal or constant)

	int num1{ 10 }; // setting the value up front is initialization, NOT assignment
	int num2{ 20 };

	num1 = 100; // this is assignment

	num1 = num2 = 1000; // this is a valid way to assign multiple variables

	// the basic mathematic operators (+-*/) are overloaded. This means you can work with different numerical data types, like adding a float to an int
	// the modulus (%) only works with integers

	int result{ 0 };

	result = num1 / num2; // since result is an int, the value assigned to it will be 0, since the remainder is removed.




	return 0;
}