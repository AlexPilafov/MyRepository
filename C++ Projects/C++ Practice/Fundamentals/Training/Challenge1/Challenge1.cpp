#include <iostream>
#include "records.h"

//Creating objects from every class which we've created.
Student my_student(1, "Alexandar Pilafov");
Course my_course(7, "Programming", 10);
Grade my_grade(1, 1, 'A');

int main()
{
    std::cout << "Student name: " << my_student.get_name() << std::endl;
    std::cout << "Course name: " << my_course.get_name() << std::endl;
    std::cout << "Credits earned: " << my_course.get_credits() << std::endl;
    std::cout << "Grade: " << my_grade.get_grade() << std::endl;
    return (0);
}
