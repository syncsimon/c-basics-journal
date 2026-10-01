#include<stdio.h>
int main(){
    int arr[] = {10,20,10,10,5,3,60};
    int largest_element = arr[0];
    int second_largest = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n ; i++){
        if(arr[i]>largest_element){
            second_largest = largest_element;
            largest_element = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] < largest_element){
            second_largest = arr[i];
        }
        
    }
    printf("%d",second_largest);
    return 0;
}