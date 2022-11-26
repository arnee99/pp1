#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> mySet = {1,2,3,4};
    set<int>::iterator it = mySet.begin();
    mySet.insert(5);
    mySet.insert(4);
    mySet.insert(3);
    auto it1 = mySet.insert(6);

    // auto it1 = mySet.find(10);
    // cout << (it1 == mySet.end());

    // mySet.erase(5);
    // for(it=mySet.begin(); it != mySet.end(); it++){
    //     cout << *it << endl;
    // }

    multiset<int> mSet = {1,2,3,4,5};
    mSet.insert(1);
    mSet.insert(1);
    mSet.insert(1);
    mSet.insert(1);
    
    set<int>::iterator mIt = mSet.begin();
    for(mIt=mSet.begin(); mIt != mSet.end(); mIt++){
        cout << *mIt << endl;
    }

    return 0;
}