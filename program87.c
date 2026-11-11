#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo) 
{
    if(iNo % 5 == 0) 
    {
        if((iNo % 3 == 0))  
        {
            printf("%d Number is Divisible by 5 and 3 Both" , iNo);
        }
        
        else
        {
            printf("%d Number is not Divisible by 5 and 3 Both" , iNo);
        }

/*  REQUIRMENT : DO WITHOUT LOGICAL AND
    IN HERE NOT USE THE LOGICAL AND 
    WE USE THE CONCEPT OF NESTED IF
*/        

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