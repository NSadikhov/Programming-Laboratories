#include <ctime>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){

    char sentence[50];
    cout << "Enter a sentence: ";
    cin.get(sentence,50);

    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    int counter = 0;
    int counterLower = 0;

    for(int i = 0; i < strlen(sentence); ++i){
        if(sentence[i] == letter){
            counter++;
        }

        if(islower(sentence[i])){
            counterLower++;
        }
    }

    cout << "Letter " << letter << " occurred " << counter << " times\n";
    cout << counterLower << " Lowercase Letters occurred";

    return 0;
}
