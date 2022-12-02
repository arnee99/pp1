// count_if example
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector

using namespace std;

bool IsOdd (int i) { 
    return ((i%2)==1); 
}

int main () {
  vector<int> myvector;
  for (int i=1; i<10; i++) myvector.push_back(i); // myvector: 1 2 3 4 5 6 7 8 9

  int mycount = count_if (myvector.begin(), myvector.end(), IsOdd);
  cout << "myvector contains " << mycount  << " odd values.\n";

  return 0;
}