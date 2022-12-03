#include <iostream>

using namespace std;

int main(){

    int x = 10;
    int * p1 = &x;
    const int * p2 = &x;
    int * const p3 = &x;
    const int * const p4 = &x;

    return 0;
}