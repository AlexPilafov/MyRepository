#include <iostream>
#include <string>
#include <cstring> // c in the begining means that this is part of the C library

const int LENGTH1 = 25;

char array_str1[LENGTH1] = "Hey guys!";
char array_str2[] = "What's up?";

std::string std_str1 = "Hey everybody!";
std::string std_str2 = "How's the going?";

int main(){
    strcat_s(array_str1, LENGTH1, array_str2);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;
    //Strings are char arrays. The string library gives us more flexibility when working with text and it gives us multiple functions to format.

    return (0);
}