#include<stdio.h>
int main(){
    int consumption_unit , bill;

    printf("enter the consumed units : ");
    scanf("%d",&consumption_unit);

    if (consumption_unit <= 100){
        bill = consumption_unit*5;
        printf("the bill is %d",bill );
    }
    else if(100<consumption_unit && consumption_unit<200){
        bill = consumption_unit*7;
        printf("the bill is %d",bill);
    }
    else if (consumption_unit>200){
        bill = consumption_unit*10;
        printf("the bill is %d",bill);
    }
    else {
        printf("enter valid consumption");
    }
}