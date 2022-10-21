
#include <iostream>
using namespace std;

int main() {
    int c;
    for(int x = 0; x < 5; x++) {
        cout << "iteration # for x:" << x+1 << endl;
        for(int y = 0; y < 5; y++){
            cout << y;
            c = y;
        }  
        cout << " total sum of iterations:" << c+1;
        cout << "\n";
    }
return 0;
}