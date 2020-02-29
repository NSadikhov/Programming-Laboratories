#include <iostream>
using namespace std;

void add(int* first, int* last, int a){

    while(first < last){
        *first = *first + a;
          cout << *first << "\t";
        ++first;

    }

}


int main()
{
    int a[10] = {1,3,2,4,-2,7,2,5,6,8};
   add(a+2,a+6,a[4]);

    return 0;
}
