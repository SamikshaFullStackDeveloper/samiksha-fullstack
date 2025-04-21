import java.util.Scanner;

class Scratch {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your first name");
        String firstName = scanner.nextLine();

        System.out.println("Enter your last name");
        String lastName = scanner.nextLine();

        System.out.println(" Your name is:" +firstName+" "+lastName);

    }
}