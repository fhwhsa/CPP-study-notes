#ifndef MYFRACTION_H
#define MYFRACTION_H

#include <iostream>
#include <algorithm>
using std::ostream;
using std::__gcd;

template<typename T>
class myFraction
{
public:
    explicit myFraction(T n, T d = 1); // explicit 阻止不应该允许的经过转换构造函数进行的隐式转换的发生,声明为explicit的构造函数不能在隐式转换中使用。
    T getn() const;
    T getd() const;
    operator T() const;
    myFraction operator+ (const myFraction& c) const;

private:
    T numerator, denominator;

};

template<typename T>
ostream& operator<< (ostream& os, const myFraction<T>& c);


#endif