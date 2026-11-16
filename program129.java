import java.util.Scanner;
class Digit
{
    public int SumDigit(int iNo)
    {;
        int iCount = 0;
        int iSum = 0;

        if(iNo < 0){
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iNo = iNo / 10;
            iSum = iSum +  (iNo % 10);
        }

        return iSum;
    }

    
}

class program129
{
    public static void main (String A[])
    {
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter the Number : ");

        Scanner scanner = new Scanner(System.in);
        iValue = scanner.nextInt();

        Digit digit = new Digit();
        iRet = digit.SumDigit(iValue);
        System.out.println("Sum is : " + iRet);

    }
} {
    
}
