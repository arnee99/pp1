// rotate algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::rotate
#include <vector>       // std::vector

using namespace std;

int main () {
  vector<int> myvector;

  // set some values:
  for (int i=1; i<10; ++i) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

  rotate(myvector.begin(),myvector.begin()+4,myvector.end());
                                                  // 4 5 6 7 8 9 1 2 3
  // print out content:
  cout << "myvector contains:";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}