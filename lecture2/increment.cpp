#include <iostream>
using namespace std;

int main(){
    int n = 2;
    cout << ++n + n++ << endl; //7
    //++n -> current value will be changed to 3. n++ -> current value is 3, but the next usage will be
    //with value 4.
    //++n + n++ = 3 + 3 = 6
    
    //n -> n+1 -> 4.
    cout << n; 

}