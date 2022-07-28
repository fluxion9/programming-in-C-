# Getting Started with C++

## what is ` #include <iostream> `

This includes a library that that lets you use standard input output registers of a computer. Which includes data coming from keyboard, mouse, etc (Input)  and those going to monitors, printers, etc (Output).

## what is ` main()? `

Main is the function the computer looks for to execute programs. That is, the computer only executes instructions written under main or between the open and closed curly braces of main.

` main() { `
	
`	//only instructions here will be executed `

`} `

Any program written outside main() is syntax error and will not run. Except for preprocessors and object definitions.

## What is ` std::cout << `
std is a class which belongs to `<iostream>`. It is a prefix usually attached to the class methods under it. It inherits from `<stdio.h>` of C legacy. `cout` is a class method synonymous to `printf` from C. Data sent to it is streamed to the computer's output register and displayed on the screen as output. The `<<` symbol signifies Data Direction. which means what is sent to `cout` is by the right hand side of `<<`.

### Example

The code `std::cout << "Hello " << "World!";` will send “Hello” to `cout` then “World!”.


