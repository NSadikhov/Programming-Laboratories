#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double budget;
    cout << "Enter budget: ";
    cin >> budget;
    double spent = 0;

    double sum = 0;

    do{
        cout << "Enter an amount spent (0 to end): ";
        cin >> spent;
        sum += spent;
    }
    while(spent != 0);

    cout << "Budget: " << budget << endl;
    cout << "Spent: " << sum << endl;
    if(sum > budget){
        cout << "You are " << sum - budget << " under budget" << endl;
    }
    else if(budget > sum){
        cout << "You are " << budget - sum << " over budget" << endl;
    }


    return 0;
}
