import java.util.Scanner;
class Digit
{
    public int CountDigit(int iNo)
    {
        int iCount = 0;

        if(iNo < 0){
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iNo = iNo / 10;
            iCount ++;
        }

        return iCount;
    }

    
}

class program127
{
    public static void main (String A[])
    {
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter the Number : ");

        Scanner scanner = new Scanner(System.in);
        iValue = scanner.nextInt();

        Digit digit = new Digit();
        iRet = digit.CountDigit(iValue);
        System.out.println("Count is : " + iRet);

    }
}