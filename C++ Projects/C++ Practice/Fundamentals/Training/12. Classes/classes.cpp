#include <iostream>
#include <string>

enum cow_purpose {dairy, meat, hide, pet}; // constant type enum
class cow{
public: // public members, including constructor, getters and setters
    cow(std::string name_i, int age_i, unsigned char purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    unsigned char getPurpose(){
        return purpose;
    }
    void setAge(int new_age){
        age = new_age;
    }
    void setName(std::string new_name){
        name = new_name;
    }
    void setPurpose(unsigned char new_purpose){
        purpose = new_purpose;
    }
private:
    std::string name;
    int age;
    unsigned char purpose;
};
    
int main(){
    
    cow my_cow("Hildy", 7, pet);
    my_cow.setName("Milka");
    my_cow.setAge(12);
    my_cow.setPurpose(meat);
    std::cout << my_cow.getName() << " is a type " << (int)my_cow.getPurpose() << " cow." << std::endl;
    std::cout << my_cow.getName() << " is " << my_cow.getAge() << " years old." << std::endl;


    return (0);
}