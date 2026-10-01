//num_odd , num_even
#include<stdio.h>
int main(){
    int num = 1;
    for(int i = 1; i<=6 ; i++){
        if(i==1){
            printf("%d ",num);
        }
        else if (i % 2 != 0) {
            num-=1;
            printf("%d ",num);
        }
        else{
            num+=2;
            printf("%d ",num);
        }
    }
    return 0;
}