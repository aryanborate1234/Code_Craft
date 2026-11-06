#include<stdio.h>
#include<stdlib.h>

int Maximum (int iNo1 , int iNo2 , int iNo3 , int iNo4) {

    // if(iNo1 > iNo2)
    // return iNo1;

    // else if (iNo2 > iNo3)
    // return iNo2;

    // else
    // return iNo3;

    if ( (iNo1 < iNo2) && (iNo1 < iNo3) && (iNo1 < iNo4)) {
        return iNo1;
    }

    else if ((iNo2 < iNo1) && (iNo2 < iNo3) && (iNo2 < iNo4 ))
    {
        return iNo2;/* code */
    }

    else if ((iNo3 < iNo1) && (iNo3 < iNo2) && (iNo3 < iNo4 ))
    {
        return iNo3;/* code */
    }


    else {
        return iNo4;
    }
         
}

int main(){

    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0, iResult = 0 , iValue4 = 0;

    printf("Enter Fisrt Number :");
    scanf("%d" , &iValue1);

    printf("Enter Second Number :");
    scanf("%d" , &iValue2);

     printf("Enter Third Number :");
    scanf("%d" , &iValue3);

    printf("Enter Third Number :");
    scanf("%d" , &iValue3);

    printf("Enter Third Number :");
    scanf("%d" , &iValue3);






   

    iResult = Maximum(iValue1 , iValue2 , iValue3 , iValue4);
    printf("Maximum is : %d" , iResult);

    return EXIT_SUCCESS;
}
