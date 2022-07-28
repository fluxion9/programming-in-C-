# Taking Inputs `std::cin`
The Class method for accepting input from the keyboard is `std::cin`
When the computer runs a line of code with `std::cin`, it will wait for the user to input something before moving to the next line. The data direction sysmbol for `std::cin` is `>>`.
This symbol is pointing towards a variable or storage location in the computer. In `input.cpp`, the variable used is of integer type called `age` and declared in line 5. Therefore `std::cin` points to `age` as in `std::cin >> age`

## Prompts
To prompt a user, we'll have to use `std::cout` before calling `std::cin` so that the user will know that the program is requiring user input as shown in line 6 `std::cout << "What is your age? \n";`


