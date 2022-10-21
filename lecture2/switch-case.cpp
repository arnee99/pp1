#include <iostream>
using namespace std;

int main() {
    int x = 7;
        switch(x) {
            // 6 != 1
            case 1:
                cout << "x is 1\n";
                break;
            // 6 != 2
            case 2:
                cout << "x is 2\n";
                break;
            // 6 != 3
            case 3:
                cout << "x is 3\n";
                break;
            // 6 != 4
            case 4:
                cout << "x is 4\n";
                break;
            // 6 != 5
            case 5:
                cout << "x is 5\n";
                break;
            // 6 == 6
            case 6:
                cout << "x is 6\n";
                break;
            //default will be executed
            default:
                cout << "x is not 1, 2, or 3";
        }   
    return 0;
}