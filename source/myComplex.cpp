#include "myComplex.h"

myComplex::myComplex(double r, double i)
    : re(r), im(i)
{

}

int myComplex::real() const
{
    return re;
}

int myComplex::imag() const 
{
    return im;
}

myComplex myComplex::conj()
{
    return myComplex(re, -im);
}

myComplex& __doapl(myComplex* ths, const myComplex& c, int type)
{
    if (type == 0) //+=
    {
        ths->re += c.re;
        ths->im += c.im;
    }
    else 
    {
        ths->re -= c.re;
        ths->im -= c.im;
    }
    return *ths;
}

myComplex operator+ (const myComplex& c)
{
    return c;
}

myComplex operator- (const myComplex& c)
{
    return myComplex(-c.real(), -c.imag());
}

myComplex operator+ (double a, const myComplex& b)
{
    return myComplex(a + b.real(), b.imag());
}

myComplex operator+ (const myComplex& a, double b)
{
    return myComplex(a.real() + b, a.imag());
}

myComplex operator+ (const myComplex& a, const myComplex& b)
{
    return myComplex(a.real() + b.real(), a.imag() + b.imag());
}

myComplex operator- (double a, const myComplex& b)
{
    return myComplex(a - b.real(), 0 - b.imag());
}

myComplex operator- (const myComplex& a, double b)
{
    return myComplex(a.real() - b, a.imag());
}

myComplex operator- (const myComplex& a, const myComplex& b)
{
    return myComplex(a.real() - b.real(), a.imag() - b.imag());
}

myComplex& operator+= (myComplex& a, double b)
{
    return __doapl(&a, myComplex(b), 0);
}

myComplex& operator+= (myComplex& a, const myComplex& b)
{
    return __doapl(&a, b, 0);
}

myComplex& operator-= (myComplex& a, double b)
{
    return __doapl(&a, myComplex(b), 1);
}

myComplex& operator-= (myComplex& a, const myComplex& b)
{
    return __doapl(&a, b, 1);
}

ostream& operator<< (ostream& os, const myComplex& c)
{
    return os << "(" << c.real() << "," << c.imag() << "i)";
}

bool operator== (const myComplex& a, const myComplex& b)
{
    return a.real() == b.real() && a.imag() == b.imag();
}

bool operator== (double a, const myComplex& b)
{
    return a == b.real() && b.imag() == 0;
}

bool operator== (const myComplex& a, double b)
{
    return b == a.real() && a.imag() == 0;
}
