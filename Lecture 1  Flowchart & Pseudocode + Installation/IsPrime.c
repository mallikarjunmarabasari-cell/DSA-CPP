#include <stdio.h>

int main(void) {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= (n - 1)){
        if(n % i == 0){
            printf("%d is a Non-prime number",n);
            break;
        }
        i+=1;
    }
    printf("%d is a Prime number",n);
}