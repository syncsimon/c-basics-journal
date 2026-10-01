#include<stdio.h>
int main(){
    int odd_num = 2;
    int even_num = 3;
    int n = 10;
    for(int i = 1;i<=n;i++){
        if (i%2==0){
            printf("%d ",even_num);
            even_num+=3;
        }
        else{
            printf("%d ",odd_num);
            odd_num+=2;
            
        }
    }
    return 0;
}