#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main(){
    string status1 = "continue";
    string status2 = "won";
    string status3 = "lost";

    srand(static_cast<int>(time(0)));
    
    int myPoint = 0;
    string gameStatus; //can be CONTINUE, WON or LOST
    int sumOfDice = rollDice(); //first roll of a dice

    switch (sumOfDice) {
        case 7: //win with 7 on first roll
        case 11: //win with 11 on first roll
            gameStatus = "won";
            break;
        case 2: //lose with 2 on first roll
        case 3: //lose with 3 on first roll
        case 12: //lose with 12 on first roll
            gameStatus = "lost";
            break;
        default: //didn't win or lose, so remember point
            gameStatus = "continue";
            myPoint = sumOfDice;
            cout << "Point is " << myPoint << endl;
            break;
    }

    while("continue" == gameStatus) {
        sumOfDice = rollDice(); //roll dice again

        if(sumOfDice == myPoint){
            gameStatus = "won";
        }
        else{
            if(sumOfDice == 7){
                gameStatus = "lost";
            }
        }
    }

    if("won" == gameStatus) {
        cout << "Player wins" << endl;
    }
    else {
        cout << "Player loses" << endl;
    }
}

int rollDice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;

    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;

    return sum;
}
    


