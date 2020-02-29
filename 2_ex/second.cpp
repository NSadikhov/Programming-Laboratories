#include <iostream>
#include <string>
#include <typeinfo>
#include <cmath>
using namespace std;

int ex_1();
int ex_2();
int ex_3();
int ex_4();
int ex_5();
int ex_6();
int ex_7();
int ex_8();
int ex_9();
int ex_10();
int ex_11();
int ex_12();


int main()
{

    //ex_1();
    //ex_2();
    //ex_3();
    //ex_4();
    //ex_5();
    //ex_6();
    //ex_7();
    //ex_8();
    //ex_9();
    //ex_10();
    //ex_11();
    ex_12();

    return 0;
}

int ex_1()
{

    double quantity;
    double price;
    double expense;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price: ";
    cin >> price;
    expense = quantity * price;
    if(expense > 5000)
    {
        expense -= expense * 10 / 100;
    }
    cout << "Total expense: " << expense << endl;

    return 0;
}

int ex_2()
{

    int digit;
    cout << "Enter digit: ";
    cin >> digit;
    /*
    if(to_string(digit).length() == 2)
    {
        cout << "The number is two-digit";
    }
    else
    {
        cout << "The number is not two-digit";
    }
    */

    if((digit > 9 && digit < 100) || ( digit > -100 && digit < -9))
    {
        cout << "The number is two-digit";
    }
    else
    {
        cout << "The number is not two-digit";
    }

    cout << endl;

    return 0;
}

int ex_3()
{

    int first_number;
    int second_number;
    cout << "Enter the first number: ";
    cin >> first_number;
    cout << "Enter the second number: ";
    cin >> second_number;
    if(first_number > second_number)
    {
        cout << first_number << " is larger";
    }
    else if(first_number == second_number)
    {
        cout << "These numbers are equal";
    }
    else
    {
        cout << second_number << " is larger";
    }
    cout << endl;

    return 0;
}

int ex_4()
{

    double cost_price;
    double selling_price;
    cout << "Enter cost price of item: ";
    cin >> cost_price;
    cout << "Enter selling price of item: ";
    cin >> selling_price;
    if(cost_price > selling_price)
    {
        cout << "Loss: " << cost_price - selling_price;
    }
    else if(cost_price == selling_price)
    {
        cout << "No Profit / No Loss";
    }
    else
    {
        cout << "Profit: " << selling_price - cost_price;
    }
    cout << endl;
    return 0;
}

int ex_5()
{

    cout << "ax + b = 0" << endl;
    double a_number;
    cout << "Enter number for a: ";
    cin >> a_number;
    double b_number;
    cout << "Enter number for b: ";
    cin >> b_number;
    cout << a_number << "x + " << b_number << " = 0" << endl;
    cout << "x = " << 0 - b_number / a_number << endl;

    return 0;
}

int ex_6()
{

    cout << "S = V * T" << endl;
    double distance;
    cout << "Enter the route in km: ";
    cin >> distance;
    double time;
    cout << "Enter the time in minutes: ";
    cin >> time;
    cout << "Speed: " << distance / (time * 1 / 60) << " km/h" << endl;

    return 0;
}

int ex_7()
{

    int year;
    cout << "Enter year: ";
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << "The year is a leap year";
    }
    else
    {
        cout << "The year is not a leap year";
    }
    cout << endl;

    return 0;
}

int ex_8()
{

    cout << "ax^2 + bx + c = 0" << endl;
    double a;
    double b;
    double c;
    cout << "Enter number for a: ";
    cin >> a;
    cout << "Enter number for b: ";
    cin >> b;
    cout << "Enter number for c: ";
    cin >> c;
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    double discriminant = b * b - (4 * a * c);
    double x_1;
    double x_2;
    if(discriminant > 0)
    {
        x_1 = (-b + sqrt(discriminant)) / (2*a);
        x_2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "x = " << x_1 << endl;
        cout << "x = " << x_2 << endl;
    }
    else if(discriminant == 0)
    {
        x_1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x = " << x_1 << endl;
        cout << "x = " << x_1 << endl;
    }

    return 0;
}

