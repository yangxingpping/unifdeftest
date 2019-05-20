
#include "utils.h"

#include <iostream>

using namespace std;

int util_func()
{
    #ifdef UTIL_FUNC
    cout << "defined util_func mac" << endl;
    #else
    cout << "not defined util_func mac" << endl;
    #endif
    return 0;
}

int util_not_in_def()
{
    #ifdef UTIL_NOT_IN_DEF
    cout << "this should never be printed" << endl;
    #else 
    cout << "this should printed every time" << endl;
    #endif

    return 0;
}