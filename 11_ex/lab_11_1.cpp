#include <iostream>
using namespace std;

void input_array(int* arr, int num);
double average(int* arr, int num);

int main(){


    const int num = 5;

    int arr[num];

    input_array(arr,num);
    cout << "Average is: " << average(arr,num) << endl;



    return 0;
}

void input_array(int* arr, int num){
    for(int i = 0; i < num; ++i){
        cout << i+1 << "-number: ";
        cin >> arr[i];
    }

}

double average(int* arr, int num){
    double sum = 0;
    for(int i = 0; i < num; ++i){
        sum += arr[i];
    }

    return sum/num;
}



