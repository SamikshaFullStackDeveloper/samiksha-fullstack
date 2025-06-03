// Ternary Operator

#include <stdio.h>

int main() {
    int temp;
     
    printf("Enter a temperature in Celsius: ");
    scanf("%d", &temp);

    (temp > 0) ? printf("Temperature in Fahrenheit: %.2f°F\n", (temp * 9.0 / 5) + 32) 
               : printf("Too cold!\n");

    return 0;
}







 









// #include <stdio.h>

// int main() {
//     int temp;
    
    
//     printf("Enter a temperature in Celsius: ");
//     scanf("%d", &temp);

    
//     if (temp > 0) {
//         float fahrenheit = (temp * 9 / 5) + 32;  
//         printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
//     } else {
//         printf("Too cold!\n");
//     }

//     return 0;                                                        
//  }
