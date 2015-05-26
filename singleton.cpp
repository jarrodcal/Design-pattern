#include <iostream>

#include "singleton.h"

using namespace std;

Singleton *Singleton::ptr = NULL;

Singleton::getInstance()
{
    if (ptr == NULL)
        ptr = new Singleton();

    return ptr;
}

void Test()
{
    cout<<"Test...."<<endl;
}
