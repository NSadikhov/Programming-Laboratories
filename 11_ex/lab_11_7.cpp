#include <iostream>
#include <ctime>
using namespace std;

void random_order(int* intArr, int arraySize);

int main(){

    int arraySize;
    cout << "Enter a number for arraySize: ";
    cin >> arraySize;
    int* intArr = new int[arraySize];
    random_order(intArr, arraySize);

    return 0;
}

void random_order(int* intArr, int arraySize){
    for(int i = 0; i < arraySize; ++i){
        cout << i + 1 << " - ";
        cin >> intArr[i];
    }
    int* randArr = new int[arraySize];

    cout << "\n---------------------------\n";

    for(int i = 0; i < arraySize; ++i){
        int numb = rand()%arraySize;
        int* numbArr = new int[arraySize];
            if(i > 0){
                for(int j = 0; j < arraySize; ++j){
                    if(intArr[numb] == intArr[j]){

                    }
                }
            }
        randArr[i] = intArr[numb];
        cout << i + 1 << " - " << randArr[i] << endl;
    }

}



