#include<stdio.h>
int main(){
    int found = 1;
    int arr[] = {2,4,8,16,32,64};

    for(int i = 1; i<=4; i++){
        if(arr[i] != arr[i-1]*2){
            found = 0;
        }
    }
    if (found == 1){
        printf("yes");
    }
    else{
        printf("no");
    }
}