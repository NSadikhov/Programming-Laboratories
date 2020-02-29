#include <ctime>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    for (int z = 0; z < spaces_x; z++)
    {
        double dist=( ( (spaces[z][0]-x)^2) + ( (spaces[z][1]-y)^2) );
        dist = abs(dist);
        dist = sqrt(dist);
        cout << "for x " << spaces[z][0] <<
             " for y " << spaces[z][1] <<
             " dist is  "<< dist << endl;

        if (dist < min_dist)
        {
            min_dist = dist;
            index = z;
        }
    }
}
