// 3. Simple Interest
// Store the following values:
// principal = 5000
// rate = 6
// time = 2
// Calculate and print the Simple Interest.
#include<stdio.h>
int main(){
    int principal , rate , time , simple_interest;
    printf("enter principal :");
    scanf("%d",&principal);

    printf("enter rate :");
    scanf("%d",&rate);

    printf("enter time :");
    scanf("%d",&time);

    simple_interest = principal*rate*time/100;
    printf("%d",simple_interest);
    return 0;
}
