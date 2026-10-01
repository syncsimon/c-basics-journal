// #include<stdio.h>
// int main(){
//     char value[] = "Hello";
//     for(int index=0;index<=4;index++){
//         printf("%c\n",value[index]);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    char value[] = "Hello";
    for(int index=0; value[index]!= '\0' ;index++){
        printf("%c\n",value[index]);
    }
    return 0;
}