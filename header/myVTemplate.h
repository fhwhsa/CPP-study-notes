/*
    可变参数模板样例
    模板类或函数如果头文件和实现文件分离需要在实现文件添加一个显示模板实例化，这种方法很麻烦，故放在一起
    c++20有一个关键字export可以解决这个问题，但是实际性能低，很少编译器实现
*/

#ifndef MYVTEMPLATE_H
#define MYVTEMPLATE_H

#include <iostream>
using std::cout;

void print() 
{
    cout << "\n\n";
}

template<typename T, typename... args>
void print(const T& firstArg, const args&... otherArgs)
{
    cout << firstArg << " ";
    print(otherArgs...);
}

#endif