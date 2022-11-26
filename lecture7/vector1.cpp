#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ratings(5);
    int n;
    cin >> n;
    vector<double> scores(n);
    ratings[0] = 9;
    for(int i=0; i<n; i++)
        cout << scores[i] << endl;

    return 0;
}