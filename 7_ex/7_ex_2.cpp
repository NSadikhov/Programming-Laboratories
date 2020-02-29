#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int b[100] = {0};
    int N;
    cout << "Enter number for N: ";
    cin >> N;
    int a[N];

    for(int i = 0; i < N; ++i)
    {
        a[i] = rand()%100;
    }

    for(int j = 0; j < N; ++j)
    {
        b[a[j]]++;
    }

    for(int i = 0; i < 100; ++i){
        cout << b[i] << endl;
    }

    return 0;
}
