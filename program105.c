#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// check wheter = bool

bool CheckPerfect(int iNo)
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
        return true;
    }
    else {
        return false;
    }
}

int main() {

    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");

    scanf("%d" , &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true){
        printf("it is perfect no.");
    }
    else{
        printf("it is not perfect no.");

    }

    return EXIT_SUCCESS;
}


/*
---------------------------------------------------
                TIME COMPLEXITY : O(N/2)
---------------------------------------------------

*/