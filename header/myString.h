#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream> 
#include <string.h>
using namespace std;

class myString
{
public:
    myString(const char* str = 0);
    myString(const myString& str);
    ~myString();

    int length() const;
    bool empty() const;
    const char* c_str() const;
    myString& operator= (const myString& str);

    /*
        当成员函数的const和non-const版本同时存在时，
        const对象会调用const版本，non-const只会调用non-const版本
    */
    char operator[] (size_t pos) const;
    char& operator[] (size_t pos);


private:
    char* str;

    friend char& getReference(myString* ths, size_t pos);
    friend myString& __doapl(myString* ths, const myString& s);
};

myString operator+ (const myString& a, const char* b);

myString operator+ (const myString& a, const myString& b);

myString& operator+= (myString& a, const char* b);

myString& operator+= (myString& a, const myString& b);

ostream& operator<< (ostream& os, const myString& s);

#endif