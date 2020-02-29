#include <iostream>
using namespace std;

int main()
{

    const int arraySize = 6;
    double scoreArray[arraySize];
    cout << "Score must be between 0 and 10" << endl;
    for(int i = 0; i < arraySize; ++i)
    {
        double input = 0;
        cout << i+1 << " - Score: ";
        cin >> input;
        if(input >= 0 && input <= 10)
        {
            scoreArray[i] = input;
        }
        else{
            cout << "Score must be between 0 and 10 !!!" << endl;
            --i;
        }
    }

    double highest = 0;
    double lowest = scoreArray[0];

    for(int i = 0; i < arraySize; ++i){
        if(scoreArray[i] > highest){
            highest = scoreArray[i];
        }
        if(scoreArray[i] < lowest){
            lowest = scoreArray[i];
        }
    }

    double average = 0;
    for(int i = 0; i < arraySize; ++i){
        if(scoreArray[i] != highest && scoreArray[i] != lowest){
            average += scoreArray[i];
        }
    }

    cout << "AVERAGE: " << average / 4 <<endl;

    return 0;
}
