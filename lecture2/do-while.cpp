#include <iostream>
using namespace std;

int main() {
    int x = 10;

    do
    {
        x = x + 1;
    }
    while(x < 10);

    //nothing, 10 
    cout << "x is " << x << "\n";
    return 0;
}