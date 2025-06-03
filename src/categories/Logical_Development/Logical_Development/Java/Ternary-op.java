import java.util.Scanner;

class TernaryOpEven{
  public static void main(String[] args) {
      Scanner number = new Scanner(System.in);

      System.out.println("Enter a number:");
      int num = number.nextInt();

      String result = (num % 2 == 0) ? "Even" : "Odd";
      System.out.println(num + "is" + result);

      number.close();
  }
}