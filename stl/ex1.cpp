#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> myVector(10);
    // myVector.reserve(10000);
    // for(int i=0; i<5; i++)
    //     myVector.push_back(i);

    // myVector[10] = 10;

    // cout << myVector.size() << endl;
    // cout << myVector.capacity() << endl;

    // myVector.shrink_to_fit();

    // cout << myVector.size() << endl;
    // cout << myVector.capacity() << endl;

    // cout << myVector.empty() << endl;

    for(int i=0; i<myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }

    // myVector.clear();

    //cout << myVector.size() << endl;

    return 0;
}