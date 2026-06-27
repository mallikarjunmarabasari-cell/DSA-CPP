#include<stdio.h>
void main(){
    int n, i = 2;
    print("Enter a number: ");
    scanf("%d", &n);
    while(i <- (n - 1)){
        if(n % i == 0){
            printf("%d is non-prime", n);
            break;
        } else {
            i = i + 1;
        }
    }
    printf("%d is Prime", n);
}