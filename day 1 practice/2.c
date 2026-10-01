// 2. Area of Rectangle
// Store the length and breadth of a rectangle in two variables:
// length = 15
// breadth = 8

#include<stdio.h>
int main(){
    int length , breadth , perimeter , area;
    printf("enter length : \n");
    scanf("%d",&length);

    printf("enter breadth : \n");
    scanf("%d",&breadth);
    
    perimeter = 2 * (length+breadth);
    area = length* breadth;

    printf("%d is the perimenter\n",perimeter);
    printf("%d is the area",area);
    
    return 0;

}