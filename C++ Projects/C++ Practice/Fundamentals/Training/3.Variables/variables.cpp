#include <iostream>
#include <string>

int a,b = 5; // global variables accessible to all parts of the code. They're initiated at the begining and released when the program is exitted

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "a + b is " << a + b << std::endl;
    std::cout << "b - a is " << b - a << std::endl;
    std::cout << "flag is " << my_flag << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b-a (unsigned)= " << positive << std::endl;
    

    return 0;
}