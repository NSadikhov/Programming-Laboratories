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

void pyramid(int height)
{

    int inner_height1 = height;
    int inner_height2 = height;
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < height * 2; ++j){

            if(j >= inner_height1-1 && j <= inner_height2){
                cout << "*";
            }
            else
                cout << " ";

        }

        cout << endl;
        inner_height1--;
        inner_height2++;
    }

}








