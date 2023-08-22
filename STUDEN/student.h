#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "../person/person.h" // Đường dẫn tương đối đến tệp person.h
#include "../faculty/faculty.h"
class Faculty;
class Student : public Person
{
    Faculty y;
    std::string classs;
    float core;

public:
    void input();
    void output();
    Student();
};

#endif // STUDENT_H
