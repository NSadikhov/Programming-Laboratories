#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(int argc, char *argv[])
{
    cout << "NUM: " << argc << endl;
    cout << "Name: "<< argv[0] << endl;
    cout << "Arguments: ";
    for(int i = 0; i < argc; ++i){
        cout << argv[i] << "\t";
    }

    return 0;
}

