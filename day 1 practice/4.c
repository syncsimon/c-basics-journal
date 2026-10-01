//wap to check if student pass or fail

#include<stdio.h>
int main(){
    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);

    if(marks <30){
        printf("Fail");
    }
    else if(marks >= 30){
        printf("pass");
    }
    else{
        printf("enter valid marks");
    }
}