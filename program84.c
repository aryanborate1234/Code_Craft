#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo) {
    if(iNo % 5 == 0) 
    {
        printf("%d Number is Divisible by 5" , iNo);
    }
    else
    {
        printf("%d Number is not Divisible by 5" , iNo);

    }
}



int main() {

    int iValue = 0;
    printf("Enter the Number :\n");
    scanf("%d" , &iValue);

    CheckDivisible(iValue);





    
    return EXIT_SUCCESS;
}