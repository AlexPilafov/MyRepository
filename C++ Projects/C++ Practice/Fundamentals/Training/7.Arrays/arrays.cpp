#include <iostream> //include directive is for known standard libraries and it doesn't require an extention
#include <array>

const int AGE_LENGTH = 4;

int age[AGE_LENGTH];
float temp[] = {31.5, 32.7, 38.9};

int main(){
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "The array length is "<< AGE_LENGTH << std::endl;
    std::cout << "The index 0 member of the age array is "<< age[0] << std::endl;
    std::cout << "The index 1 member of the age array is "<< age[1] << std::endl;
    std::cout << "The index 2 member of the age array is "<< age[2] << std::endl;
    std::cout << "The index 3 member of the age array is "<< age[3] << std::endl;
    std::cout << std::endl;

    temp[3] = 41.7;

    std::cout << "The index 0 member of the temp array is "<< temp[0] << std::endl;
    std::cout << "The index 1 member of the temp array is "<< temp[1] << std::endl;
    std::cout << "The index 2 member of the temp array is "<< temp[2] << std::endl;
    std::cout << "The index 3 member of the temp array is "<< temp[3] << std::endl;
    std::cout << std::endl;

    return (0);
}