#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

int main(){
    
    cow my_cow("Hildy", 7, pet);
    my_cow.setName("Milka");
    my_cow.setAge(12);
    my_cow.setPurpose(meat);
    std::cout << my_cow.getName() << " is a type " << (int)my_cow.getPurpose() << " cow." << std::endl;
    std::cout << my_cow.getName() << " is " << my_cow.getAge() << " years old." << std::endl;


    return (0);
}