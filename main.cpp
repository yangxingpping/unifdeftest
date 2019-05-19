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

int main()
{
   func();
}