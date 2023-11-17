#include <iostream>

// index based - starting from index 0
// fixed size -> if dynamic size is needed, we use vectors
// used to structure data from the same data type


int numbers[] = {12,2,3,4,5,25,7,-1,9}; // initializing the array with the data
int array_size = sizeof(numbers) / sizeof(numbers[0]);

int getSum(int numbers[], int array_size) {
    int result = 0;
    for (int i = 0; i < array_size; i++) {
        result += numbers[i];
    }
    return result;
}
int getMax(int numbers[], int array_size) {
    int max = numbers[0];
    for (int i = 0; i < array_size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}
int getMin(int numbers[], int array_size) {
    int min = numbers[0];
    for (int i = 0; i < array_size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}
bool findPrime(int numbers[], int array_size) {
    for (int i = 0; i < array_size; i++) {
        if (numbers[i] % 2 == 0) {
            return true;
        }
    }
    return false;
}
std::string booltoString(bool state) {
    if (state == true) {
        return "True";
    }
    else {
        return "False";
    }
}


int main()
{
    std::cout << "The Size is                         : " << array_size << std::endl;
    std::cout << "The Sum is                          : " << getSum(numbers,array_size) << std::endl;
    std::cout << "The MAX number is                   : " << getMax(numbers, array_size) << std::endl;
    std::cout << "The MIN number is                   : " << getMin(numbers, array_size) << std::endl;
    std::cout << "There are prime numbers in the array: " << booltoString(findPrime(numbers, array_size)) << std::endl;
    return (0);
}

