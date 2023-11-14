#include "cow.h"

cow::cow(std::string name_i, int age_i, unsigned char purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::getName(){
    return name;
}
int cow::getAge(){
    return age;
}
unsigned char cow::getPurpose(){
    return purpose;
}
void cow::setAge(int new_age){
    age = new_age;
}
void cow::setName(std::string new_name){
    name = new_name;
}
void cow::setPurpose(unsigned char new_purpose){
    purpose = new_purpose;
}