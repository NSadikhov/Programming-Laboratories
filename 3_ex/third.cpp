#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void ex_5()
{

    int first_int;
    int second_int;
    cout << "Enter the first Integer: ";
    cin >> first_int;
    cout << "Enter the second Integer: ";
    cin >> second_int;

    int large = first_int > second_int ? first_int : second_int;
    int small = first_int < second_int ? first_int : second_int;


    cout << "Smaller to Larger: ";
    for(int i = small; i <= large; ++i)
    {
        cout << setw(4) << i;
    }
    cout << endl;
    cout << "Larger to Smaller: ";
    for(int i = large; i >= small; --i)
    {
        cout << setw(4) << i;
    }
    cout << endl;
//    int n;
//    cout << "Enter integer for n: ";
//    cin >> n;
//
//    for(int i = small; i <= large; ++i){
//        if(to_string(i).find(to_string(n)) != string::npos){
//            cout << setw(4) << i;
//        }
//    }
//
//    cout << endl;

    int Q;
    cout << "Enter Q: ";
    cin >> Q;
    cout << "Numbers divisible by " << Q << " -> ";
    for(int i = small; i <= large; ++i)
    {
        if(i % Q == 0)
        {
            cout << setw(4) << i;
        }
    }

}

void ex_6()
{
    int n;
    cout << "Enter integer for n: ";
    cin >> n;

    for(int i = 0; i <= 9; ++i)
    {
        cout << setw(4) << i << " * " << n << " = " << i * n << endl;
    }

    int m;
    cout << "Enter integer for m: ";
    cin >> m;
    for(int i = 0; i <= m; ++i)
    {
        cout << setw(4) << i << " * " << n << " = " << i * n << endl;
    }

}

void ex_7()
{

    int initial_n;
    cout << "Enter initial n: ";
    cin >> initial_n;
    int sum = 0;

    for(int i = 0; i <= initial_n; ++i)
    {
        if(i % 2 != 0)
        {
            cout << setw(4) << i;
            sum += i;
        }
    }
    cout << endl;
    cout <<  "SUM is " << sum;

}

void ex_8()
{
    int a,b,Q;
    cout << "Enter Q: ";
    cin >> Q;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int sum = 0;
    int counter = 0;

    for(int i = a; i <= b; ++i)
    {
        if(i % Q == 0)
        {
            sum += i;
            counter++;
        }
    }
    cout << sum / counter;
}

void ex_9()
{

    for(int i = 0; i < 4; ++i)
    {
        for(int k = 0; k < 4; ++k)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    int counter_1 = 1;
    for(int i = 0; i < 4; ++i)
    {
        for(int k = 0; k < counter_1; ++k)
        {
            cout << "*";
        }
        counter_1++;
        cout << endl;
    }

    cout << endl;

    int if_counter = 3;
    for(int i = 0; i < 4; ++i)
    {
        for(int k = 0; k < 4; ++k)
        {

            if(k >= if_counter)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }
        if_counter--;
        cout << endl;
    }

    cout << endl;

    int if_counter_2 = 3;
    int if_counter_2_2 = 3;
    for(int i = 0; i < 4; ++i)
    {
        for(int k = 0; k < 7; ++k)
        {

            if(k >= if_counter_2 && k <= if_counter_2_2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }
        if_counter_2--;
        if_counter_2_2++;
        cout << endl;
    }


}

void ex_10()
{

    int given_Number;
    cout << "Enter number: ";
    cin >> given_Number;
    int sum = 0;

    for(int i = 1; i <= given_Number; ++i)
    {
        if(i % 10 == 1 || i % 10 == 2 || i % 10 == 7)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}

void ex_11()
{
    int given_Number;
    cout << "Enter number: ";
    cin >> given_Number;
    int sum = 0;
    int counter = 0;
    int result = 0;

    for(int i = 2; i <= given_Number; ++i)
    {
        int k = i;

        sum = 0;
        while(k > 0)
        {
            if(k >= 10)
            {
                counter = k % 10;
            }
            else
            {
                counter = k;
            }
            sum += counter;
            k /= 10;
        }
        int flag = 0;
        bool check = false;
        int m = sum / 2;
        if(sum != 1)
        {
            for(int f = 2; f <= m; ++f)
            {

                if(sum % f == 0)
                {
                    flag = 1;
                    break;
                }

            }
            if (flag == 0 )
            {
                cout << sum << "/" << endl;
                result += i;

            }
        }

    }
    cout << result << endl;

}

int main()
{
    //ex_5();
    //ex_6();
    //ex_7();
    //ex_8();
    //ex_9();
    //ex_10();
    ex_11();

    return 0;
}


