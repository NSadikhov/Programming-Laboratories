#include <iostream>
using namespace std;

int ex_1();
int ex_2();
int ex_3();
int ex_4();
int ex_5();
int ex_6();
int ex_7();

int main(){
    //ex_1();
    //ex_2();
    //ex_3();
    //ex_4();
    //ex_5();
    //ex_6();
    //ex_7();

    return 0;
}

int ex_1(){
    cout << "Hello World!!!";
    return 0;
}

int ex_2(){
    double celsius;
    cout << "Temperature converter from Celsius into Kelvin and Fahrenheit" << endl << endl;
    cout << "Enter the value of temperature in Celsius scale: ";
    cin >> celsius;
    cout << "-------------------------------------------------------------" << endl;
    double kelvin = celsius + 273.15;
    double fahrenheit = 32 + 9/5.0 * celsius;
    cout << celsius << " Celsius" << " = " << kelvin << " Kelvin" << endl;
    cout << celsius << " Celsius" << " = " << fahrenheit << " Fahrenheit" << endl;
    cout << "-------------------------------------------------------------" << endl;
    return 0;
}

int ex_3(){
    double first_number;
    double second_number;
    cout << "Enter two integers: " << endl;
    cout << "a = ";
    cin >> first_number;
    cout << "b = ";
    cin >> second_number;
    cout << first_number << " + " << second_number << " = " << first_number + second_number << endl;
    cout << first_number << " - " << second_number << " = " << first_number - second_number << endl;
    cout << first_number << " * " << second_number << " = " << first_number * second_number << endl;
    cout << first_number << " / " << second_number << " = " << first_number / second_number << endl;
    cout << first_number << " % " << second_number << " = " << (int)first_number % (int)second_number << endl;
    return 0;
}

int ex_4(){
    double first_number, second_number, third_number;
    cout << "Enter three integers: " << endl;
    cin >> first_number >> second_number >> third_number;
    cout << "Sum is " << first_number + second_number + third_number << endl;
    cout << "Average is " << (first_number + second_number + third_number) / 3 << endl;
    cout << "Product is " << first_number * second_number * third_number << endl;
    return 0;
}

int ex_5(){
    cout << "#     #     ########\n##    #     #      #\n# #   #     #\n#  #  #     ########\n#   # #            #\n#    ##     #      #\n#     #     ########"<< endl;
    return 0;
}

int ex_6(){
    cout << "*****************************************************" << endl;
    cout << "*                                                   *" << endl;
    cout << "*               Nijat Sadikhov                      *" << endl;
    cout << "*               Email: nsadixov2000@gmail.com       *" << endl;
    cout << "*               Phone: 508 504 976                  *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
    return 0;
}

int ex_7(){
    double first_side, second_side, third_side;
    cout << "First side of Triangle is: ";
    cin >> first_side;
    cout << "Second side of Triangle is: ";
    cin >> second_side;
    if(first_side == second_side || 180-(first_side + second_side) == first_side || 180-(first_side + second_side) == second_side){
        cout << "The Triangle is isosceles";
    }
    else{
        cout << "The Triangle is not isosceles";
    }
    return 0;
}



