#include <ctime>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main(){

    char sentence[50];
    cout << "Enter a sentence: ";
    cin.get(sentence,50);

    for(int i = 0; i < strlen(sentence); ++i){
        cout << sentence[i] << " ";
    }

    cout << endl;

    for(int i = strlen(sentence); i >= 0; --i){
        cout << sentence[i];
    }



    return 0;
}
