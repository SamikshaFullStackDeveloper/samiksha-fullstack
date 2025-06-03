// take a number x as input and print its multiplication table up to 10

#include<stdio.h>
int main(){
    int n,a;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i = 1; i<= 10; i++){
          printf("%d  %d = %d\n ",n,i , n  i);
    }
 
}