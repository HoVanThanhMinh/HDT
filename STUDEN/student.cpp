#include "student.h"
#include "../faculty/faculty.h"
#include <iostream>
Student::Student() : classs(""), core(0)
{
    // Khởi tạo giá trị mặc định cho constructor của Student
}

void Student::input()
{
    Person::input();
    y.input();
    std::cout << "Class person: ";
    std::cin.ignore();
    getline(std::cin, classs);
    std::cout << "Score person: ";
    std::cin >> core;
    std::cin.ignore();
}

void Student::output()
{
    Person::output();
    y.output();
    std::cout << "Class Person: " << classs << std::endl;
    std::cout << "Score Person: " << core << std::endl;
}
