
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