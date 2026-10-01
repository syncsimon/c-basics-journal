#include<stdio.h>
int main(){
    int length , breadth , perimeter;
    printf("enter side a: \n");
    scanf("%d",&length);

    printf("enter side b: \n");
    scanf("%d",&breadth);

    perimeter = 2*(length+breadth);

    printf("perimeter of rectangle is %d",perimeter);
    return 0;
}