// 1. Basic Arithmetic
// Write a C program that stores two integers a = 25 and b = 7, then prints:

// Sum
// Difference
// Product
// Quotient
// Remainder
#include<stdio.h>
int main(){
    int sum , diff , product , quotient , remainder ;
    int num1 , num2 ;
    printf("enter num1: ");
    scanf("%d",&num1);

    printf("enter num2: ");
    scanf("%d",&num2);

    sum = num1+num2;
    diff = num2-num1;
    product = num1*num2;
    quotient = num1/num2;
    remainder = num1%num2;

    printf("%d\n %d\n %d\n %d\n %d\n",sum , diff , product , quotient , remainder);
    return 0;

}