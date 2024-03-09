#ifndef MYPOINTER_H
#define MYPOINTER_H

// 仿指针类
template<typename T>
class myPointer
{
public:
    T& operator*() const;
    T* operator->() const;
    myPointer(T* p);

private:
    T* ptr;
};

struct tmp
{
    void method() const;
};

#endif