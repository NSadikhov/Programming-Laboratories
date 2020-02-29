#include <iostream>
#include <cmath>
using namespace std;

int quotient(int, int);
int remainder(int, int);
void seperator();

int main()
{
    seperator();

    return 0;
}

int quotient(int a, int b){
    return a / b;
}

int remainder(int a, int b){
    return a % b;
}

void seperator(){
    int number;
    cout << "Enter number between 1 and 32767: ";
    cin >> number;
    if(number < 1 || number > 32767){
        cout << "Number must be between 1 and 32767\n";
        return;
    }
    int rev = 0;

    while(number != 0){
       rev = rev*10 +  remainder(number, 10);
       number = quotient(number, 10);
    }

    while(rev != 0){
        cout << remainder(rev, 10) << "  ";
        rev = quotient(rev, 10);
    }

}


