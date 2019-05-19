#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

void func()
{
  #ifdef A
  cout << "has define A" << endl;
  #else 
  cout << "not define A" << endl;
  #endif
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
}