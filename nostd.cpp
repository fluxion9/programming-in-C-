//eliminating std namespace in program

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "The repetitive use of std:: is now eliminated! " << endl;
	cout << "you can now simply write: " << endl;
	cout << "1. cout << \"some message\" << endl; " << endl;
	cout << "2. cin >> some_variable; " << endl;
	return 0;
}
