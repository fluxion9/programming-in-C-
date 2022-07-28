# Eliminating Namespaces `std::`
After writing a lot of code with `std::`, it will get quite boring and very redundant. A good way to eliminate the repetitive use of it is to declare it or let the program know that you will be using std namespaces for some `<stdio>` vlass methods. This is done with `using` keyword as shown in Lines 4, 5, 6.

`using std::cin;`
`using std::cout;`
`using std::endl;`

When such a declaration is made, you could just use them as `cin`, `cout` and `endl` without the need to attach `std::` `geez, such a diseases! :-/`


