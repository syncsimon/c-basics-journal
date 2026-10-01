#include<stdio.h>
int main(){
    int odd_num=20;
    int even_num = 2;
    for(int i=1;i<=8;i++){
        // if (i==1){
        //     printf("%d ",odd_num);
        // }
        // else if(i==2){
        //     printf("%d ",even_num);
        // }
        if(i%2 == 0){
            // even_num+=i;
            printf("%d ",even_num);
            even_num+=i;
        }
        else{
            // odd_num+=2;
            printf("%d ",odd_num);
            odd_num+=2;
        }
    }
    return 0;
}