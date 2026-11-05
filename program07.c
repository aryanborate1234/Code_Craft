/*
5 STEP USED FOR SOLVED ANY PROBLEM :

STEP 1 : understand the problem
STEP 2 : write the algorithm
STEP 3 : decide the programming language c/c++/java
STEP 4 : write the program
STEP 5 : test the progrm

*/

/////////////////////////////////////////////////
//
// STEP 1 : understand the problem statement
//          user is going to enter any 2 integers
//          and we have to perform the addtion
//
/////////////////////////////////////////////////


/////////////////////////////////////////////////
//
// STEP 2 : write the algorithm
/*
    START 
        accept the first number as NO1
        accept the second number as NO2
        craete the variable ans to store the result
        perform the addition and store into the ans 
        display the result from ans
    STOP    
*/
/////////////////////////////////////////////////


/////////////////////////////////////////////////
//
// STEP 3 : decide the programming language
//          c/c++/java
//          we select the c programming
//
/////////////////////////////////////////////////

/////////////////////////////////////////////////
// 
// STEP 4 : write the program
// IDE : Integrated Developed Environment
//
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
//  
// Function Name :  Addition
// Input         :  Integer , Integer
// Output        :  Integer
// Description   :  Performs Addition
// Date          :  04/10/2026
// Author        :  Aryan Tukaram Borate
//
/////////////////////////////////////////////////


int Addition(int iNo1 , int iNo2) {
    int iAns = 0;
    iAns = iNo1 + iNo2 ;  // BUSINESS LOGIC
    return iAns;
} 

/////////////////////////////////////////////////
//
// Entry point of the Application
//
/////////////////////////////////////////////////


int main() {

    int iValue1 = 0 , iValue2 = 0 , iResult = 0 ;

    printf("Enter the First Value :\n");
    scanf("%d" , &iValue1);

    printf("Enter the First Value :\n");
    scanf("%d" , &iValue2);

    iResult =  Addition(iValue1 , iValue2);

    printf("Addition of two numbers is : %d\n" , iResult);
    
    return 0;
}

