#include<stdio.h>
void main(){
    int n, fact = 1, i = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while(i <= n){
        fact = fact * i;
        i += 1;
    }
    printf("Factorial of %d is: %d\n", n, fact);
}