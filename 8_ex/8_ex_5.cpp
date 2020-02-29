#include <iostream>
#include <ctime>

using namespace std;


int main()
{


    srand(time(0));
    int arraySize;
    cout << "Enter number for arraySize: ";
    cin >> arraySize;

    int arrayName[arraySize];

    for(int i = 0; i < arraySize; ++i)
    {
        cout << i+1 << " - ";
        cin >> arrayName[i];
    }

    cout << "\n--------------------"<< endl;

    for(int i = 0; i < arraySize; ++i)
    {
        cout << arrayName[i] << "   ";
    }

    cout << "\n--------------------"<< endl;

    //int countArr[arraySize];
     int cop = 0;

    for(int i = 0; i < arraySize; ++i)
    {
        int counter = 0;
        for(int j = 0; j < arraySize; ++j)
        {
            if(arrayName[i] == arrayName[j])
            {
                counter++;
            }
        }
        //countArr[i] = counter;

        for(int k = 0; k < arraySize; ++k)
        {
            if(arrayName[i] == arrayName[k])
            {
                cop++;

            }

        }

        if(cop == 1)
        {
            cout << arrayName[i] << " - " << counter << endl;
            cop = 0;
        }



    }





    return 0;
}

