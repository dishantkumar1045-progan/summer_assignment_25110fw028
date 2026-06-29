#include<stdio.h>
#include<string.h>
int main(){
    char str1[100] , str2[100] ;
    int  i , j  ;

    printf("enter string \n");
    scanf("%s",str1);

    printf("enter string \n");
    scanf("%s",str2);

    printf("common characters \n");

    for(i = 0 ; i<strlen(str1); i++){
        for(j = 0 ; j<strlen(str2) ; j++){
            if(str1[i] == str2[j]){
                printf("%c ", str1[i]);
                break ; 

            }
        }
    }
return 0 ;
}