#include<stdio.h>
#include<stdlib.h>

void DisplayOddEvenDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = (iNo % 10);


        if((iDigit % 2) != 0)
        {
            printf("Odd : %d\n" , iDigit);
        }

        if ((iDigit % 2) == 0)
        {
            printf("Even : %d\n" , iDigit);
        }

        iNo = (iNo / 10);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Value : ");
    scanf("%d", &iValue);

    DisplayOddEvenDigit(iValue);

    return EXIT_SUCCESS;
}