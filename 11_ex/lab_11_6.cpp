#include <iostream>
#include <ctime>
using namespace std;

void yahtzee(int number);

int main(){
    yahtzee(5);
    return 0;
}


void yahtzee(int number){
    srand(time(nullptr));
    bool isSame = true;
    int* diceArr = new int[number];
    for(int i = 0; i < number; ++i){
        diceArr[i] = rand() % 5 + 1;
        cout << "Dice " << i+1 << " -> " << diceArr[i] << endl;
    }
    int check = diceArr[0];
    for(int i = 0; i < number; ++i){
        check == diceArr[i] ? check = diceArr[i] : isSame = false;
    }

    isSame ? cout << "\n\t--- Yahtzee ---\t\n" : cout << "\n\tTry again\t\n";
}
