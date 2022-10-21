#include <iostream>
using namespace std;

int main(){
    int n = 2;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout << arr[1][1];
}