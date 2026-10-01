#include<stdio.h>
int main(){
    int arr[] = {7,4,3,12,2};
    int found = 0;
    for(int i = 0;i<4 ; i++){
        if(arr[i] % 2 == 0 &&
        arr[i+1] % 2 != 0 &&
        arr[i+2] == arr[i]*arr[i+1]){
            found=1;
            break;
        }
    }

    if(found == 1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;

}