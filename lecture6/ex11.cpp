#include <iostream>
using namespace std;

int square(int x) {
    cout << "Square of integer " << x << " is ";
    return x * x;
}

double square(double x) {
    cout << "Square of double " << x << " is ";
    cout << endl;
    return x * x;
}

int main() {
    cout << square(7);
    cout << endl;
    cout << square(7.5);
    cout << endl;

    return 0;
}