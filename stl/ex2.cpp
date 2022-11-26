#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[] = {1,2,3};

    // cout << arr[1] << endl;
    // cout << *(arr+1) << endl;

    vector<int> myVector = {1,2,3,4,5,6};
    vector<int>::iterator it = myVector.begin();
    // vector<int>::const_iterator it;
    // vector<int>::reverse_iterator it;
    // it = myVector.begin();

    // *it = 5;
    // it++;

    // cout << *it << endl;
    // it--;
    // cout << *it << endl;
    // advance(it, 1);
    // cout << *it;

    advance(it, 5);
    myVector.insert(it, 999);

    vector<int>::iterator itErase = myVector.begin();
    myVector.erase(itErase, itErase+3);

    for(it = myVector.begin(); it != myVector.end(); it++){
        cout << *it << endl;
    }

    return 0;
}