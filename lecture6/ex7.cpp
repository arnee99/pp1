#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> stack1;
    stack1.push(21);
    stack1.push(22);
    stack1.push(24);
    stack1.push(25);
       
    stack1.pop();
    stack1.pop();
   
    while (!stack1.empty()) {
        cout << stack1.top() <<" ";
        stack1.pop();
    }
}