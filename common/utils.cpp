
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

void else_if_define_or()
{
    #ifdef IF_DEFINE_IF
    cout << "defined if define or if_define_if" << endl;
    #elif defined(IF_DEFINE_ELSE_IF_FIRST) || defined(IF_DEFINE_ELSE_IF_SECOND)
    cout << "defined if_define_else_if_first or second" << endl;
    #else
    cout << "not define else_if_define_or " << endl;
    #endif
}