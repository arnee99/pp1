#include<iostream>
using namespace std;
  
int main()
{
    // an array with 3 rows and 2 columns.
    int arr[3][2] = {{0,1}, {2,3}, {4,5}};
    int sum = 0;
    int min=0, max=0;
  
    // output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
            if(min > arr[i][j])
                min = arr[i][j];
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }
    cout << "Max is: " << max << endl;
    cout << "Min is: " << min << endl;
    cout << "Sum of all elements is: " << sum << endl;
    return 0;
}