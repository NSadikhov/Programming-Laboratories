#include <ctime>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>

using namespace std;

int main()
{
    char word[100];
    cout << "Enter a word: ";
    cin.get(word,100);
    char word_2[100] = "";
    char reverse_Word[100] = "";
    int counter = 0;
    int reverse_Counter = 0;
    for(int i = 0; i < strlen(word); ++i)
    {
        if(islower(word[i]))
        {
            word_2[counter] = word[i];
            counter++;
        }
        else
        {
            if(isupper(word[i]))
            {
                word_2[counter] = tolower(word[i]);
                counter++;
            }
        }

    }

    for(int i = strlen(word_2)-1; i >= 0; --i)
    {
        reverse_Word[reverse_Counter] = word_2[i];
        reverse_Counter++;
    }

    bool check = true;
    for(int i = 0; i < strlen(word_2); ++i)
    {
        if(word_2[i] != reverse_Word[i])
        {
            check = false;
        }
    }

    if(check)
    {
        cout << "Sentence is palindrome.";
    }
    else
    {
        cout << "Sentence is not palindrome.";
    }

    return 0;
}