bool checkDate(int day, int month, int year)
{

    bool isLoop;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        isLoop = true;
    }
    else
    {
        isLoop = false;
    }

    if((day > 31 || day < 1) || (month > 12 || month < 1) || (year < 1 || year > 9999))
    {
        return false;
    }
    else
    {
        if(((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)) ||
                (isLoop && month == 2 && day > 29)
          )
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}

int ex_9()
{
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    cout << endl;
    int passed_days = (month-1) * 30 + day;
    cout << passed_days << " days have passed since the beginning of the year" << endl;

    if(checkDate(day, month, year))
    {
        cout << "The format of the date is correct" << endl;
    }
    else
    {
        cout << "The format of the date is not correct" << endl;
    }

    return 0;
}

int ex_10()
{
    int day_1, month_1, year_1;
    int day_2, month_2, year_2;
    cout << "Enter day_1: ";
    cin >> day_1;
    cout << "Enter month_1: ";
    cin >> month_1;
    cout << "Enter year_1: ";
    cin >> year_1;
    cout << endl;
    cout << day_1 << "." << month_1 << "." << year_1 << endl;
    cout << endl;
    cout << "Enter day_2: ";
    cin >> day_2;
    cout << "Enter month_2: ";
    cin >> month_2;
    cout << "Enter year_2: ";
    cin >> year_2;
    cout << endl;
    cout << day_2 << "." << month_2 << "." << year_2 << endl;
    cout << endl;

    bool isCorrect_1;
    bool isCorrect_2;

    if(checkDate(day_1, month_1, year_1))
    {
        cout << "The format of the 1-Date is correct" << endl;
        isCorrect_1 = true;
    }
    else
    {
        cout << "The format of the 1-Date is not correct" << endl;
        isCorrect_1 = false;
    }

    if(checkDate(day_2, month_2, year_2))
    {
        cout << "The format of the 2-Date is correct" << endl;
        isCorrect_2 = true;
    }
    else
    {
        cout << "The format of the 2-Date is not correct" << endl;
        isCorrect_2 = false;
    }

    cout << endl;

    if(isCorrect_1 == isCorrect_2)
    {
        if((day_1 > day_2 || month_1 > month_2) && year_1 > year_2)
        {
            cout << "Second Date is Earlier" << endl;
        }
        else
        {
            cout << "First Date is Earlier" << endl;
        }
    }

    return 0;
}

int ex_11()
{

    int day_1, month_1, year_1;
    int day_2, month_2, year_2;
    cout << "Enter day_1: ";
    cin >> day_1;
    cout << "Enter month_1: ";
    cin >> month_1;
    cout << "Enter year_1: ";
    cin >> year_1;
    cout << endl;
    cout << day_1 << "." << month_1 << "." << year_1 << endl;
    cout << endl;
    cout << "Enter day_2: ";
    cin >> day_2;
    cout << "Enter month_2: ";
    cin >> month_2;
    cout << "Enter year_2: ";
    cin >> year_2;
    cout << endl;
    cout << day_2 << "." << month_2 << "." << year_2 << endl;
    cout << endl;


    int passed_Time = (365-(((month_1-1)*30) + day_1))+((year_2-year_1-1)*365)+(((month_2-1)*30) + day_2);

    cout << "Passed Time: " << passed_Time << endl << endl;

    if(checkDate(day_1, month_1, year_1))
    {
        cout << "The format of the 1-Date is correct" << endl;

    }
    else
    {
        cout << "The format of the 1-Date is not correct" << endl;

    }

    if(checkDate(day_2, month_2, year_2))
    {
        cout << "The format of the 2-Date is correct" << endl;

    }
    else
    {
        cout << "The format of the 2-Date is not correct" << endl;

    }

    return 0;
}

int ex_12(){



    return 0;
}








