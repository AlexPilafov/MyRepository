#include <iostream> //include directive is for known standard libraries and it doesn't require an extention
#include <cstdint>
#include <string>

#define CAPACITY 5000 // the define directive is called a macro and it instructs the preprocessor to find and replace. Defined constants are declared in all caps. 
                      // In this case, the preprocessor will search for CAPACITY and replace it with 5000.

int main(){
    const int members = 100; // constant value which cannot be changed
    std::cout << "The members are " << members << std::endl;

    return (0);
}