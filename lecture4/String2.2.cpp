#include <iostream>
using namespace std;
 
int main()
{
    int yr = 1900;
 
    (yr%4==0) ? (yr%100!=0 ? cout<<"The year "<<yr<<" is a leap year"
     : (yr%400==0 ? cout<<"The year "<<yr<<" is a leap year"
         : cout<<"The year "<<yr<<" is not a leap year"))
             : cout<<"The year "<<yr<<" is not a leap year";
    return 0;
}