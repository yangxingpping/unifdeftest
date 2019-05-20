#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include <charconv>
#include <cstdint>

#include "common/utils.h"

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

void print_str_hex()
{
  char ch[3];
  ch[0] = 0xef;
  ch[1] = 0xff;
  ch[2] = 0x11;
  cout << "print str hex format:" << endl;
  for(size_t i=0; i< sizeof(ch); ++i)
  {
    cout << (uint8_t)ch[i] << " ";
  }
  cout << endl;
  cout << "print str hex end" << endl;
}

int main()
{
   func();
   test_if_def();
   test_def_logic_or();
   util_not_in_def();
   //print_str_hex();

  util_func();

}