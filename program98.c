#include<stdio.h>
#include<stdlib.h>

// typedef : used to create an alies (nickname) or
// shortcut name for data type

typedef unsigned long long ULONG ;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 0;

    for(iCnt = 1 ,iFact = 1; iCnt <= iNo ; iCnt++ )
    {
        iFact *= iCnt;   
    }
    return iFact;
}

int main() {

    int iValue = 0 ;
    ULONG iRet = 0;

    printf("Enter the Number :\n");

    scanf("%d" , &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %lld" , iRet);

    return EXIT_SUCCESS;
}