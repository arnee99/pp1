#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<double> values;
    values.push(1.1);
    values.push(1.2);
    values.push(1.3);

    cout << "Popping from values: ";

    while(!values.empty()) {
        cout << values.front() << ' ';
        values.pop();
    }

    return 0;
}