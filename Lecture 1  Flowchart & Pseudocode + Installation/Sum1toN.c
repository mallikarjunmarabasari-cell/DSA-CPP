#include<stdio.h>
void main(){
    int n, count = 1, sum = 0;
    print("Enter a number: ");
    scanf("%d", &n);
    while(count <= n){
        sum += count;
        count += 1; // count++;
    }
    printf("Sum of %d numbers is: ", sum);
}