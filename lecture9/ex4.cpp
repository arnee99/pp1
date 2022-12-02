// advance example
#include <iostream>     // std::cout
#include <iterator>     // std::distance
#include <list>         // std::list

using namespace std;

int main () {
  list<int> mylist;
  for (int i=0; i<10; i++) mylist.push_back (i*10);

  list<int>::iterator first = mylist.begin();
  list<int>::iterator last = mylist.end();

  cout << "The distance is: " << distance(first,last) << '\n';

  return 0;
}