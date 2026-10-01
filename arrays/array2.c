#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
    for (int a = 0; a<=3;a++){
        printf("%d\n",arr[a]);
    }
    return 0;
}

//count number of elements in array
#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d",n);
    
    return 0;
}


// WAP to print only even numbres
#include<stdio.h>
int main(){
    int arr[]={12,7,18,5,20,9,14};
    for(int i=0;i<=6;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}


//WAP TO FIND SUM OF ARRAY

#include<stdio.h>
int main(){
    int sum = 0;
    int arr[] = {10,20,10,40,50};
    for(int i = 0; i<=4;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}