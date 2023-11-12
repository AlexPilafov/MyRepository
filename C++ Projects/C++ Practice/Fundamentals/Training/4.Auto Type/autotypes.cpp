#include <iostream>
#include <typeinfo>

auto a = 8; // int
auto b = 12345678901; // long int
auto c = 3.14f; // float
auto d = 3.14; // double by defalt
auto e = true; // bool
auto f = 'd'; // char

int main(){
    
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;
    return (0);
}