#include<stdio.h>
#include<string.h>
int main(){
    char str[100] , *word ;
    char longest[100] ;

    printf("enter a sentence ");
    gets(str);

    str[strcspn(str , "\n")] = '\0';

    word = strtok(str , " ");

    while(word != NULL ){
        if(strlen(word) > strlen(longest)){
            strcpy(longest , word);
        }
        word = strtok(NULL , " ");
    }
    printf("longest word %s\n" , longest);
    printf("length %lu\n",strlen(longest));
    return 0 ;
}