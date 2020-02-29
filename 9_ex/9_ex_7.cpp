#include <ctime>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int points;
    cout << "Enter number for points: ";
    cin >> points;
    int arrayName[points][2];
    cout << endl;
    for(int i = 0; i < points; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            int x;
            cout << "Enter number for ";
            (j == 0) ? cout << "x: " : cout << "y: ";
            cin >> x;
            arrayName[i][j] = x;
        }
        cout << "--------------------------------\n";
    }


    for(int i = 0; i < points; ++i)
    {
        cout << i+1 << " - point: ";
        for(int j = 0; j < 2; ++j)
        {
            cout << arrayName[i][j];
            if(j!=1)
            {
                cout << " , ";
            }
        }
        cout << endl;
    }

    int distance = 0;
    int min_distance = 0;
    int index_1 = 0;
    int index_2 = 0;

    for(int i = 0; i < points; ++i)
    {
        for(int j = i+1; j < points; ++j)
        {

            distance = (pow(arrayName[i][0]-arrayName[j][0], 2) + pow(arrayName[i][1]-arrayName[j][1],2));

            distance = sqrt(distance);

            if(min_distance < distance)
            {
                min_distance = distance;
                index_1 = i;
                index_2 = j;
            }

        }
    }

    cout << "\n" << arrayName[index_1][0] << " , " << arrayName[index_1][1];
    cout << "\n" << arrayName[index_2][0] << " , " << arrayName[index_2][1];

    cout << "\n" << sqrt((pow(arrayName[index_1][0]-arrayName[index_2][0], 2) + pow(arrayName[index_1][1]-arrayName[index_2][1],2)));

    return 0;
}
