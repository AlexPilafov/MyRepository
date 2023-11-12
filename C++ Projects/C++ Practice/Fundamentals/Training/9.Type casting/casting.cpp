//Type casting is specifying how to interpret a piece of data. We can convert data from one type to another with implicit, explicit conversion.
#include <iostream>
#include <cstdint>

float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main(){
    sgn = flt;
    unsgn = sgn;

    std::cout << "float: " << flt << std::endl;
    std::cout << "int32: " << sgn << std::endl;
    std::cout << "uint32: " << unsgn << std::endl;
    std::cout << std::endl;

    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5.0 / 9) * (fahrenheit - 32);

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius: " << celsius << std::endl;
    std::cout << std::endl;

    float weight = 10.99f;

    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer part: " << (int)weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;
    std::cout << std::endl;

    std::cout << "Double: " << (double)weight << std::endl;

    return (0);
}