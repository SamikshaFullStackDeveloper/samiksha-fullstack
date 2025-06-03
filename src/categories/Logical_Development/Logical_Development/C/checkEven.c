#include<stdio.h>
int main(){
      int input ; 
    printf("Enter a number:");
    scanf("%d", &input);
    printf("%s\n" ,(input%2 == 0)? "The number is Even":"The number is odd");
    return 0;
}