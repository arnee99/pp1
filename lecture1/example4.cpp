#include <iostream> // enables program to perform input and output
using namespace std;
// function main begins program execution
int main() {
int number1 = 0; // first integer to compare (initialized to 0) 
int number2 = 0; // second integer to compare (initialized to 0)
cout << "Enter two integers to compare: "; // prompt user for data 
cin >> number1 >> number2; // read two integers from user
   
if
(number1 == number2) {
    cout << number1 << " == " << number2 << endl; }
if
(number1 != number2) {
    cout << number1 << " != " << number2 << endl; }
if
(number1 < number2) {
    cout << number1 << " < " << number2 << endl; }
if
(number1 > number2) {
    cout << number1 << " > " << number2 << endl; }
if
(number1 <= number2) {
    cout << number1 << " <= " << number2 << endl; }
if
(number1 >= number2) {
    cout << number1 << " >= " << number2 << endl; }
} // end function main