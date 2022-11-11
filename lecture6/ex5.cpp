// CPP program to illustrate
// scope of local variables
// and global variables together
#include<iostream>
using namespace std;
 
// global variable
int global = 5;
 
// main function
int main()
{  
    // local variable with same
    // name as that of global variable
     
    int global = 2;
    cout << global << endl;
}