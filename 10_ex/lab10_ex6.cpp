#include <iostream>
#include <cmath>
using namespace std;

double taxF(double &,
           double &,
           double &);
double price(double ,
           double ,
           double );
double tax_Rate(double ,
           double ,
           double );

int main()
{
    double tax;
    double price;
    double tax_Rate;


    taxF(tax,price,tax_Rate);


    return 0;
}

double taxF(double &tax,
           double &price,
           double &tax_Rate)
{

    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Tax Rate: ";
    cin >> tax_Rate;
    tax = (price * tax_Rate) / (100 + tax_Rate);
    cout << "for the Gross price " << price << " and tax at a rate " << tax_Rate << "%; the tax is " << tax << endl;
    return price;
}

double price(double tax,
             double price,
             double tax_Rate)
{


}

double tax_Rate(double tax,
                double price,
                double tax_Rate)
{


}






