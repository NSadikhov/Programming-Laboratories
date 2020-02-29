#include <iostream>
#include <cmath>
using namespace std;

void pyramid(int height);

int main()
{
    bool cont;

    do
    {
        cont = false;
        int height;
        cout << "Enter number for pyramid height: ";
        cin >> height;
        if(height <= 30 && height >= 1)
            pyramid(height);
        else
        {
            cout << "Height must be between 1 and 30" << endl;
            cont = true;
        }
    }
    while(cont);

    return 0;
}









