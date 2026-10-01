#include<stdio.h>
int main(){
    for(int num = 200;num<=301;num+=7){
        if(num%5!=0){
            printf("%d\n",num);
        }
    }
    return 0;
}