#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

#include <iostream>
using namespace std;

class myComplex
{
public:
    myComplex(double r = 0, double i = 0);
    int real() const;
    int imag() const;
    myComplex conj();

private:
    double re, im;

    friend myComplex& __doapl(myComplex* ths, const myComplex& c, int type);
};

myComplex operator+ (const myComplex& c);

myComplex operator- (const myComplex& c);

myComplex operator+ (double a, const myComplex& b);

myComplex operator+ (const myComplex& a, double b);

myComplex operator+ (const myComplex& a, const myComplex& b);

myComplex operator- (double a, const myComplex& b);

myComplex operator- (const myComplex& a, double b);

myComplex operator- (const myComplex& a, const myComplex& b);

myComplex& operator+= (myComplex& a, double b);

myComplex& operator+= (myComplex& a, const myComplex& b);

myComplex& operator-= (myComplex& a, double b);

myComplex& operator-= (myComplex& a, const myComplex& b);

ostream& operator<< (ostream& os, const myComplex& c);

bool operator== (const myComplex& a, const myComplex& b);

bool operator== (double a, const myComplex& b);

bool operator== (const myComplex& a, double b);

#endif