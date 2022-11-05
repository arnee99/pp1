#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    int frequency1 = 0;
    int frequency2 = 0;
    int frequency3 = 0;
    int frequency4 = 0;
    int frequency5 = 0;
    int frequency6 = 0;
    int face;

    for(int i=1; i <= 60'000'000; i++){
        face = 1 + rand() % 6; //some random value from 1 to 6

        switch(face){
            case 1:
                ++frequency1;
                break;
            case 2:
                ++frequency2;
                break;
            case 3:
                ++frequency3;
                break;
            case 4:
                ++frequency4;
                break;
            case 5:
                ++frequency5;
                break;
            case 6:
                ++frequency6;
                break;
            default: 
                cout << "Program should never get here!";
        }
    }

    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "  1" << setw(13) << frequency1
        << "\n  2" << setw(13) << frequency2
        << "\n  3" << setw(13) << frequency3
        << "\n  4" << setw(13) << frequency4
        << "\n  5" << setw(13) << frequency5
        << "\n  6" << setw(13) << frequency6 << endl;
}