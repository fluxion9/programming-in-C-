//Program to execute a condition based on number intervals using relational operators

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int input;
	int low = 10, high = 30;
	cout << "Enter a number: ";
	cin >> input;

	if( input > low && input < high )
		cout << "The number "<< input << " is in the the closed interval (10, 30)." << endl;
	if( input >= low && input <= high )
		cout << "The number " << input << " is in the open interval [10, 30]." << endl;
	return 0;
}
