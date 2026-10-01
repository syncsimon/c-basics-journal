#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter the values of num1,num2&num3: ");
    scanf("%d\n",&num1);
    scanf("%d\n",&num2);
    scanf("%d\n",&num3);
    printf("okay!");
    if(num1<num2 && num3<num2){
        printf("num 2 is greater");
    }
    else if(num1<num3 && num2<num3){
        printf("num 3 is greater");
    }
    else if(num1>num2 && num3<num1){
        printf("num 1 is greater");
    }
    else{
        printf("equal");
    }
    return 0;
}