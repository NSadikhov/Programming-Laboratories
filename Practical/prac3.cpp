#include <iostream>
#include <ctime>
using namespace std;

void generateRandomArray(int *arr, int how_many, int p, int q);
void displayArray(int *arr, int how_many);
double arithmeticAverageA(int *arr, int how_many);
double arithmeticAverageB(int *arr, int how_many);
double arithmeticAverageC(int *arr, int how_many, int p, int q);
int sumOfOdd(int *arr, int how_many);
void display3Divisible(int *arr, int how_many);
int greatestValue(int *arr, int how_many);
int greatestOddValue(int *arr, int how_many);

int main()
{

    srand(time(nullptr));
    const int arraySize = 10;
    int* arr = new int[arraySize];
    int* arrForE = new int[arraySize];
    generateRandomArray(arr,arraySize,-10,10);
    displayArray(arr,arraySize);
    cout << "Arithmetic Average: " << arithmeticAverageA(arr,arraySize) << endl;
    cout << "Arithmetic Average [-5,5]: " << arithmeticAverageB(arr,arraySize) << endl;
    cout << "Arithmetic Average [p,q]: " << arithmeticAverageC(arr,arraySize,-7,7) << endl;
    cout << "Sum of odd numbers: " << sumOfOdd(arr,arraySize) << endl;
    cout << "--- Numbers divisible by 3 ---\n";
    display3Divisible(arr,arraySize);
    cout << "The greatest value from the Array: " << greatestValue(arr,arraySize) << endl;
    cout << "The greatest odd value from the Array: " << greatestOddValue(arr,arraySize) << endl;
    return 0;
}

void generateRandomArray(int *arr, int how_many, int p, int q)
{

    for(int i = 0; i < how_many; ++i)
    {
        if(i == 0)
        {
            do
            {
                arr[i] = rand()% (q - p + 1) + p;
            }
            while(arr[i]%3 != 0 || arr[i]%2 == 0);
        }
        else
            arr[i] = rand()% (q - p + 1) + p;
    }

}

void displayArray(int *arr, int how_many)
{

    for(int i = 0; i < how_many; ++i)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

}

double arithmeticAverageA(int *arr, int how_many)
{
    double average = 0;
    int counter = 0;
    for(int i = 0; i < how_many; ++i)
    {
        average += arr[i];
        counter++;
    }
    average /= counter;
    return average;
}

double arithmeticAverageB(int *arr, int how_many)
{

    double average = 0;
    int counter = 0;
    for(int i = 0; i < how_many; ++i)
    {
        if(arr[i] >= -5 && arr[i] <= 5)
        {
            average += arr[i];
            counter++;
        }
    }
    average /= counter;
    return average;

}

double arithmeticAverageC(int *arr, int how_many, int p, int q)
{

    double average = 0;
    int counter = 0;
    for(int i = 0; i < how_many; ++i)
    {
        if(arr[i] >= p && arr[i] <= q)
        {
            average += arr[i];
            counter++;
        }
    }
    average /= counter;
    return average;

}

int sumOfOdd(int *arr, int how_many)
{
    int sum = 0;

    for(int i = 0; i < how_many; ++i)
    {
        if(arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}

void display3Divisible(int *arr, int how_many)
{
    for(int i = 0; i < how_many; ++i)
    {
        if(arr[i] % 3 == 0)
        {
            cout << arr[i] << "\t";
        }
    }
    cout << endl;

}

int greatestValue(int *arr, int how_many)
{
    int greatest = 0;
    for(int i = 0; i < how_many; ++i)
    {
        if(greatest < arr[i])
            greatest = arr[i];
    }

    return greatest;
}

int greatestOddValue(int *arr, int how_many)
{
    int greatestOdd = 0;
    for(int i = 0; i < how_many; ++i)
    {
        if(greatestOdd < arr[i] && arr[i]%2 != 0)
            greatestOdd = arr[i];
    }

    return greatestOdd;
}

