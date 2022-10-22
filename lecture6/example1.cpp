#include <iostream>
#include <cctype>


using namespace std;

int main(){
    char someString[] = ".sadjbmcnkjqehQLKWJEIOJASKnc,mas..,asdmqwoiuAJSKD";

    char current = someString[0];
    for(int i=0; current != '\0'; current = someString[++i]){
        if(isalpha(current))
            cout << (char)(isupper(current) ? tolower(current) : current);
        else if(ispunct(current))
            cout << current;
    }

    cout << endl;
    cout << "Hello!";
    return 0;
}