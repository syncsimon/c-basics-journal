// WAP TO CHECK IF GIVER CHARACTER IS UPPERCASE OR NOT
#include<stdio.h>
int main(){
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch<= 'Z'){
        printf("uppercase");
    }
    else if (ch>='a' && ch<= 'z'){
        printf("lower-case");
    }
    else{
        printf("not an alphabet");
    }
}