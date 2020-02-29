#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int cont;
    do
    {

        int choice;
        cout << "Type  " << "1 To Convert PLN To EURO" << endl;
        cout << setw(30) << "2 To Convert EURO To PLN" << endl;
        cout << setw(29) << "3 To Convert PLN To USD" << endl;
        cout << setw(29) << "4 To Convert USD To PLN" << endl;
        cout << setw(29) << "5 To Convert PLN To AZN" << endl;
        cout << setw(29) << "6 To Convert AZN To PLN" << endl;
        cout << "Choose: ";
        cin >> choice;
        cout << "Your choice is " << choice << endl;
        double amount;


        switch(choice)
        {
        case 1:
            cout << "Enter the amount in PLN: ";
            cin >> amount;
            cout << amount << " PLN = " << amount / 4.4065  << " EURO"<< endl;
            break;
        case 2:
            cout << "Enter the amount in EURO: ";
            cin >> amount;
            cout << amount << " EURO = " << amount * 4.4065  << " PLN"<< endl;
            break;
        case 3:
            cout << "Enter the amount in PLN: ";
            cin >> amount;
            cout << amount << " PLN = " << amount / 3.9976  << " USD"<< endl;
            break;
        case 4:
            cout << "Enter the amount in USD: ";
            cin >> amount;
            cout << amount << " USD = " << amount * 3.9976  << " PLN"<< endl;
            break;
        case 5:
            cout << "Enter the amount in PLN: ";
            cin >> amount;
            cout << amount << " PLN = " << amount / 2.2854  << " AZN"<< endl;
            break;
        case 6:
            cout << "Enter the amount in AZN: ";
            cin >> amount;
            cout << amount << " AZN = " << amount * 2.2854  << " PLN"<< endl;
            break;
        default:
            cout << "WRONG CHOICE" << endl;

            break;
        }
        cout << "CONTINUE? 1/0 -> ";
        cin >> cont;

    }
    while(cont == 1);


    return 0;
}


