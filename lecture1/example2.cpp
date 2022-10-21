#include <iostream>
using namespace std;
int main() {
    //this variable is actually needed for counting something ....
    int number1;
    //this variable is actually needed for counting something else ....
    int number2;
    //This one is needed for ....
    int sum;
    
    //int number1, number2, sum;

    cout << "Enter the first integer: ";
    cin >> number1;

    cout << "Enter the second integer: ";
    cin >> number2;

    sum = number1 + number2;

    cout << "Sum is:" << sum << endl << "some text";
    return 0;
}