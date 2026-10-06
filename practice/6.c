#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[] = "Hello Elf";
    int count = 0;
    int len = strlen(str);
    for(int i = 0; i<len; i++){
        str[i] = tolower(str[i]);
        if(str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u' ){
                count+=1;
            }
    }
    printf("total vowerls are : %d",count);
}
