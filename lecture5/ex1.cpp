#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int x, int y, int z); // function prototype
//maximum(int x, int y, int z) part is called function signature

int main() {

    cout << "Enter three integer values: "; 
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;
    cout << "The maximum integer value is: "
        << maximum(int1, int2, int3) << endl;

    return 0;
}

int maximum(int x, int y, int z) {
    int maximumValue = x;

    if(y > maximumValue) {
        maximumValue = y;
    }

    if(z > maximumValue) {
        maximumValue = z;
    }

    return maximumValue;
}
