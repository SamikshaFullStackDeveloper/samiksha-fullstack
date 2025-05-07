
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printScore(int wins, int losses, int ties) {
    printf("Wins: %d | Losses: %d | Ties: %d\n", wins, losses, ties);
}

const char* moveToString(int move) {
    switch (move) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Unknown";
    }
}

int main() {
    int userMove, compMove;
    int wins = 0, losses = 0, ties = 0;
    char playAgain;

    srand(time(NULL));

    printf("=== Rock, Paper, Scissors ===\n");

    do {
        printf("\nChoose your move:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\nEnter choice (1-3): ");
        scanf("%d", &userMove);

        if (userMove < 1 || userMove > 3) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        compMove = (rand() % 3) + 1; // 1 to 3

        printf("You chose: %s\n", moveToString(userMove));
        printf("Computer chose: %s\n", moveToString(compMove));

        if (userMove == compMove) {
            printf("It's a tie!\n");
            ties++;
        } else if ((userMove == 1 && compMove == 3) ||
                   (userMove == 2 && compMove == 1) ||
                   (userMove == 3 && compMove == 2)) {
            printf("You win!\n");
            wins++;
        } else {
            printf("You lose!\n");
            losses++;
        }

        printScore(wins, losses, ties);

        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nFinal Score:\n");
    printScore(wins, losses, ties);
    printf("Thanks for playing!\n");

    return 0;
}




// 2 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char input[10];
    int userChoice, compChoice, result;
    int win = 0, loss = 0, tie = 0, score = 0;

    srand(time(NULL)); // Random seed

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Type rock, paper, scissors to play. Type exit to quit.\n");

    while (1) {
        printf("\nYour move: ");
        scanf("%s", input);

        // Exit condition
        if (strcmp(input, "exit") == 0) {
            break;
        }

        // Convert input to number
        if (strcmp(input, "rock") == 0)
            userChoice = 0;
        else if (strcmp(input, "paper") == 0)
            userChoice = 1;
        else if (strcmp(input, "scissors") == 0)
            userChoice = 2;
        else {
            printf("Invalid input!\n");
            continue;
        }

        compChoice = rand() % 3;

        printf("Computer chose: ");
        if (compChoice == 0) printf("rock\n");
        else if (compChoice == 1) printf("paper\n");
        else printf("scissors\n");

        // Decide result: 0 = tie, 1 = user wins, 2 = user loses
        if (userChoice == compChoice) {
            result = 0;
        } else if ((userChoice == 0 && compChoice == 2) ||
                   (userChoice == 1 && compChoice == 0) ||
                   (userChoice == 2 && compChoice == 1)) {
            result = 1;
        } else {
            result = 2;
        }

        // Update scores
        if (result == 0) {
            printf("It's a tie!\n");
            tie++;
        } else if (result == 1) {
            printf("You win!\n");
            win++;
        } else {
            printf("You lose!\n");
            loss++;
        }

        score++; // Total rounds played
    }

    // Final Score
    printf("\nGame Over!\n");
    printf("Total rounds played: %d\n", score);
    printf("Wins: %d | Losses: %d | Ties: %d\n", win, loss, tie);

    return 0;
}

