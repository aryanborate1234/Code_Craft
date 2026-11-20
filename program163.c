#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = (iNo % 10);
        // printf("%d\n", iDigit);

        if((iDigit % 2) == 0)
        {
            printf("%d\n" , iDigit);
        }

        iNo = (iNo / 10);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Value : ");
    scanf("%d", &iValue);

    DisplayEvenDigit(iValue);

    return EXIT_SUCCESS;
}