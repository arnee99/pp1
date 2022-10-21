    #include <iostream>
    #include <string> // for string class
    using namespace std;
    
    // Driver Code
    int main()
    {
        // Initializing 1st string
        string str1 = "geeksforgeeks is for geeks";
    
        // Declaring 2nd string
        string str2 = "geeksforgeeks rocks";
    
        // Declaring character array
        char ch[80];
    
        // using copy() to copy elements into char array
        // copies "geeksforgeeks"
        str1.copy(ch, 13, 0);
    
        // Displaying char array
        cout << "The new copied character array is : ";
        cout << ch << endl;
    
        // Displaying strings before swapping
        cout << "The 1st string before swapping is : ";
        cout << str1 << endl;
        cout << "The 2nd string before swapping is : ";
        cout << str2 << endl;
    
        // using swap() to swap string content
        str1.swap(str2);
    
        // Displaying strings after swapping
        cout << "The 1st string after swapping is : ";
        cout << str1 << endl;
        cout << "The 2nd string after swapping is : ";
        cout << str2 << endl;
    
        return 0;
    }