#include<stdio.h>
int main(){
    char str[100] , ch ;
    int i = 0 , word = 0 , freq = 0  ;
    printf("enter string ");
    gets(str);

    printf("enter the word:");
    scanf("%c",&ch);

    while(str[i] != '\0'){
        if(str[i]==ch){
            freq++;
        }
        i++;
    }
    printf("frequency  of words %d",freq);
    return 0 ;
}