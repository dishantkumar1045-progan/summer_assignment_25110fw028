#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int count = 0 , i;

    printf("enter a sentence ");
    gets(str);

    for(i = 0 ; str[i] != '\0' ; i++){
    if(i == 0 && str[i] != ' ' && str[i] != '\n' || (str[i] != ' ' && str[i-1] == ' ')){
         count++;  
    }
}
printf("number of words = %d" , count);
return 0 ;

}