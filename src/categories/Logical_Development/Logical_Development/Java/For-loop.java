import java.util.Scanner;

class PrintNum{
    public static  void main(String[] args){

     for ( int i = 1; i <= 10; i++){
         System.out.println( + i);
     }

    }
}


import java.util.Scanner;

class PrintNum{
    public static  void main(String[] args){
        Scanner number = new Scanner(System.in);

     System.out.println("Enter a number:");
        int input = number.nextInt();

        for ( int i = 1; i <= input; i++){
            System.out.println( + i);
        }

    }
}


//  Print all even number and sum

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

