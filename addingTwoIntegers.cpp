#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int integer1; //holds the first number entered by user
	int integer2; //holds the second number entered by user
	int sum; //holds the sum or result after addition

	cout << "Enter first integer: "; //promp user
	cin >> integer1; //read input

	cout << "Enter second integer: "; //prompt user
	cin >> integer2; //read input

	sum = integer1 + integer2; // add and assign result to sum

	cout << "Sum is " << sum << endl; // print sum

	return 0;
}



