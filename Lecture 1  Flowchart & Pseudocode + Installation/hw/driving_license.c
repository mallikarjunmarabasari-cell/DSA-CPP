#include<stdio.h>
void main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("Eligible for driving license\n");
    } else
        printf("Not eligible for driving license/minor");
}