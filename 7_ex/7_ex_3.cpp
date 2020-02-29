#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

int main()
{
    srand(time(0));
    int intArray[20];
    int a = 0;
    int b = 0;
    cout << "Enter number for a: ";
    cin >> a;
    cout << "Enter number for b: ";
    cin >> b;
    for(int i = 0; i < 20; ++i)
    {

        if(a < b)
        {
            intArray[i] = rand()% (b - a + 1) + a;
        }
        else
        {
            intArray[i] = rand()% (a - b + 1) + b;
        }

    }

    int largest[3];


    bool inner_Con = false;
    for(int i = 2; i >= 0; --i)
    {
        int highest = 0;
        for(int j = 0; j < 20; ++j)
        {
            if(intArray[j] > highest)
            {


                    //inner_Con = false;
                    for(int k = 2; k >= i; --k)
                    {
                        if(intArray[j] = largest[k]){
                            continue;
                        }

                        if(intArray[j] != largest[k])
                        {
                            if(inner_Con && intArray[j] != largest[k+1])
                            {
                                highest = intArray[j];
                            }

                        }
                        inner_Con = true;
                    }


            }
            cout << intArray[j] << endl;
        }
        largest[i] = highest;

    }

    cout << "-----------------------------" << endl;
    for(int i = 0; i < 3; ++i)
    {
        cout << largest[i] << endl;
    }

    return 0;
}
