#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
protected:
    std::string name;
    std::string birth;
    std::string address;

public:
    void input();
    void output();
    Person();
};

#endif // PERSON_H
