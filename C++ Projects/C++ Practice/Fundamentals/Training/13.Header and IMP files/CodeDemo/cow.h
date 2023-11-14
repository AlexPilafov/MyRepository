#pragma once

#ifndef COW_H
#define COW_H
#include <string>

enum cow_purpose {dairy, meat, hide, pet}; // constant type enum

class cow{
public: // public members, including constructor, getters and setters
    cow(std::string name_i, int age_i, unsigned char purpose_i);
    std::string getName();
    int getAge();
    unsigned char getPurpose();
    void setAge(int new_age);
    void setName(std::string new_name);
    void setPurpose(unsigned char new_purpose);
private:
    std::string name;
    int age;
    unsigned char purpose;
};

#endif // COW_H