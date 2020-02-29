#include <ctime>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>

using namespace std;

int main()
{
    const int arraySize = 3;

    double dobArray_1[arraySize][arraySize] = {{3.3,4.7,5.4},{2.8,5.3,7.6},{5.3,7.1,9.5}};
    double dobArray_2[arraySize][arraySize] = {{1.3,4.7,8.4},{3.8,1.6,6.3},{7.8,3.4,5.2}};

    for(int i = 0; i < arraySize; ++i){
        for(int j = 0; j < arraySize; ++j){
            dobArray_1[i][j] += dobArray_2[i][j];
            cout << dobArray_1[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
