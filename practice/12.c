#include<stdio.h>
int main(){
    int arr[] = {2,3,5,6,1,6,7,3,7,2,3,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i<=n ; i++){
        if(i%3==0  && i%7!=0){
            printf("%d ",arr[i-1]);
        }
        
    }

}