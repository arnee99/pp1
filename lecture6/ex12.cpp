#include <iostream>
#include <iomanip>
using namespace std;

long factorial(long);

int main(){
    for(int i = 0; i <= 10; i++){
        cout << setw(2) << i << " != " << factorial(i) << endl;
    }

    return 0;
}

long factorial(long number) {
    if(number <= 1)
        return 1;
    else
        return number * factorial(number - 1);
}