#include<stdio.h>
int main(){

    int arr[] = {0,0,0,3,1,2,0,0,0,0,0,3,4};
    int count = 0;
    int longst_count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n ; i++){
        if(arr[i] == 0){
            count+=1;
        }
        else{
            if( count > longst_count){
            longst_count = count;
        }
            count = 0;
        }
        
    }
    if(count > longst_count) {
        longst_count = count;
    }
    printf("%d" , longst_count);
    
}