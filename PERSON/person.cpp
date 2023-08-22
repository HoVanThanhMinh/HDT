#include "person.h"
#include <iostream>

Person::Person() : name(""), birth(""), address("")
{
    // Khởi tạo giá trị mặc định cho constructor của Person
}

void Person::input()
{
    std::cout << "Person Name: ";
    getline(std::cin, name);
    std::cout << "Person Birth: ";
    getline(std::cin, birth);
    std::cout << "Person Address: ";
    getline(std::cin, address);
}

void Person::output()
{
    std::cout << "Person Name: " << name << std::endl;
    std::cout << "Person Birth: " << birth << std::endl;
    std::cout << "Person Address: " << address << std::endl;
}
