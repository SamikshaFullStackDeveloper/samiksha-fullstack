#include <stdio.h>

int main()
{
    int age ; 
    printf("Enter your age:");
    scanf("%d", &age);
    if (age <=12)
    {
        printf("Your ticket is half.\n");
    }
    else if (age >12)
    {
        printf("Your ticket is full.\n");
    }
}
