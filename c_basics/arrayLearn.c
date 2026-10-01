#include<stdio.h>
int main(){
    int marks[5];
    printf("enter marks : ");
    scanf("%d\n",&marks[0]);
    scanf("%d\n",&marks[1]);
    scanf("%d\n",&marks[2]);
    scanf("%d\n",&marks[3]);
    scanf("%d\n",&marks[4]);
    printf("%d\n",marks[3]);


    printf("get the  done ");
    return 0;
}

// print all elements of array

#include<stdio.h>
int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};
    for (int a = 0 ; a<=4 ; a++){
        printf("%d ",arr[a]);
    }
    return 0;
}