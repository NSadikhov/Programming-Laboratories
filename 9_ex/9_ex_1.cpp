#include <ctime>
#include <iostream>
using namespace std;


int main(){

    srand(time(0));
    int a,b;
    cout << "Enter number for a: ";
    cin >> a;
    cout << "Enter number for b: ";
    cin >> b;
    int rowSize = 3, columnSize = 4;
    int sumR = 0, sumC = 0;

    int largest[rowSize] = {0};
    int arrayName[rowSize][columnSize];

    for(int i = 0; i < rowSize; ++i){
        for(int j = 0; j < columnSize; ++j){
            arrayName[i][j] = rand()%(b-a+1)+a;
            cout << arrayName[i][j] << "    ";

        }
        cout << endl;
    }

    cout << "SUM from Rows: ";
    for(int i = 0; i < rowSize; ++i){
        for(int j = 0; j < columnSize; ++j){
            sumR += arrayName[i][j];
            if(arrayName[i][j] > largest[i]){
                largest[i] = arrayName[i][j];
            }
        }
        cout << sumR << "   ";
        sumR = 0;
    }
    cout << endl;

    cout << "SUM from Columns: ";
    for(int i = 0; i < columnSize; ++i){
        for(int j = 0; j < rowSize; ++j){
            sumC += arrayName[j][i];
        }
        cout << sumC << "   ";
        sumC = 0;
    }
    cout << endl;

    cout << "Largest from each Row: ";
    for(int i = 0; i < rowSize; ++i){
        cout << largest[i] << "   ";
    }
    cout << endl;

    return 0;
}
