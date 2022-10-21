#include <iostream>  
using namespace std;  
  
int main() {  
        int a = 5;  
        int b = 9; 

        bool c = true;
        bool d = false; 
    
        // false && false = false  
        // 5 == 0 - false, 5 > 9 - false
        cout << ((c == false) && (d == true)) << endl;  
    
        // false && true = false  
        // 5 == 0 - false, 5 < 9 - true
        cout << ((a == 0) && (a < b)) << endl;  
  
        // true && false = false  
        // 5 == 5 - true, 5 > 9 - false
        cout << ((a == 5) && (a > b)) << endl;  
  
        // true && true = true  
        // 5 == 5 - true, 5 < 9 - true
        cout << ((a == 5) && (a < b)) << endl;  
  
      return 0;  
} 