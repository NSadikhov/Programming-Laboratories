#include <iostream>
#include <ctime>

using namespace std;


int main(){

    srand(time(0));
    int arraySize;
    cout << "Enter number for arraySize: ";
    cin >> arraySize;
    int a,b;
    cout << "Enter number for a: ";
    cin >> a;
    cout << "Enter number for b: ";
    cin >> b;

    int arrayName[arraySize];

    int large = (a > b) ? a : b;
    int small = (a < b) ? a : b;

    for(int i=0; i < arraySize; ++i){
        arrayName[i] = rand()%(large-small+1)+small;
        cout << arrayName[i] << "   ";
    }

    cout << endl;
    cout << "-- Shift version --" << endl;

    int *arrayName2 = arrayName;

    for(int i = 0; i < arraySize; ++i){
        int counter = i;
        if(i == 0){
            counter = 10;
        }
        arrayName2[i] = arrayName[counter-1];

        cout << arrayName2[i] << "   ";
    }



    return 0;
}

