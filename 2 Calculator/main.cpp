#include "io.h"
#include <iostream>



int main() {
	int userValueOne{ userValueInput() };
	char userOperator{ userOperatorInput() };
	int userValueTwo{ userValueInput() };

	int finalValue{ calculatorFunc(userValueOne, userValueTwo, userOperator) };
	if (userOperator == '+' || userOperator == '-' || userOperator == '*' || userOperator == '/')
		std::cout << userValueOne << userOperator << userValueTwo << "=" << finalValue;
	else
		return 0;
}