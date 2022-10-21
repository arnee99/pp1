#include<iostream>
using namespace std;
  
int main()
{
    int k, rs = 0, cs = 0, re = 0, ce = 0, m, n;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    while(rs < re && cs < ce) {
        for(k = cs; k < ce; ++k){
            cout << arr[rs][k] << " ";
        }
        rs++;

        for(k = rs; k < re; ++k){
            cout << arr[k][n-k] << " ";
        }
        n--;

        if(rs < re){
            for(k = n - 1; k >= cs)
        }
    }

}