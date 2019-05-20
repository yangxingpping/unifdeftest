
#include "utils.h"

#include <iostream>

using namespace std;

int util_func()
{
    cout << "defined util_func mac" << endl;
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

void util_exclamation_def()
{
    #if !defined(EXCLAMATION_DEF)
    cout << "not define exclamation def " << endl;
    #else 
    cout << "has define exclamation def" << endl;
    #endif
}