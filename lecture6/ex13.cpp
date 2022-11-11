#include <iostream>
using namespace std;

long fibonacci(long); // function prototype

int main() {
// calculate the fibonacci values of 0 through 10
    for (int counter = 0; counter <= 10; ++counter)
        cout << "fibonacci(" << counter << ") = " << fibonacci(counter) << endl;
        // display higher fibonacci values
        cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
        cout << "fibonacci(30) = " << fibonacci(30) << endl; 
        cout << "fibonacci(35) = " << fibonacci(35) << endl;
    }
// recursive function fibonacci
long fibonacci(long number){
    if((number == 0) || (number == 1))
        return number;
    else   
        return fibonacci(number - 1) + fibonacci(number - 2);
}