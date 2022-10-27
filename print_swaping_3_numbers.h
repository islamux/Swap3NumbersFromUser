#include <iostream>
using namespace std;


void PrintSwaping3Numbers(int Number1, int Number2, int Number3){

    // Number1 ==> Number2
    int tempNumber1 = Number1;
    Number1 = Number2;
    cout << "Number 1 After Swapping = "<<  Number1<< "\n";
    
    // Number 2 ==> Number 3
     int tempNumber2 = Number2;
    Number2 = Number3;
    cout << "Number 2 After Swapping = " << Number2 << "\n";
    
    // Number 3 ==> Number 1
    int tempNumber3 = Number3;
    Number3 = tempNumber1;
    cout << "Number 3 After Swapping = " << Number3 << endl;
}
