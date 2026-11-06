#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1 , int iNo2 ) {
    if (iNo1 > iNo2) 
    return iNo2;
    else return iNo1;
}

int main(){

    int iValue1 = 0 , iValue2 = 0 , iResult = 0;

    printf("Enter Fisrt Number :");
    scanf("%d" , &iValue1);

    printf("Enter Second Number :");
    scanf("%d" , &iValue2);

    iResult = Minimum(iValue1 , iValue2);
    printf("Min Number is : %d" , iResult);

    return EXIT_SUCCESS;
}
