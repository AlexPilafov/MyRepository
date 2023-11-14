#include <iostream>

int a = 1023;
bool flag = true;
char letter = 'd';

int main()
{
	if (a > 1000)
		std::cout << "Warning! a is over 1000." << std::endl;

	if (a % 2)
		std::cout << "The number " << a << " is odd." << std::endl;
	else 
		std::cout << "The number " << a << " is even." << std::endl;

	std::cout << std::endl;
	std::cout << "The letter is " << letter << std::endl;
	if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' && letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U') {
		std::cout << "The letter " << letter << " is " << "not a vowel." << std::endl;
	}
	else {
		std::cout << "The letter " << letter << " is " << "a vowel." << std::endl;
	}
	
	if(flag)
		std::cout << "The flag is with state - true " << std::endl;
	else
		std::cout << "The flag is with state - false " << std::endl;

	return (0);
}