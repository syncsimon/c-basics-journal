// #include<stdio.h>
// int main(){
//     int sum=0;
//     for(int num = 1; num<=50 ; num++){
//         sum+=num;
//         
//     }
            // printf("%d\n",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int sum=0;
    int num = 1;
    while(num<=50){
        sum+=num;
        num++;
    }
    printf("%d\n",sum);
    return 0;
}