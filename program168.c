#include<stdio.h>
#include<stdlib.h>

float AvgDigit(int iNo)
{
    float fDigit = 0.0f;
    float fSum = 0.0f;
    float fCount = 0.0f;
    float fAvg = 0.0f;

    while(iNo != 0)
    {
        fDigit = iNo % 10;
        fSum += fDigit; 
        fCount++;;
        iNo = iNo / 10;
    }

    fAvg = (fSum / fCount);
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