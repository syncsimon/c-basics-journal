#include<stdio.h>
int main(){
    char ch = 'a';
    char word[] = "bananaa";
    int count = 0;
    for(int i=0 ; word[i]!= '\0'; i++){
        if(word[i] == ch){
            count+=1;
        }
    }
    printf("present charachters in given strings : %d",count);
    return 0;
}