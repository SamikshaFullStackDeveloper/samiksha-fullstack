// #include <stdio.h>

// int main() {
//     int balance = 1000;
//     int withdraw = 1200;
//        printf("Enter amount:");
//     if (withdraw <= balance) {
//         if (withdraw % 100 == 0) {
//             printf("Transaction successful\n");
//         } else {
//             printf("Amount should be a multiple of 100\n");
//         }
//     } else {
//         printf("Insufficient Balance\n");
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     int amount = 1000;
//     char type[10];

//     printf("If you want deposit press d else if you want withdraw press w:\n");
//     scanf("%s", type);

//     if (strcasecmp(type, "w") == 0) {
//         int withdraw;
//         printf("Enter your withdraw value:\n");
//         scanf("%d", &withdraw);

//         if (amount > 0 || amount == withdraw) {
//             amount -= withdraw;
//             printf("Your remaining balance is %d\n", amount);
//         } else if (amount < withdraw) {
//             printf("Insufficient balance\n");
//         }

//     } else if (strcasecmp(type, "d") == 0) {
//         int deposit;
//         printf("Enter your deposit value:\n");
//         scanf("%d", &deposit);

//         amount += deposit;
//         printf("Your account balance is %d\n", amount);
//     }

//     return 0;
// }

#include <stdio.h>
int main(){
    char pin ="2003";
   int attempts;
    char enteredPin;
    for (int attempt = 0; attempt <= 2; attempt ++){
        printf("Enter your pin:");
        scanf("%s",enteredPin);
        if(enteredPin == pin){
            printf("Enter your pin");
            scanf("%s",enteredPin);
            if(strcmp(enteredPin,pin)== 0){
                printf("Login successful \n");
                break;
            }else {
                printf("Invalid");
            }
        }
    }
}