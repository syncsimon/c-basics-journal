#include<stdio.h>
int main(){
    for(int i=55;i<=155;i++){
        if(i%4==0 && i%6!= 0){
            printf("%d \n",i);
        }
    }
    return 0;
}