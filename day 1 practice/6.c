#include<stdio.h>
int main(){
    for(int num=1;num<=100;num++){
        if(num%5==0){
            printf("%d\n",num);
        }
    }
    return 0;
}
// efficient way

#include<stdio.h> 
int main(){
    for(int num=5;num<=100;num+=5){
        printf("%d\n",num);
    }
    return 0;
}