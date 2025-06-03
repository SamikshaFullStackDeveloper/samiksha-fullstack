
import java.util.Random;
import java.util.Scanner;

 class MultiplicationGame {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        String userChoice;

        do {
            int num1 = random.nextInt(9) + 1; // Generates numbers from 1 to 9
            int num2 = random.nextInt(9) + 1;
            int correctAnswer = num1 * num2;

            System.out.println("\nMultiply: " + num1 + " * " + num2);
            System.out.print("Enter your answer (or press 'e' to exit): ");

            if (scanner.hasNextInt()) {
                int userAnswer = scanner.nextInt();
                if (userAnswer == correctAnswer) {
                    System.out.println("Correct! ");
                } else {
                    System.out.println("Incorrect. The correct answer is: " + correctAnswer);
                }
            } else {
                userChoice = scanner.next();
                if (userChoice.equalsIgnoreCase("e")) {
                    System.out.println("Exiting the game. Goodbye! 👋");
                    break;
                }
            }
        } while (true);

        scanner.close();
    }
}