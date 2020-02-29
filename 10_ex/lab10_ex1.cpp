#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double, double);
bool is_Positive(double, double);

int main(){

    double a,b;
    cout << "Enter number for a: ";
    cin >> a;
    cout << "Enter number for b: ";
    cin >> b;

    if(is_Positive(a,b)){
        cout << hypotenuse(a,b);
    }

    return 0;
}

double hypotenuse(double a, double b){

    return sqrt(pow(a,2) + pow(b,2));
}

bool is_Positive(double a, double b){

    return (a > 0 && b > 0) ? true : false;
}
