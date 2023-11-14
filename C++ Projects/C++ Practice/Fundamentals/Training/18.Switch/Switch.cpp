#include <iostream>

float operand_1, operand_2, result;
char operation;



int main()
{
	std::cout << "Enter Operand 1: " << std::endl;
	std::cin >> operand_1;

	std::cout << "Choose operation: + - * /" << std::endl;
	std::cin >> operation;

	std::cout << "Enter Operand 2: " << std::endl;
	std::cin >> operand_2;

	

	switch (operation) {
	case '+':
		result = operand_1 + operand_2;
		break;
	case '-':
		result = operand_1 - operand_2;
		break;
	case '*':
		result = operand_1 * operand_2;
		break;
	case '/':
		result = operand_1 / operand_2;
		break;
	default:
		std::cout << "Invalid input." << std::endl;
		break;
	}

	std::cout << "The result is " << result << std::endl;



	return (0);
}
