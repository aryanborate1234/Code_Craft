#include<stdio.h>
#include<stdlib.h>

int main() {

    char sName[30];  

    printf("Enter Your Name :\n");
    scanf("%[^'\n']s" , sName); 
    
    // %s --> valid till first whitespace
   //  %[^'\n']s --> except the string till press enter 

    printf("Welcome %s\n" , sName);

    return EXIT_SUCCESS ;
}