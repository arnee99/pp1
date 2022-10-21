#include <iostream>
using namespace std;

int main() {

    for(int x = 0; x < 10; x++)
        cout << x << "\t";
    cout << endl;

    int x = 0;
    while(x < 10) {
        cout << x << "\t";
        x++; 
    }
    return 0;
}
