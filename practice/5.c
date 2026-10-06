#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[] = "abc@123";
    int len = strlen(str);
    int flag = 0;
    for(int i = 0; i<len ; i++){
        if(!isalnum(str[i]) && !isspace(str[i]) ){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}