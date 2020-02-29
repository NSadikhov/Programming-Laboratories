#include <iostream>
#include <cmath>
using namespace std;

float triangleArea(float side);
float triangleCircumference(float side);

int main()
{

    int cont = 0;
    double side = 0.0;
    double prevTriangle = 0;

    do
    {

        cout << "Enter a value for one side of a equilateral triangle: ";
        cin >> side;
        if(side <= 0)
        {
            cout << "The value must be greater than 0" << endl;
            continue;
        }
        cout << "The Area of a triangle: " << triangleArea(side) << endl;
        cout << "The Circumference of a triangle: " << triangleCircumference(side) << endl;

        if(prevTriangle > 0)
        {
            if(triangleArea(prevTriangle) > triangleArea(side))
            {
                cout << "The equilateral triangle with the smallest area: " << triangleArea(side) << endl;
                prevTriangle = triangleArea(side);
            }
            else
            {
                if(triangleArea(prevTriangle) < triangleArea(side))
                {
                    cout << "The equilateral triangle with the smallest area: " << triangleArea(prevTriangle) << endl;
                }
                else
                {
                    cout << "Triangles are equal" << endl;
                }
            }
        }


        do
        {
            cout << "Do you want to continue? If yes enter 1, no enter 0: ";
            cin >> cont;

            if(cont != 0 && cont != 1)
            {
                cout << "You must enter 0 or 1" << endl;
            }

            cout << "----------------------------------------------------------" << endl;
        }
        while(cont != 0 && cont != 1);

        if(cont == 1 && prevTriangle == 0)
            prevTriangle = side;

    }
    while(cont == 1);

    return 0;
}

float triangleArea(float side)
{

    float area = sqrt(3)/4*pow(side,2);

    return area;
}

float triangleCircumference(float side)
{

    float Circumference = 3*side;

    return Circumference;
}



