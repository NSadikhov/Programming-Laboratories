#include <iostream>
#include <ctime>
using namespace std;

void random_array(int* arr, int num, int p, int q);
void display_array(int* arr, int num);
void swap_integers(int &x, int &y);
void reverse_array(int* arr, int num);

int main()
{

    const int num = 10;
    int arr[num];
    srand(time(0));
    random_array(arr,num,-10,10);
    display_array(arr,num);
    cout << "\nReversed version:\n";
    reverse_array(arr,num);
    display_array(arr,num);

    return 0;
}

void random_array(int* arr, int num, int p, int q)
{
    for(int i = 0; i < num; ++i)
    {
        arr[i] = rand()% (q - p + 1) + p;
    }

}

void display_array(int* arr, int num)
{
    for(int i = 0; i < num; ++i){
        cout << arr[i] << "\t";
    }

}


