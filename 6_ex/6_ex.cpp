#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int tries_Main;
    cout << "Enter number for tries: ";
    cin >> tries_Main;
    bool cong = false;
    do
    {
        srand(time(0));

        int A = rand()%101;
        int B = rand()%101;
        int random_Number = (A < B) ? rand()%(B - A + 1) + A : rand()%(A - B + 1) + B;

        int answer;
        cong = false;
        int tries = tries_Main;


        do
        {
            if(B>A)
                cout << "Random Number ["<< A <<"-"<< B << "] / Enter number: ";
            else
                cout << "Random Number ["<< B <<"-"<< A << "] / Enter number: ";

            cin >> answer;
            if(answer == random_Number)
            {
                cong = true;
            }
            else
            {
                if(answer > random_Number)
                {
                    cout << "It must be smaller" << endl;
                }
                else
                {
                    cout << "It must be larger" << endl;
                }
            }

            tries--;
            cout << "Tries: " << tries << endl;
        }
        while(tries > 0 && cong == false);

        if(cong)
        {
            cout << "Congratulation!!!" << endl;
            tries_Main /= 2;
            cout << "---------------NEXT LEVEL---------------";
        }
    }
    while(cong == true);

    return 0;
}
