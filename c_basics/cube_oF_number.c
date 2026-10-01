# include<Stdio.h>
int main(){
    int number;
    printf("enter number: ");
    scanf("%d",&number);

    int cube = number*number*number;
    printf("the cube of number is %d",cube);
    return 0;

}