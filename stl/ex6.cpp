#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, string> myMap;
    map<int, string>::iterator it;
    myMap.emplace(3, "Three");
    myMap.insert(make_pair(1,"One"));
    myMap.insert(pair<int, string>(2, "Two"));

    it = myMap.find(10);
    cout << it->first << endl;
    cout << it->second << endl;

    return 0;
}