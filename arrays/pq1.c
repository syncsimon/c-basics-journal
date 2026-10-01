#include<stdio.h>
int main(){
    int arr[]={4,15,7,21,9,13,2};
    int count = 0;
    for(int i = 0;i<7;i++){
        if(arr[i]>10){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
int main(){
    int arr[]={12,5,27,8,19,3};
    int largest=arr[0];
    for(int i = 0;i<6;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("%d",largest);
    return 0;
}


#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60};
    int sum = 0;
    for(int i = 0;i<6;i+=2){
        sum+=arr[i];
        
    }
    printf("%d",sum);
}