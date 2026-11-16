
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

class program123
{
    public static void main (String A[])
    {
        int iNo = 9752;
        System.out.println("Enter the Number : ");

        // Scanner scanner = new Scanner(System.in);
        // iNo = scanner.nextInt();

        Digit digit = new Digit();
        digit.DisplayDigit(9752);
    }
}