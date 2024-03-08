#include "myFraction.h"

myFraction::myFraction(double n, double d)
    : numerator(n), denominator(d)
{

}

double myFraction::getn() const 
{
    return numerator;
}

double myFraction::getd() const 
{
    return denominator;
}

myFraction::operator double() const 
{
    return numerator / denominator;
}

myFraction myFraction::operator+ (const myFraction& c) 
{
    double x = denominator * c.denominator;
    double y = numerator * c.denominator + c.numerator * denominator;
    return myFraction(y, x);
}

ostream& operator<< (ostream& os, const myFraction& c)
{
    return os << c.getn() << "/" << c.getd();
}