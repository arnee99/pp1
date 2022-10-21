#include <iostream>
#include <string> // for string class
using namespace std;
  
// Driver Code
int main()
{
    // Initializing string
    string str = "hello, dear and lovely world!";
  
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
  
    // Resizing string using resize()
    str.resize(13);
  
    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;
  
    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;
  
    // Displaying length of the string
    cout << "The length of the string is :" << str.length()
         << endl;
  
    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();
  
    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;
  
    return 0;
}