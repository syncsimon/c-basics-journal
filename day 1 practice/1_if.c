#include<stdio.h>
int main(){
    int age ;
    printf("enter age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("They are adult and they can drive\n");
    }
    else if(age<0){
        printf("please enter valid age");
    }
    else {
        printf("Teen or less than 18");
    }
        // printf("teen");
    
    return 0;

    //ternary operator
    // age>=18?printf("adult"):printf("not adult");
    // return 0;

}
