#include<stdio.h>
#include<string.h>
int main(){
    char a[100] ,b[100] , i ;
    printf("enter string ");
    gets(a);

    strcpy(b,a);
    strrev(b);

    i = strcmp(a,b);

    if(i==0){
        printf("palidrome string");
    }else{
        printf("not palindrome");
    }
    return 0 ;
}