#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

template<typename T> void pushElements(T& stackRef);
template<typename T> void popElements(T& stackRef);

int main(){

    // stack with default underlying deque
    stack<int> intDequeStack;
    // stack with underlying vector
    stack<int, vector<int>> intVectorStack;
    stack<int, list<int>> intListStack;

    cout << "pushing into deque stack: ";
    pushElements(intDequeStack);
    cout << endl;
    cout << "pushing into vector stack: ";
    pushElements(intVectorStack);
    cout << endl;
    cout << "pushing into list stack: ";
    pushElements(intListStack);
    cout << endl;
    
    cout << "popping deque stack: ";
    popElements(intDequeStack);
    cout << endl;
    cout << "popping vector stack: ";
    popElements(intVectorStack);
    cout << endl;
    cout << "pop list stack: ";
    popElements(intListStack);
    cout << endl;

    return 0;
}

template<typename T> void pushElements(T& stackRef){
    for(int i = 0; i < 10; i++){
        stackRef.push(i);
        cout << stackRef.top() << ' ';
    }
}

template<typename T> void popElements(T& stackRef){
    while(!stackRef.empty()){
        cout << stackRef.top() << ' ';
        stackRef.pop();
    }
}