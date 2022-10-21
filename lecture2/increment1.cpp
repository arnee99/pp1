#include <iostream>
using namespace std;

int main() {

    int x = 3;
    cout << x++ << endl;
    cout << x << endl;
    //cout << x++ + ++x << endl; //8
    //x++ == 3. ++4 == 5. 3 + 5 = 8
    //cout << x; //5?
    return 0;
}