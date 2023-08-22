#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include "../school/school.h"

class Faculty
{
    std::string name;
    float date;
    School x;

public:
    void input();
    void output();
};

#endif // FACULTY_H
