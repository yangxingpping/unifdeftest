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

int main()
{
   func();
   test_if_def();
}