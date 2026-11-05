#include<stdio.h>
#include<stdlib.h>

int main() {

    char sName[30];  
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Your Name :\n");
    scanf("%[^'\n']s" , sName); // enter remains in input buffer
    
    // %s --> valid till first whitespace
   //  %[^'\n']s --> except the string till press enter 

    printf("Enter Your Age :");
    scanf(" %d" , &iAge);  //space added 

    printf("Enter Your Marks :");
    scanf("%f" , &fMarks);

    printf("Welcome %s\n" , sName);
    printf("Your Age is : %d\n" , iAge);
    printf("Your Marks is : %f\n" , fMarks);

    return EXIT_SUCCESS ;
}