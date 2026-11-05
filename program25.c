#include<stdio.h>
#include<stdlib.h>

int main() {

    char sName[30];  

    printf("Enter Your Name :\n");
    scanf("%s" , sName); //%s --> valid till first whitespace

    printf("Welcome %s\n" , sName);

    return EXIT_SUCCESS ;
}