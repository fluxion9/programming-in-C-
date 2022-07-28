# Comparing Two Numbers Using Relational Operators

The basics of decision making is using if statements. Which allows a program to make a decision based on the truth of falsity of some conditions. The Relational operators used in this program are `Binary Operators`. These operators need just two arguments and will give a true or false depending on the comparison. These Operators include:
+ `==` >For Equality
+ `!=` >For InEqualiy
+ `<` >For Greater than
+ `>` >For Less than
+ `<=` >For Less than or Equal to
+ `>=` >For Greater than or Equal to

When these operators are placed between two numbers they return a true or false depending on how the LHS relates with RHS.

### Example
+ ` 2 < 3 ` checks if 2 is less than 3 which will return true
+ ` 3 == ` checks if 3 is equal to 3 which will return true

if such expression are placed in if conditions like ` if (2 < 3) `, the binary relation when evaluted will yield true therefore the condition will yield to ` if (true)` then the statement under the condition will be executed. __Note:__ The task is executed only when the resulting expression is valid or true. if it is not true, the computer will skip or ignore.

### Example
The code:

` if (2 < 3)`

`	cout << "True!" << endl;` Will run, while:

` if (2 > 3)`

`	cout << "False!" << endl;` will be ignored because 2 __is not__ greater than 3



