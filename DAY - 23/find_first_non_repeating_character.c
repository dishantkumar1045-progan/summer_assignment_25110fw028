#include<stdio.h>
#include<string.h>

int main(){
    char str[100] ;
    int  i ,  j , count = 0 ;
    printf("enter string ");
    fflush(stdout);
    gets(str);

    int l = strlen(str);
    printf("length of string %d\n",l);
     
    for(i = 0 ; i<l ; i++){
        count = 0 ;
        for(j = 0 ; j<l ;j++){
            if(str[i]==str[j]){
                count++;
            }
        } 
        if(count == 1){
            printf("first non repeated character %c\n",str[i]);
            fflush(stdout);
            return 0 ;
        }  
    }
    printf(" no non  repeating character found \n");
    fflush(stdout);
    return 0 ;
            
}