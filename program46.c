#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1 , int iNo2 , int iNo3) {
    float ans = 0.0f;
    ans = ((float)iNo1 + (float)iNo2 + (float)iNo3 )/ 3.0f; //typecasting
    return ans;
}

int main(){

    float iValue1 = 0.0f , iValue2 = 0.0f , iValue3 = 0, iResult = 0.0f;

    printf("Enter Fisrt Number :");
    scanf("%f" , &iValue1);

    printf("Enter Second Number :");
    scanf("%f" , &iValue2);

     printf("Enter Third Number :");
    scanf("%f" , &iValue3);
   

    iResult = Average(iValue1 , iValue2 , iValue3);
    printf("Average is : %f" , iResult);

    return EXIT_SUCCESS;
}
