#include<stdio.h>
int main(){
    int num;
    for(num=1;num<=20;num++){
        if(num % 3 == 0 && num % 5 == 0){
            printf("three and five\n");
        }
        else if(num%5==0){
            printf("five\n");
        }
        else if(num % 3 == 0 ){
            printf("three \n");
        }
        else{
            printf("%d\n",num);
        }
    }
    return 0;

}