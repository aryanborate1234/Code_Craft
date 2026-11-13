#include<stdio.h>
#include<stdlib.h>
// check wheter = bool

void CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;


    for(iCnt = 1 ; iCnt <= iNo/2; iCnt++ )
    {
        if(iNo % iCnt == 0) 
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo) {
        printf("It is Perfect Number ");
    }
    else {
        printf("It is not a perfect number");
    }
}

int main() {

    int iValue = 0;

    printf("Enter the Number :\n");

    scanf("%d" , &iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}


/*
---------------------------------------------------
                TIME COMPLEXITY : O(N/2)
---------------------------------------------------

*/