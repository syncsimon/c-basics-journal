#include<stdio.h>
int main(){
    char inp_str[] = "hello";
    
    for(int i = 0; inp_str[i]!= '\0' ; i++){
        printf("%c",inp_str[i-1]);
    }
 
}