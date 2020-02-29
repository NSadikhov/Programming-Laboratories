#include <iostream>
#include <cmath>
using namespace std;

double cylinderVolume(double radius, double height, double pi);
double cylinderSurfaceArea(double radius, double height, double pi);

int main()
{
    int cont = 1;
    const double pi = 3.14;
    double prevSurfaceArea = 0;
    int correctDataCounter = 0;
    while(cont == 1)
    {
        double radius, height;
        cout << "Enter a value for radius: ";
        cin >> radius;
        cout << "Enter a value for height: ";
        cin >> height;
        if(radius <= 0 || height <= 0)
        {
            cout << "Wrong data" << endl;
            continue;
        }
        correctDataCounter++;
        cout << "--------------------------------------------------------------------\n";
        cout << "Volume of the cylinder: " << cylinderVolume(radius,height,pi) << endl;
        double currentSurfaceArea = cylinderSurfaceArea(radius,height,pi);
        cout << "Surface area of the cylinder: " << currentSurfaceArea << endl;

        if(prevSurfaceArea != 0)
        {
            if(prevSurfaceArea > currentSurfaceArea)
            {
                cout << "A cylinder with greatest surface area: " << prevSurfaceArea << endl;
            }
            else
            {
                if(prevSurfaceArea < currentSurfaceArea)
                {
                    cout << "A cylinder with greatest surface area: " << currentSurfaceArea << endl;
                    prevSurfaceArea = currentSurfaceArea;
                }
                else
                {
                    cout << "Cylinders are equal" << endl;
                }
            }
        }

        cout << "--- " << correctDataCounter << " data given by the user is correct ---\n";
        do
        {
            cout << "*********************************************************************\n";

            cout << "Do you want to continue? if yes enter 1, no enter 0: ";
            cin >> cont;
        }
        while(cont != 0 && cont != 1);

        if(cont == 1 && prevSurfaceArea == 0)
        {

            prevSurfaceArea = cylinderSurfaceArea(radius,height,pi);
        }
    }
    return 0;
}

double cylinderVolume(double radius, double height, double pi)
{

    return pi * pow(radius,2) * height;
}

double cylinderSurfaceArea(double radius, double height, double pi)
{

    return 2 * pi * pow(radius,2) + 2 * pi * radius * height;
}



