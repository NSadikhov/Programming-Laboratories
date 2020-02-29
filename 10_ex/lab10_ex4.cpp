#include <iostream>
#include <cmath>
using namespace std;

bool isTriangle(int , int , int );
int circumference(int , int , int );
double area(int , int , int );
void ar_circum(int , int , int );

int main()
{

    int side1, side2, side3;
    cout << "Enter side-1: ";
    cin >> side1;
    cout << "Enter side-2: ";
    cin >> side2;
    cout << "Enter side-3: ";
    cin >> side3;

    isTriangle(side1,side2,side3) ? cout << "Possible\n" : cout << "Impossible\n";
    if(isTriangle(side1,side2,side3)){
        cout << "Circumference: " << circumference(side1,side2,side3) << endl;
        cout << "Area: " << area(side1,side2,side3) << endl;
        cout << "Both: ";
        ar_circum(side1,side2,side3);
        cout << endl;
    }
    return 0;
}

bool isTriangle(int side1, int side2, int side3){

   return (side1 > 0 && side2 > 0 && side3 > 0) ? true : false;
}

int circumference(int side1, int side2, int side3){

    return side1 + side2 + side3;
}

double area(int side1, int side2, int side3){
    double p = (circumference(side1,side2,side3)/2);
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

void ar_circum(int side1, int side2, int side3){
    cout << circumference(side1,side2,side3) << " " << area(side1,side2,side3);
}





