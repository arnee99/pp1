// CPP program to illustrate
// usage of local variables
#include<iostream>
using namespace std;
 
void func()
{  
    // this variable is local to the
    // function func() and cannot be
    // accessed outside this function
    int age=18;   
}
 
int main()
{
    cout<<"Age is: "<<age;
     
    return 0;
}