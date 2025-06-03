#include <stdio.h>
int main()
{
    char firstName[25], lastName[25];
    printf("Enter your first name:");
    scanf("%s", firstName);
    printf("Enter your last name:");
    scanf("%s", lastName);
    printf("Your name is: %s %s", firstName, lastName);
    return 0;
}