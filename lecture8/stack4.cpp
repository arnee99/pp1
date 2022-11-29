// CPP program to illustrate
// Implementation of size() function
#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    int sum = 0;
    stack<int> mystack;
    mystack.push(1);
    mystack.push(8);
    mystack.push(3);
    mystack.push(6);
    mystack.push(2);
 
    // Stack becomes 1, 8, 3, 6, 2
 
    cout << mystack.size();
 
    return 0;
}