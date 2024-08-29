/*
	Andrew Banks 
	Computer Science Fall 2024
	Due: 9/3/2024
	Lab 1 - Lab 1 Introduction to C++ Programming
	This lab is a basic demo of the C++ language.


*/

//	This is a comment. Single line comments begin with a double forward slash (//).

/*	We are using a preprocessor directive here to include the iostream library. This is
	the input/output stream library. There exist many premade/precomplied libraries that
	can be helpful. We will extensively be using the collection of libraries known as
	the standard library which includes iostream.
*/
#include <iostream>		

/*	Begin the main function. Every C++ program must have a main function. This is where
	every C++ program will start. The int is a function return type.
*/
int main()
{
	// Using the standard namespace, use the cout method to output the string to the
	// standard output device (usually the screen, but not always).
	std::cout << "Hello World!" << std::endl;
	std::cout << "Blue" << std::endl;
	// Complete the function by returning the integer 0 to main. This tells is a way
	// of saying that the main function completed with no errors.
	return 0;
}
