#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    set<pair<string,string>> s;
    vector<pair<string, string>> v;

    string name, surname;

    for(int i=0; i<n; i++){
        cin >> name >> surname;
        s.insert(make_pair(name, surname));
        v.push_back(make_pair(name, surname));
    }

    sort(v.begin(), v.end());

    set<pair<string,string>>::iterator it;
    vector<pair<string, string>>::iterator vIt;

    for(it = s.begin(); it != s.end(); it++)
        cout << (*it).first << ' ' << (*it).second << endl;

    cout << endl;

    for(vIt = v.begin(); vIt != v.end(); vIt++)
        cout << (*vIt).first << ' ' << (*vIt).second << endl;

    return 0;
}