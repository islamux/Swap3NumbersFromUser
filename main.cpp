#include <iostream>
using namespace std;

//Reading 
#include "read_number_positive_int.h"

// Printing & Swapping
#include "print_number_int_with_double_msg.h"
#include "print_shapes_from_text.h"
#include "print_swaping_3_numbers.h" 

// swaping 3 Numbers taked from user 
    // ex:
    // a = 115, b = 20, c = 301
    // a = 20, b = 301, c = 115
    
    // Steps:
    // 1- ReadFunc 
    // 2- Print Numbers Before
    // 3- Swaping and printing Swapped numbers ==>  (void)
 
int main(){

    // Reading 
    int number1 = ReadNumberPositiveInt("Enter a number :\n"); // 115 ==> 20   الاول ياخذ الثاني
    int number2 = ReadNumberPositiveInt("Enter a number :\n");  // 20 ==> 301 الثاني ياخذ الثالث 
    int number3 = ReadNumberPositiveInt("Enter a number :\n");  // 301 ==> 115 الثالث ياخذ الاول 

    // Decoration 
    PrintShapesFromText("text converted to shap => ", '+');

    // Printing Numbers Before swapinging
    PrintNumberIntWithDoubleMsg("Number 1 Before swaping = ", number1, ".");
    PrintNumberIntWithDoubleMsg("Number 2 Before swaping = ", number2, ".");
    PrintNumberIntWithDoubleMsg("Number 3 Before swaping = ", number3, ".");

    // Decoration 
    PrintShapesFromText("text to be converted to shape ..", '+');

    //Printing Numers After swaping
    PrintSwaping3Numbers(number1,number2,number3);
    
    return 0;
}
