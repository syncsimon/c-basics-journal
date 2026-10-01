#include<stdio.h>
#include<ctype.h>
int main(){
    char arr[] = "AeIOU";
    int count = 0;
    for(int i = 0;arr[i]!= '\0' ; i++){
        arr[i] = tolower(arr[i]);
        if(arr[i] == 'a' || 
            arr[i] == 'e' || 
            arr[i] == 'i' ||
            arr[i] == 'o' ||
            arr[i] == 'u'){
                count+=1;
            }
    }
    printf("%d",count);
    return 0;
}