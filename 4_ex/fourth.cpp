#include <iostream>
#include <algorithm>
using namespace std;

void ex_3()
{
    bool check = true;
    while(check)
    {
        int integer;
        cout << "Enter at most 6-digit integer: ";
        cin >> integer;
        if(integer > 0 && integer < 1000000)
        {
            int integer_copy = integer;
            while(integer_copy > 10)
            {
                int int_first = integer_copy % 10;
                integer_copy /= 10;
                int int_second = integer_copy % 10;
                if(int_first != int_second)
                {
                    check = false;
                }
            }
            if(check)
            {
                cout << "Digits are equal" << endl;
            }
            else
            {
                cout << "Digits are not equal" << endl;
            }

        }
        else
        {
            cout << "Idiot I said at most 6-digit..." << endl;

        }

    }

}

void ex_4()
{

    bool check = true;
    while(check)
    {
        int integer;
        cout << "Enter at most 6-digit integer: ";
        cin >> integer;
        if(integer > 0 && integer < 1000000)
        {
            int integer_copy = integer;
            while(integer_copy > 0)
            {
                int integer_checker = integer_copy % 10;

                if(integer_checker % 2 != 0)
                {
                    check = false;
                }
                integer_copy /= 10;

            }
            if(check)
            {
                cout << "Digits are even" << endl;
            }
            else
            {
                cout << "Digits are not even" << endl;
            }

        }
        else
        {
            cout << "Idiot I said at most 6-digit..." << endl;

        }

    }

}

void ex_5()
{

    bool check = true;
    while(check)
    {
        int integer;
        cout << "Enter at most 6-digit integer: ";
        cin >> integer;
        int sum = 0;
        if(integer > 9 && integer < 1000000)
        {
            int integer_copy = integer;
            while(integer_copy > 0)
            {
                integer_copy /= 10;
                sum += integer_copy % 10;
            }

            if(sum % 10 == integer % 10)
            {
                cout << "Number is correct" << endl;
            }
            else
            {
                cout << "Number is not correct" << endl;
            }

        }
        else
        {
            cout << "Idiot I said at most 6-digit..." << endl;

        }

    }

}

void ex_6()
{
    int integer;
    cout << "Enter integer: ";
    cin >> integer;
    int smallest_number = 0;
    int sum = 0;
    while(sum <= integer)
    {
        sum+=++smallest_number;
    }
    cout << sum << " is obtained by the addition of " << smallest_number << " consecutive positive integers" << endl;
}

void ex_7()
{
    int first_int, second_int;
    cout << "Enter first integer: ";
    cin >> first_int;
    cout << "Enter second integer: ";
    cin >> second_int;

    int bigger = (first_int > second_int) ? first_int : second_int;
    int smaller = (first_int > second_int) ? second_int : first_int;

    int remainder = 0;

    do
    {
        remainder = bigger % smaller;
        bigger = smaller;
        smaller = remainder;
    }
    while(bigger % smaller != 0);

    cout << "GCD(" << first_int << "," << second_int << ") => " << remainder << endl;
    int i = 1;

    while(i <= first_int * second_int)
    {

        if((first_int * second_int) % i == 0 && i % first_int == 0 && i % second_int == 0)
        {
            cout << "LCM(" << first_int << "," << second_int << ") => " << i << endl;
            break;
        }

        i++;

    }


}

void ex_8()
{

    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    int total_Sum = day + month + year;
    int sum = 0;

    while(total_Sum > 0 )
    {

        sum += total_Sum % 10;
        total_Sum /= 10;
    }
    if(sum > 10)
    {
        int part_1 = sum % 10;
        int part_2 = sum / 10;
        if(part_1 != part_2)
        {
            sum = part_1 + part_2;
        }

    }

    cout << sum;

}

void ex_9()
{
    int number;

    do
    {
        cout << "Enter positive number: ";
        cin >> number;


        int i = 2;
        int k = 0;
        int prime_Factor = 0;
        while(number > 1)
        {

            while(i <= number)
            {
                if(number % i == 0)
                {
                    if(prime_Factor != 0)
                    {
                        cout << " x ";
                    }

                    prime_Factor = i;
                    cout << i;
                    number /= prime_Factor;
                    k++;
                    break;
                }

                i++;
            }
        }
        if(k == 1)
        {
            cout << " -->   PRIME NUMBER" << endl;
        }
        cout << endl;
    }
    while(number > 0);

}

void ex_10()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    int new_Number = 0;
    int sum = number;
    int counter = 1;
    while(sum > 0)
    {
        int a = sum%10;
        a++;
        new_Number += a * counter;
        counter *= 10;
        sum /= 10;
        if(a == 10){
            counter *= 10;
        }
    }

    cout << new_Number << endl;
}

void ex_11(){

    int number;
    cout << "Enter number: ";
    cin >> number;
    int new_Number = 0;
    int sum = number;
    int counter = 1;
    int counter_2 = 1;
    while(sum > 0)
    {
        int a = sum%10;
        a += counter_2;
        new_Number += a * counter;
        counter *= 10;
        sum /= 10;
        if(a >= 10){
            counter *= 10;
        }
        counter_2++;
    }

    cout << new_Number << endl;
}

int main()
{
    //ex_3();
    //ex_4();
    //ex_5();
    //ex_6();
    //ex_7();
    //ex_8();
    //ex_9();
    //ex_10();
    ex_11();

    return 0;
}



