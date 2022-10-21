#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++){
        cout << i << "\n";
    }
    //1st: i==0. cout << 0. i++. i < 10
    //2nd: i==1. cout << 1. i++. i < 10
    //3rd: i==2. cout << 2. i++. i < 10
    //...
    //9th: i==8. cout << 8. i++. i < 10
    //10th: i==0. cout << 9. i++. i < 10
    //11th: i==10. 
return 0;
}