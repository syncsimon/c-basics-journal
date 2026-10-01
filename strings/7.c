#include<stdio.h>
int main(){
    char str = 'g';
    char word[] = "programming";

    for(int i = 0; word[i] != '\0' ; i++){
        if(word[i] == str){
            printf("present");
            break;
        }
    }
    return 0;
}