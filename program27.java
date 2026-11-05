import java.util.Scanner ;

class program27 {

    public static void main(String A[]) {
        
        Scanner scanner = null;
        String sName = null;

        int iAge = 0;
        float fMarks = 0.0; // error (loosy conversion)

        scanner =  new Scanner(System.in);

        
        System.out.println("Enter Your Name :");
        sName = scanner.next();

       //  next() --> used to accept a single word without space
       // nextLine() --> used to accept strimg with space all

        System.out.println("Enter Your Age :");
        iAge = scanner.nextInt();

        System.out.println("Enter Your Marks :");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName);
        System.out.println("Your Age is : " + sName);
        System.out.println("Your Marks is " + fMarks);
        
    } 

}
