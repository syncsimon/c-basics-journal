#include<stdio.h>
int main(){
    int arr1[] = {10,20,90,40,50,60};
    int arr[]={5,10,15,20,25,30};
    int commn_arr[3];
    int k=0;
    for(int i = 0;i<=5;i++) {
        for(int j=0 ; j<=5;j++) {
            if(arr1[i]==arr[j]) {
                commn_arr[k] = arr1[i];
                k++;
            }
        }
    }
    for(int l=0;l<k;l++){
        printf("%d ",commn_arr[l]);
    }
   
    return 0;

}