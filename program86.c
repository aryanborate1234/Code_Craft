/*
    ---------------------------------------------------
                    OPERATION ||
    ---------------------------------------------------
        RESULT 1     RESULT 2       FinalResult
    ---------------------------------------------------
          TRUE          TRUE            TRUE  (Short Circuit Evaluation)
          TRUE          FALSE           TRUE  (Short Circuit Evaluation)
          FALSE         TRUE            TRUE 
          FALSE         FALSE           FALSE  
    ---------------------------------------------------
*/


#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo) 
{
    if((iNo % 5 == 0) || (iNo % 3 == 0)) 

    {
        printf("%d Number is Divisible by 5 or 3 Both" , iNo);
    }
    else
    {
        printf("%d Number is not Divisible by 5 or 3 Both" , iNo);
    }
}

int main() {

    int iValue = 0;
    printf("Enter the Number :\n");

    scanf("%d" , &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}