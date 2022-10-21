#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    if(n <= k)
        cout << 2;
    else if(n*2 % k == 0)
        cout << n*2 / k;
    else if(n*2 % k != 0)
        cout << n*2 / k + 1;
    
    return 0;
}