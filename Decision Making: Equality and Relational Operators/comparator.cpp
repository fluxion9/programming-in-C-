#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1;
	int num2;

	cout << "Enter two integers and i will tell you \n" << "the relationship the satisty: ";
	cin >> num1 >> num2; //read two integers
	
	if(num1 == num2)
		cout << num1 << " is equal to " << num2 << endl;

	if(num1 != num2)
		cout << num1 << " is not equal to " << num2 << endl;

	if(num1 < num2)
		cout << num1 << " is less than " << num2 << endl;

	if(num1 > num2)
		cout << num1 << " is greater than " << num2 << endl;

	if(num1 <= num2)
		cout << num1 << " is less than or equal to " << num2 << endl;

	if(num1 >= num2)
		cout << num1 << " is greater than or equal to " << num2 << endl;

	return 0;
}
