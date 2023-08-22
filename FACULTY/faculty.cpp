#include "faculty.h"
#include "school.h"
#include <iostream>
void Faculty::input()
{
    std::cout << "Faculty name: ";
    getline(std::cin, name);
    std::cout << "Faculty date: ";
    std::cin >> date;
    std::cin.ignore();
    std::cout << "School: " << std::endl;
    std::cout << "School Name: ";
    getline(std::cin, x.name);
    std::cout << "School Date: ";
    std::cin >> x.date;
}

void Faculty::output()
{
    std::cout << "Faculty name: " << name << std::endl;
    std::cout << " Faculty date: " << date << std::endl;
    std::cout << "School: " << std::endl;
    std::cout << "School Name: " << x.name << std::endl;
    std::cout << "School Date: " << x.date << std::endl;
}
