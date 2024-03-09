#include "myPointer.h"
#include <iostream>
using std::cout;

template<typename T>
T& myPointer<T>::operator*() const 
{
    return *ptr;
}
template tmp& myPointer<tmp>::operator*() const;


template<typename T>
T* myPointer<T>::operator->() const 
{
    return ptr;
}
template tmp* myPointer<tmp>::operator->() const;

template<typename T>
myPointer<T>::myPointer(T* p)
    : ptr(p)
{

}
template myPointer<tmp>::myPointer(tmp* p);

void tmp::method() const 
{
    cout << "method\n";
}