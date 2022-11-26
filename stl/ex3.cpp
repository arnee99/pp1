#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int, 5> myArr = {1,2,3,4,5};
    
    // cout << myArr.at(10);

    myArr.fill(-1);

    // for(int i=0; i<myArr.size(); i++)
    for(auto el : myArr)
        cout << el << endl;

    return 0;
}