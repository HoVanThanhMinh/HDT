#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
class Faculty;

class School
{
    std::string name;
    float date;
    friend class Faculty;
};

#endif // SCHOOL_H
