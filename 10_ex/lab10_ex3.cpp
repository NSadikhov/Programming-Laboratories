#include <iostream>
#include <cmath>
using namespace std;

void rectangle(char , int , int );

int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;

    int width, height;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

    rectangle(character,height,width);

    return 0;
}

void rectangle(char character, int height, int width){
    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            cout << character;
        }
        cout << endl;
    }
}





