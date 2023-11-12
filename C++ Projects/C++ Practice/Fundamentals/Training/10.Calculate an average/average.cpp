#include <iostream>
#include <array>

int main(){
    const int NUMBERS = 5;
    int array[NUMBERS];
    for(int i = 0; i < NUMBERS; i++){
        int temp_number;
        std::cout << "Input a number and press 'Enter'" << std::endl;
        std::cin >> temp_number;
        array[i] = temp_number; 
    }
    float result = array[0] + array[1] + array[2] + array[3] + array[4];
    result = result / NUMBERS;
    std::cout << "The average of these numbers is: " << result << std::endl;
    return (0);
}