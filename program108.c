#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main(void)
{
    int iValue = 0;
    int bRet = false;

    printf("Enter the Number :");
    scanf("%d" , &iValue);

    bRet = CheckPrime(iValue);

    if(bRet = true)
    {
        printf("Number is Prime");
    }
    else{
        printf("Number is Not prime");
    }

    return EXIT_SUCCESS;
} 
