#include "io.h"
#include <iostream>

int userValueInput() {
	std::cout << "Please enter a value: ";

	int x{};
	std::cin >> x;

	return x;
}

char userOperatorInput() {
	std::cout << "Please enter a mathematical operator: ";

	char y{};
	std::cin >> y;

	return y;
}

int calculatorFunc(int valOne, int valTwo, char mathsOperator) {
	if (mathsOperator == '+')
		return valOne + valTwo;
	else if (mathsOperator == '-')
		return valOne - valTwo;
	else if (mathsOperator == '*')
		return valOne * valTwo;
	else if (mathsOperator == '/')
		return valOne / valTwo;
	else
		std::cout << "You entered an invalid operator BOO!\n";
	return 0;


}