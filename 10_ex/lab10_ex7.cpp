#include <iostream>
#include <cmath>
using namespace std;

void electric_Consumption(double hours, double days, double capacity);

int main()
{
    double hours, days, capacity;
    cout << "Enter number for hours: ";
    cin >> hours;
    cout << "Enter number for days: ";
    cin >> days;
    cout << "Enter number for capacity: ";
    cin >> capacity;
    cout << endl;

    electric_Consumption(hours,days,capacity);

    return 0;
}

void electric_Consumption(double hours, double days, double capacity){

    double energy_Cons = hours * days * (capacity / 1000);
    double annual_epxense = energy_Cons * 0.55;

    cout << "hours/day: " << hours << "\tdays/year: " << days << "\tcapacity: " << capacity << "\nAnnual energy consumption: " << energy_Cons << endl;
    cout << "Annual payment: " << annual_epxense << " ZLOTY"<< endl;
}








