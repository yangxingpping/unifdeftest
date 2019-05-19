#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

void func()
{
  cout << "not define A" << endl;
}

void test_if_def()
{
  #if defined(IF_DEFINED)
  cout << "has IF_DEFINED" << endl;
  #else
  cout << "not have IF_DEFINED" << endl;
  #endif
}

void test_def_logic_or()
{
  #if defined(IF_FIRST) || defined(IF_SECOND)
  cout << "has defined IF_FIRST or IF_SECOND" << endl;
  #else
  cout << "neither IF_FIRST nor IF_SECOND defined " << endl;
  #endif
}

int main()
{
   func();
   test_if_def();
   test_def_logic_or();
}