// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char member = "Samiksha";
//     char name;
//     int amount = 5000;
//     int totalAmount;
//     printf("Enter your name:");
//         scanf("%s", member);

//     printf("Enter your amount:");
//         scanf("%d",&totalAmount);

//     if (totalAmount >= amount && strcmp(member, name) == 0)
//     {
//         printf("You got 50 discount \n");
//     }
//     else
//     {
//         printf("You got 5 discount \n");
//     }
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char member[10] = "Samiksha";
    int amount = 5000;
    int totalAmount;
    float discountAmount;
    printf("Enter member name:");
    scanf("%s", member);
    char name[10] = "Samiksha"; 

    printf("enter amount:");
    scanf("%d", &totalAmount);

    if (amount >= 5000 && strcmp(member, name) == 0)
    {
        discountAmount = totalAmount * 0.3;
        totalAmount = totalAmount-discountAmount;
        printf("you are a member \n");
        printf("You got 30 percent discount of %d \n", totalAmount);
    }
    else
    {
         discountAmount = totalAmount * 0.3;
        totalAmount = totalAmount-discountAmount;
        printf("you are not member \n");
        printf("You got 5 percent discount \n",totalAmount);
    }
}