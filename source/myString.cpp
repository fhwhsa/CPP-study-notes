#include "myString.h"

myString::myString(const char* s)
{
    if (s) 
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    else 
    {
        str = new char[1];
        str[0] = '\0';
    }
}

myString::myString(const myString& s)
{
    str = new char[strlen(s.c_str()) + 1];
    strcpy(str, s.c_str());
}

myString::~myString()
{
    delete[] str;
}

int myString::length() const
{
    return strlen(str);
}

bool myString::empty() const
{
    return strlen(str) == 0;
}

const char* myString::c_str() const
{
    return str;
}

myString& __doapl(myString* ths, const myString& s)
{
    // if (ths == *s) 

    char* str = new char[ths->length() + 1];
    strcpy(str, ths->str);
    delete[] ths->str;
    ths->str = new char[strlen(str) + s.length() + 1];
    strcpy(ths->str, str);
    strcpy(ths->str + strlen(str), s.c_str());
    return *ths;
}

myString& myString::operator= (const myString& s)
{
    if (this == &s)
        return *this;

    delete[] str;
    str = new char[strlen(s.c_str()) + 1];
    strcpy(str, s.c_str());
    return *this;
}

myString operator+ (const myString& a, const char* b)
{
    char* str = new char[a.length() + strlen(b) + 1];
    strcpy(str, a.c_str());
    strcpy(str + a.length(), b);
    return myString(str);
}

myString operator+ (const myString& a, const myString& b)
{
    char* str = new char[a.length() + b.length() + 1];
    strcpy(str, a.c_str());
    strcpy(str + a.length(), b.c_str());
    return myString(str);
}

myString& operator+= (myString& a, const char* b)
{
    return __doapl(&a, myString(b));
}

myString& operator+= (myString& a, const myString& b)
{
    return __doapl(&a, b);
}

ostream& operator<< (ostream& os, const myString& s)
{
    return os << s.c_str();
}

