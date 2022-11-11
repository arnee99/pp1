#include <iostream>
using namespace std;

int foo;        // global variable

int some_function ()
{
  int bar;      // local variable
  bar = 0;
}

int other_function ()
{
  foo = 1;  // ok: foo is a global variable
  //bar = 2;  // wrong: bar is not visible from this function
}

int main(){

    return 0;
}