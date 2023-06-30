/*
 * Calculator.cpp
 *
 *  Date: Jun 26, 2023
 *  Author: Darren Nason
 */

#include <iostream>

using namespace std;

int main() // main method must return int otherwise compiler error
{
	char statement[100];
	double op1, op2; // changed to double to take in both double and int
	char operation;
	char answer='Y'; // fixed syntax error was missing (;) and datatype mismatch as it should be in single quotes rather than double quotes
	answer = tolower(answer); // changed this to lower case to fix infinite loop error
	while (answer=='y')
	{
	    cout << "Enter expression" << endl; 
		cin >> op1 >> operation >> op2; // logic error variables were flipped
		if (operation == '+')  // fixed syntax error as + was surrounded by double quotes needed to be single quotes
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // syntax error due to << operator was facing the wrong way like (>>) 
		
		else if (operation == '-')  // else if to fix logic for input validation
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // syntax error due to << operator was facing the wrong way like (>>) 
			
		else if (operation == '*') // else if to fix logic for input validation
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // syntax error missing (;) and wrong logic operator displayed / instead needed *
		
		else if (operation == '/') // else if to fix logic for input validation and no divide by zero error fixed
			if (op2!= 0)
			    cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // wrong logic operator displayed needed / insead of *
			else 
			cout << "invalid operation cannot divide by zero" << endl;

		else 
		    cout << "Invalid Operation" << endl; // to validate user input to avoid logic error
		
		cout << "Do you wish to evaluate another expression? " << endl;

		cin >> answer;
		answer = tolower(answer); // changed this to lower case logic error fix
	}
	return 0;
}
