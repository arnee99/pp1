#include <iostream>  
using namespace std;  
  
int main() {  
    int a = 5;  
    int b = 9;  
    
    // false || false = false
    // 5 == 0 - false, 5 > 9 - false
    cout << ((a == 0) || (a > b)) << endl;  
    
    // false || true = true  
    // 5 == 0 - false, 5 < 9 - true
    cout << ((a == 0) || (a < b)) << endl;  
  
    // true || false = true  
    // 5 == 5 - true, 5 > 9 - false
    cout << ((a == 5) || (a > b)) << endl;  
  
    // true || true = true 
    // 5 == 5 - true, 5 < 9 - true 
    cout << ((a == 5) || (a < b)) << endl;  
  
    return 0;  
}  