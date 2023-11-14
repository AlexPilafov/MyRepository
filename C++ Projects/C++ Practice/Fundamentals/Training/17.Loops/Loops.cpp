#include <iostream>
#include <vector>

std::vector<int> numbers = { 12,25,31,47,58 };
float average;


int main()
{
	auto ptr = numbers.begin();

	//While loop
	while (ptr != numbers.end()) {
		std::cout << *ptr << " ";
		ptr = next(ptr, 1);
	}
	std::cout << std::endl;

	//Do While loop - reversed order
	int i = 4;
	do{
		 std::cout << numbers[i] << " ";
		 i--;
	} while (i >= 0);
	std::cout << std::endl;

	//For loop
	average = 0.0f;
	for (int i = 0; i < numbers.size(); i++)
		average += numbers[i];
	average /= numbers.size();
	std::cout << "Average: " << average << std::endl;


	return (0);
}

