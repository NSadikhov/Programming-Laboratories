#include <iostream>
using namespace std;

bool hasPositive(int*, int*);


int main()
{
    int a[10] = {26, 58, 79, 26, 18, 33, -77};

    if(hasPositive(a,a+10) == true){
        cout << " positive values\n";
    }

    return 0;
}









