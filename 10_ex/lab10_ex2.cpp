#include <iostream>
#include <cmath>
using namespace std;


bool input_integers(int &, int &);
int gcd(int, int);
int lcm(int, int);

int main()
{

    int a,b;

    if(input_integers(a,b))
    {
        cout << "GCD: "<< gcd(a,b) << endl;
        cout << "LCM: "<< lcm(a,b) << endl;

    }

    return 0;
}


bool input_integers(int &a, int &b)
{
    cout << "Enter number for a: ";
    cin >> a;
    cout << "Enter number for b: ";
    cin >> b;

    return (a > 0 && b > 0) ? true : false;
}

int gcd(int a, int b)
{
    while(a != b)
    {
        (a > b) ? a-=b : b-=a;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a,b);
}


