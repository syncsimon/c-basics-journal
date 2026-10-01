#include<stdio.h>
int main(){
    int found = 1;
    int arr[] = {2,4,16,216,100};
    for(int i = 1; i<=4;i++){
        if(arr[i]!=arr[i-1]*arr[i-1]){
            found=0;
        }
    }
    if(found==1){
        printf("yes");
    }    
    else{
        printf("no");
    
    }
    return 0;
}