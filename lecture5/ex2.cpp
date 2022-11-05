#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    //loop 20 times
    for(int i=1; i <=5; i++){
        cout << 1 + rand() % 6 << ' ';
        //[1; 6]
        //[0; RAND_MAX]
        if(i % 5 == 0)
            cout << endl;
    }
}
