// Standard stringfucntions

// 1) strlen(Str) = tell the length of strings excluding \0 
/*
#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "simon";
    
    int length = strlen(name);
    printf("%d",length);
    return 0;
}
    */

    //2) strcpy(old_String , new_string) = copy the value of old string into new string
/*
    #include<stdio.h>
#include<string.h>
int main(){
    char old_string[] = "hello";
    char new_string[] = "world";
    

    strcpy(new_string , old_string);
    printf("%s",new_string);
}
*/
//3 - strcat() concatenates first string with second string
/*
#include<stdio.h>
#include<string.h>
int main(){
    char first_string[] = "hello ";
    char second_string[] = "world";
    

    printf("%s",strcat(first_string,second_string));
    
}
*/
// 4- ctrcmp(firststr,secstr) = compares both the strings and return value.
#include<stdio.h>
int main(){
    char first_str[] = "simonn";
    char sec_str[] = "simonn";
    printf("%d",strcmp(first_str,sec_str));

}
