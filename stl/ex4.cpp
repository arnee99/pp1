#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int, 4> arr = {1,2,3,4};
    array<int, 4> arr2 = {2,3,4,5};
    array<string, 4> arrStr = {"one", "two", "three", "four"};
    array<string, 4> arrStr2 = {"one", "two", "three", "four"};

    bool isEqual = (arr == arr2);

    cout << isEqual << endl;

    return 0;
}