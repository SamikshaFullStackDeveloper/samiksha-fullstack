// #include<stdio.h>
// int main(){
//     int a=20;
//     int b=10;
//     int sum = a+b;
//     int difference = a-b;
//     printf("sum is %d \n",sum);
//     printf("Difference is %d",difference);
// }


#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    int sum = num1 + num2 + num3;
    int average = num1 + num2 + num3 /3; 


    printf("Sum: %d\n", sum);
    printf("Average:%d\n", average);
}