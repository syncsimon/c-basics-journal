// #include<stdio.h>
// int main(){
//     for (int num=1;num<=10;num++){
//         printf("%d ",num*num);
//     }
//     return 0;
// }



#include<stdio.h>
int main(){
    int num = 1;
    printf("%d ",num);
    for(int diff = 2; diff<=10 ; diff++){
        printf("%d ",num+diff);
        num += diff;
    
    }
    return 0;
}