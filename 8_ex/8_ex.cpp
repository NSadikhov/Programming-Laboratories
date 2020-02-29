#include <iostream>
#include <ctime>

using namespace std;


int main(){

    srand(time(0));
    int arraySize;
    cout << "Enter number for arraySize: ";
    cin >> arraySize;

    int arrayName[arraySize];

    for(int i=0; i < arraySize; ++i){
        arrayName[i] = rand()%11;
        cout << arrayName[i] << "   ";
    }

    cout << endl;

    for(int i=0; i < 11; ++i){
        int counter = 0;
        cout << i << ": ";
        for(int j=0; j <arraySize; ++j){
            if(i == arrayName[j]){
                counter++;
            }
        }
        cout << counter << endl;
    }

    delete[]arrayName;

    return 0;
}

