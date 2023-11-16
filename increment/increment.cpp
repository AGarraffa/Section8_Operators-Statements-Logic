#include <iostream>

using namespace std;

int main() {

	int counter{ 10 };
	int result{ 0 };

	cout << "Counter: " << counter << endl; // 10

	counter++;
	cout << "Counter: " << counter << endl; // 11

	++counter;
	cout << "Counter: " << counter << endl; // 12

	// as a stand alone statement, the prefix or postfix notation of ++ results in the same thing

	counter = 10;
	cout << "\nCounter: " << counter << endl; // 10

	result = ++counter; // in this case, counter is incremented by 1, and then assigned to result
	cout << "Counter: " << counter << endl; // 11
	cout << "Result: " << result << endl; // 11


	counter = 10;
	result = 0;
	cout << "\nCounter: " << counter << endl; // 10

	result = counter++; // the postfix assigns counter to result BEFORE incrementing it by 1
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	counter = 10;
	result = 0;
	cout << "\nCounter: " << counter << endl; //10

	result = ++counter + 10; // this increments counter, and then adds 10 and assigns to result

	cout << "Counter: " << counter << endl; // 11
	cout << "Result: " << result << endl; // 21

	counter = 10;
	result = 0;
	cout << "\nCounter: " << counter << endl; // 10

	result = counter++ + 10; // this adds 10 to counter and assigns to result, and then increments counter
	cout << "Counter: " << counter << endl; // 11
	cout << "Result: " << result << endl; // 20 
 
	return 0;
}