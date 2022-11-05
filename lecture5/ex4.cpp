#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    int seed = 0;
    //cout << "Enter seed: ";
    //cin >> seed;
    srand(static_cast<int>(time(0)));
    //srand(seed);

    for(int i=1; i <= 10; i++){
        //pick random number from 1 to 6 and output it
        cout << ' ' << (1 + rand() % 6);
        
        //if counter is divisible by 5, start a new line of output
        if(i % 5 == 0){
            cout << endl;
        }
    }
}