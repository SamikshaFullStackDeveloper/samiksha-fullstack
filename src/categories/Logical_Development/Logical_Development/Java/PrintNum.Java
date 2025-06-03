import java.util.Scanner;

class PrintNum{
   public static  void main(String[] args){
       Scanner number = new Scanner(System.in);

       System.out.println("Enter a value:");
       int input = number.nextInt();
       int inputTwo = number.nextInt();
       for ( int i=2; i<=input; i+=2) {
           System.out.println( i);
      }
       for ( int j=1; j<=input; j+=2) {
           System.out.println( j);
       }

   }
}






// Filename: PrintNum.java

import java.util.Scanner;

class PrintNum {
   public static void main(String[] args) {
       Scanner number = new Scanner(System.in);

       System.out.println("Enter a value:");
       int input = number.nextInt();

       int evenSum = 0;

       System.out.println("Even numbers:");
       for (int i = 2; i <= input; i += 2) {
           System.out.println(i);
           evenSum += i;
       }

       System.out.println("Sum of even numbers: " + evenSum);

       System.out.println("Odd numbers:");
       for (int j = 1; j <= input; j += 2) {
           System.out.println(j);
       }

       number.close();
   }
}


import java.util.Scanner;

class PrintNum {
    public static void main(String[] args) {
        Scanner number = new Scanner(System.in);

        System.out.println("Enter a value:");
        int input = number.nextInt();

        int evenSum = 0;
        int oddSum = 0;

        System.out.println("The numbers:");
        for (int i = 1; i <= input; i++) {
            System.out.println(i);
           if( i = 2; i <= input; i += 2); {
                System.out.println(i);
            }else (i = 1; i <= input; i += 2);{
                System.out.println(i);
            }

        }
        System.out.println("Sum of even numbers: " + evenSum);
        System.out.println("Sum of odd numbers: " + oddSum);


        number.close();
    }
