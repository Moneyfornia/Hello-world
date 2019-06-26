// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "doublecalc.h"
/*header file contents: 
#ifndef DOUBLECALC_H
#define DOUBLECALC_H
#include <iostream>
bool isValid(double, char);
double performOperation(double, double, char);
#endif
*/

int main()
{
	std::cout << "Question 3 Program \n";
	std::cout << "Enter first double value: \n";
	double x{};
	std::cin >> x;
	std::cout << "Enter second double value: \n";
	double y{};
	std::cin >> y;
	std::cout << "Enter an arithmetic operator( + , * , - or / ) : \n";
	char xyOperator{};
	std::cin >> xyOperator;
	double xyResult{};
	if (isValid(y, xyOperator)) // checks whether the operation requested is valid, and if it is, performs it
	{
		xyResult = (performOperation(x, y, xyOperator));
		std::cout << x << xyOperator << y << "=" << xyResult << '\n';
	}



	return 0;
}
bool isValid(double y, char xyOperator) // checks if the user is trying to divide by zero or is using an incorrect operator
{
	bool validFlag{};
	if ((xyOperator == '+') || (xyOperator == '-') || (xyOperator == '*'))
		validFlag = true;
	else if (xyOperator == '/')
	{
		if (y == 0.0)
		{
			validFlag = false;
			std::cout << "Dividing by zero is not allowed.\n";
		}
			else
			validFlag = true;
	}
	else
	{
		validFlag = false;
	}
	return validFlag;
}
double performOperation(double x, double y, char xyOperator)
{
	double xyResult{};
	if(xyOperator == '+')
		xyResult = x + y;
	else if(xyOperator == '-')
		xyResult = x - y;
	else if (xyOperator == '*')
		xyResult = x * y;
	else if (xyOperator == '/')
		xyResult = x / y;

	return xyResult;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
