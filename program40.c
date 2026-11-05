#include<stdio.h>
#include<stdlib.h>

int main(){

    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter Fisrt Number :");
    scanf("%d" , &iValue1);

    printf("Enter Second Number :");
    scanf("%d" , &iValue2);

    if(iValue1 > iValue2) {
        printf("Max number is :" , iValue1);
    }
    else{
        printf("Max Number is :" , iValue2);
    }

    return EXIT_SUCCESS;
}