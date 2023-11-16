#include <iostream>

using namespace std;

int main() {

	// c++ will automatically converty a data type if possible, if not it will cause a compiler error
	// the conversion will attempt to convert a lower type in to a higher type.
	// lower types hold lower values. 
	// long double is a higher type than a double, which is higher than an int.
	// short and character types will be converted to int.

	// promotion is the conversion from a lower to a higher type. demotion is the opposite.

	2 * 5.2; 
	// 2 is promoted to 2.0

	int num{ 0 };
	
	num = 100.2; // in this case, 100.2 is demoted to 100 and then assigned to num

	cout << num << endl; // 100

	// the compiler can be explicitly told how to convert.

	int totalAmount{ 100 };
	int totalNumber{ 8 };
	double average{ 0.0 };

	average = totalAmount / totalNumber;
	cout << average << endl; // outputs 12, as the totalAmount and the totalNumber are both int, it assigns int to average.

	average = static_cast<double>(totalAmount) / totalNumber;
	cout << average << endl; // this outputs 12.5 because one of the opperands is now a double so it will retain that higher datatype.


	// ask a user for 3 integers, calculate the sum, and then calculate the average and display the results.

	//int num1{ 0 };
	//int num2{ 0 };
	//int num3{ 0 };

	int num1{}, num2{}, num3{}; // you can define several variables of one type at once
	const int count{ 3 };

	cout << "Please enter 3 integers: ";
	cin >> num1 >> num2 >> num3;

	int sum{ 0 };
	sum = num1 + num2 + num3;
	average = static_cast<double>(sum) / count;

	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;
	cout << "Num3: " << num3 << endl;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;

	// equality testing:
	// exp1 == exp2 will evalutate to a boolian. 

	bool result{ false };
	result = num1 == num2;

	cout << boolalpha; // this changes the 0 and 1 results from a bool to be true or false. This is part of the std namespace.

	cout << "\n testing num1==num2 is " << (result) << endl; // without boolalpha, 1 is true, 0 is false.
	// and int and a double can be compared by the same rules of type promotion as the operators above.

	// with relational operators (<, >, <=, etc) work the same as == in terms of outputting a bool. 
	// there is a three way operator, <=>, added in c++20 but I need to do some research on how to use it.

	// Logoical operators:
	// ! is not. This negates whatever the expression is. 
	// $$ is and
	// || is or
	// not is unary; and/or are binary.

	bool newResult{ !result }; // this is just the opposite of whatever result is. 

	// c++ will stop evaluating expressions if there is a result. 
	// ex: exp1 && exp2 && exp3 will stop evaluating if any of these are false, since && means any one part being false is a false statement.
	// exp1 || exp2 || exp3; if exp1 is true, it will stop evaluating for similar reasons as &&.

	return 0;
}

15 t t f 
age = 15
consent = t
ssn = t
accidents = f