#include<stdio.h>
void main(){
    int a, b;
    print("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("a = %d , is max", a);
    } else {
        printf("b = %d is max", b);
    }
}