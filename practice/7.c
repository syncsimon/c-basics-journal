#include<stdio.h>

int main(){
    for(int i = 200; i<=301; i++){
        if(i%7==0 && i%5!= 0){
            printf("%d\n",i);
        }
    }
    return 0;
}
//way-2
#include<stdio.h>
int main(){
    for(int i = 203;i<=301;i+=7){
        if(i%5!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}