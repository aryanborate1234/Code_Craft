#include<stdio.h>
#include<stdlib.h>

float AvgDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        (iNo = -iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iSum += iDigit;
        iNo /= 10;
    }

    fAvg = (iSum / iCount);
    return fAvg;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("\n");
    printf("Enter the Value : ");
    scanf("%d", &iValue);

    fRet = AvgDigit(iValue);
    printf("Avgerage of Digit : %f" , fRet);
    printf("\n");


    return EXIT_SUCCESS;
}