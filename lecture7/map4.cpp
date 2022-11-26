// map::at
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main ()
{
  pair<int, string> somePair;
  somePair.first = 1;
  somePair.second = "One";
  std::map<std::string,int> mymap = {
                { "alpha", 0 },
                { "beta", 0 },
                { "gamma", 0 } };

  mymap.at("alpha") = 10;
  mymap.at("beta") = 20;
  mymap.at("gamma") = 30;

  for (auto& x: mymap) {
    std::cout << x.first << ": " << x.second << '\n';
  }

  return 0;
}