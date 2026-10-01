#include<Stdio.h>
int main(){
    int num;
    printf("enter numbers: ");
    scanf("%d",&num);
    if(num%2==0 & num%3==0){
        printf("divisible");
    }
    else{
        printf("not divisible");
    }
    return 0;
}