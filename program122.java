import java.util.Scanner;

class Digit
{
    public static void DisplayDigit(int iNo)
    {
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
        }
    }
}

class program122
{
    public static void main (String A[])
    {
        int iNo = 0;
        System.out.println("Enter the Number : ");

        Scanner scanner = new Scanner(System.in);
        iNo = scanner.nextInt();

        Digit digit = new Digit();
        digit.DisplayDigit(iNo);
    }
}