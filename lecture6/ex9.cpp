#include <iostream>
using namespace std;

// Definition of inline function cube. Definition of function appears
// before function is called, so a function prototype is not required.
// First line of function definition acts as the prototype.
inline double cube(double side) {
    return side * side * side;
}

int main() {
    double sideValue;
    cin >> sideValue;
    cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl;
    return 0;
}