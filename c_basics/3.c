#include<stdio.h>
int main(){
    int odd_num = 1;
    int even_num = 4;
    for(int i=1;i<=10;i++){
        if(i%2==0){
            printf("%d ",even_num);
            even_num+=4;
        }
        else{
            printf("%d ",odd_num);
            odd_num+=2;
        }
    }
    return 0;
}