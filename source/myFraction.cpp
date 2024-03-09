#include "myFraction.h"

template<typename T>
myFraction<T>::myFraction(T n, T d)
    : numerator(n), denominator(d)
{

}
template myFraction<float>::myFraction(float, float);
template myFraction<double>::myFraction(double, double);

template<typename T>
T myFraction<T>::getn() const 
{
    return numerator;
}
template float myFraction<float>::getn() const;
template double myFraction<double>::getn() const;


template<typename T>
T myFraction<T>::getd() const 
{
    return denominator;
}
template float myFraction<float>::getd() const;
template double myFraction<double>::getd() const;


template<typename T>
myFraction<T>::operator T() const 
{
    return numerator / denominator;
}
template myFraction<float>::operator float() const;
template myFraction<double>::operator double() const;

template<typename T>
myFraction<T> myFraction<T>::operator+ (const myFraction<T>& c) const
{
    T x = denominator * c.denominator;
    T y = numerator * c.denominator + c.numerator * denominator;
    return myFraction(y, x);
}
template myFraction<float> myFraction<float>::operator+ (const myFraction<float>& c) const; 
template myFraction<double> myFraction<double>::operator+ (const myFraction<double>& c) const; 

template<typename T>
ostream& operator<< (ostream& os, const myFraction<T>& c)
{
    return os << c.getn() << "/" << c.getd();
}
template ostream& operator<< (ostream& os, const myFraction<float>& c);
template ostream& operator<< (ostream& os, const myFraction<double>& c);