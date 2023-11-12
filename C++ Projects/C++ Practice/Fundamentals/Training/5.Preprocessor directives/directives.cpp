#include <iostream> //include directive is for known standard libraries and it doesn't require an extention
#include <cstdint>
#include <string>

#define CAPACITY 5000 // the define directive is called a macro and it instructs the preprocessor to find and replace. Defined constants are declared in all caps. 
                      // In this case, the preprocessor will search for CAPACITY and replace it with 5000.
#define DEBUG

int main(){
    std::cout << "The constant CAPACITY is equal to: " << CAPACITY << std::endl;
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl << "the DEBUG macro is running now, because its defined"<<std::endl;
#endif
    large += small; // ternary expression large = large + small
    std::cout << "The large integer is " << large << std::endl;

    return (0);
}