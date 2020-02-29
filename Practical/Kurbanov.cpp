#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int arraySize = 9;
    int arr[arraySize];

    for(int i = 0; i < arraySize; ++i)
    {
        cout << i+1 << ": ";
        cin >> arr[i];
    }

    int sum = 0;
    bool check = false;
    for(int i = 0; i < arraySize; ++i)
    {
        if(arr[i] > arr[arraySize-1])
        {
            sum += arr[i];
            check = true;
        }

    }
    if(check)
    cout << "Sum: " << sum << endl;
    else
        cout << "There is no integer greater than the last value from the array\n";
    return 0;
}
