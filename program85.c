/*
    ---------------------------------------------------
                    OPERATION &&
    ---------------------------------------------------
        RESULT 1     RESULT 2       FinalResult
    ---------------------------------------------------
          TRUE          TRUE            TRUE
          TRUE          FALSE           FALSE
          FALSE         TRUE            FALSE   (Short Circuit Evaluatiom)
          FALSE         FALSE           FALSE   (Short Circuit Evaluation)
    ---------------------------------------------------
*/


#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo) 
{
    if((iNo % 5 == 0) && (iNo % 3 == 0)) 

    {
        printf("%d Number is Divisible by 5 and 3 Both" , iNo);
    }
    else
    {
        printf("%d Number is not Divisible by 5 and 3 Both" , iNo);
    }
}

int main() {

    int iValue = 0;
    printf("Enter the Number :\n");

    scanf("%d" , &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}