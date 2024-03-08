#ifndef MYFRACTION_H
#define MYFRACTION_H

#include <iostream>
#include <algorithm>
using std::ostream;
using std::__gcd;

class myFraction
{
public:
    explicit myFraction(double n, double d = 1); // explicit 阻止不应该允许的经过转换构造函数进行的隐式转换的发生,声明为explicit的构造函数不能在隐式转换中使用。
    double getn() const;
    double getd() const;
    operator double() const;
    myFraction operator+ (const myFraction& c);

private:
    double numerator, denominator;

};

ostream& operator<< (ostream& os, const myFraction& c);


#endif