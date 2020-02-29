#include<iostream>

#include <typeinfo>
using namespace std;

int main()
{
    auto number=33243243433434344LL;
    //cout << "Enter smth: ";
    //cin >> a;


    cout << (typeid(number).name());

    return 0;
}
