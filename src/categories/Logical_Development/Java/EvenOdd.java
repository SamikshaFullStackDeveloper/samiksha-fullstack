import java.util.Scanner;

class EvenOdd {
    public static void main(String[] args) {
        Scanner number = new Scanner(System.in);

        System.out.println("Enter a number:");
        int check = number.nextInt();

        if ((check & 1) == 0) {
            System.out.println("Number is even: " + check);
        } else {
            System.out.println("Number is odd: " + check);
        }

        number.close();
    }
}
