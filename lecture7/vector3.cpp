#include <iostream>
#include <vector>
using namespace std;

int main(){
    //auto pd = scores::begin();
    vector<double> scores;
    vector<double>::iterator pd;
    double temp;
    while(cin >> temp && temp >= 0)
        scores.push_back(temp);
    cout << "You entered " << scores.size() << " scores.\n";

    for(pd = scores.begin(); pd != scores.end(); pd++)
        cout << *pd << endl;

    return 0;
}