#include<stdio.h>
#include<string.h>
int main(){
    char str[100]  ;
    int i = 0 , j = 0 ;
    printf("enter string ");
    gets(str);

    while(str[i] != '\0'){
        if(str[i]!= ' '){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    printf("string after removing spaces %s\n",str);
    return 0 ;
}