#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= (n - 1)){
        if(n % i == 0){
            printf("%d is a Non-prime number",n);
            return 1;
        }
        i+=1;
    }
    printf("%d is a Prime number",n);
    return 0;
}