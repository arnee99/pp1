#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string name;

  cout << "Please, enter your full name: ";
  getline (cin,name,',');
  //cin >> name;
  cout << "Hello, " << name << "!\n";

  return 0;
}