#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;


    for(iCnt = 1 ,iFact = 1; iCnt <= iNo ; iCnt++ )
    {
        iFact *= iCnt;   
    }

    return iFact;

}
int main() {

    int iValue = 0 , iRet = 0;

    printf("Enter the Number :\n");

    scanf("%d" , &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %d" , iRet);

    return EXIT_SUCCESS;
}