#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i , j , count , max = 0 ;
    char maxchar;

    printf("enter string ");
    gets(str);
    for(i = 0 ; str[i] != '\0' ; i++){
        count = 1 ;
        for(j = i+1 ; str[j] != '\0' ; j++){
        if(str[i] == str[j]){
            count++;
        }
    }
        if(count > max ){
            max = count ;
            maxchar = str[i];
        }
    }
    printf("maximum occuring character = %c" , maxchar);
    return 0 ;
}