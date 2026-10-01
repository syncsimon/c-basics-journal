#include<stdio.h>
int main(){
    int even_num=3;
    int odd_num = 2;
    for(int i = 1; i<=10; i++){
        if(i%2!=0){
            printf("%d ",odd_num);
            odd_num*=2;
        }
        else{
            
            printf("%d ",even_num);
            even_num*=3;
        }
    }
    return 0;
}