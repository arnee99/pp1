#include <iostream>
using namespace std;

int main() {
    int twoDimArray[2][4];
    twoDimArray[0][0] = 6;
    twoDimArray[0][1] = 0;
    twoDimArray[0][2] = 9;
    twoDimArray[0][3] = 6;
    twoDimArray[1][0] = 2;
    twoDimArray[1][1] = 0;
    twoDimArray[1][2] = 1;
    twoDimArray[1][3] = 1;

    //int twoDimArray[2][4] = { 6, 0, 9, 6, 2, 0, 1, 1 };
    //int twoDimArray[2][4] = { { 6, 0, 9, 6 } , { 2, 0, 1, 1 } };

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 4; j++)
            cout << twoDimArray[i][j];
    cout << endl;
    return 0;
}