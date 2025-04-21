// Conditional 

// #include <stdio.h>

// int main()
// {
//     int age ; 
//     printf("Enter your age:");
//     scanf("%d", &age);
//     if (age >= 18) 
//     {
//         printf("You are eligible for vote.\n");
//     }
//     else if (age <= 18)
//     {
//         printf("You are not eligible for vote.\n");
//     }
// }


// Ternary Operator
#include <stdio.h>

int main()
{
    int age ; 
    printf("Enter your age:");
    scanf("%d", &age);
    printf("%s\n" ,(age >= 18)? "You are eligible for vote":"You are not eligible for vote");
    return 0;
    
    
    
    }