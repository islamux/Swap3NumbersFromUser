#include <iostream>
using namespace std;


void PrintShapesFromText(string text, char shape){
    int textLength = text.length();

    for(int i = 0; i <= textLength; i++){
        cout << shape;
    }
    cout << "\n";

}
