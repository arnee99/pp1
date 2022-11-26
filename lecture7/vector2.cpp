#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int NUM = 5;

int main(){

    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    cout << "You will do exactly as told. You will enter\n"
        << NUM << " book titles and your ratings (0-10). \n";
    
    int i;
    for(int i = 0; i < NUM; i++)
    {
        cout << "Enter  title #" << i + 1 << ": "; //вывод называния книги
        getline(cin, titles[i]);
        cout << "Enter your rating (0-10): ";
        cin >> ratings[i];
        cin.get();
    }
    cout << "Thank you. You entered the following:\n"
        << "Rating\tBook\n";
    for(int i=0; i<NUM; i++)
    {
        cout << ratings[i] << "\t" << titles[i] << endl;
    }

    return 0;
}