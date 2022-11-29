// CPP program to illustrate
// Implementation of empty() function
#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    stack<int> mystack;
    mystack.push(1);
 
    // Stack becomes 1
 
    if (mystack.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}