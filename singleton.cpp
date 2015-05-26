#include <iostream>

#include "singleton.h"

using namespace std;

Singleton *Singleton::ptr = NULL;

Singleton *Singleton::getInstance()
{
    if (ptr == NULL)
        ptr = new Singleton();

    return ptr;
}

void Singleton::Test()
{
    cout<<"Test...."<<endl;
}

