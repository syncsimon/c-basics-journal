#include<Stdio.h>
int main(){
    char givench = 'a';
    char str[] = "apple";
    int flag = 0;
    for(int i = 0; str[i] != '\0' ; i++){
        if(str[i] == givench){
            flag = 1 ;
        }
    }
    if (flag >= 1){
        printf("present in the string");
    }
    else{
        printf("not present");
    }

}



// #include<Stdio.h>
// int main(){
//     char givench = 'a';
//     char str[] = "apple";
    
//     for(int i = 0; str[i] != '\0' ; i++){
//         if(str[i] == givench){
//             printf("yes");
//             
//         }
//         else{
//             printf("no");
//             
//         }
//     }
    

// }