#include <iostream>
#include <string>
#include "cow.h"


int a = 37;
int *ptr;
cow *my_cow;


int main(){
    ptr = &a;
    std::cout << "The content of a is " << a << std::endl;
    std::cout << "ptr is pointing to address " << ptr << std::endl;
    std::cout << "The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "The address of ptr is " << &ptr << std::endl;
    std::cout << std::endl;

    my_cow = new cow("Hildy", 7, pet);
    my_cow->setName("Milka");
    my_cow->setAge(12);
    my_cow->setPurpose(meat);
    std::cout << my_cow->getName() << " is a type " << (int)my_cow->getPurpose() << " cow." << std::endl;
    std::cout << my_cow->getName() << " is " << my_cow->getAge() << " years old." << std::endl;
    // -> is a member of pointer operator
    delete my_cow; // the delete operator calls a special function in the class called a destructor, which is freeing dynamically allocated memory within objects

    return (0);
}