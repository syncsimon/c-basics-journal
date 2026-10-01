// takingnnormal input output using printf and scanf// #include<stdio.h>
// int main(){
//     char name[50];
//     printf("enter name : ");
//     scanf("%s",&name);
//     printf("%s",name);
//     return 0;
// }


//using gets and puts

// #include<stdio.h>
// int main(){
//     char name[50];
//     gets(name);    //taking input from user
//     puts(name);   //showing output to user

// }
//gets is old and unsafe so we will use fgets() for input of strings

#include<stdio.h>
int main(){
    char name[50];
    fgets(name , 50 , stdin);    //taking input from user
    puts(name);   //showing output to user

}