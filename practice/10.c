#include<stdio.h>
int main(){
    int arr[] = {6, 10, 12, 15, 18, 20, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n ; i++){
        if(arr[i]%6 ==0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}