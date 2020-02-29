#include <ctime>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>

using namespace std;

int main()
{

    char sentence[50];
    cout << "Enter a sentence: ";
    cin.get(sentence,50);

    for(int i = 0; i < strlen(sentence); ++i)
    {
        if(islower(sentence[i]))
        {
            cout << char(toupper(sentence[i]));
        }
        else{
            cout << sentence[i];
        }
    }

    return 0;
}
