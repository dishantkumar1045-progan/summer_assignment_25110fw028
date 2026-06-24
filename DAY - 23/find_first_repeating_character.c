#include<stdio.h>
#include<string.h>

int main(){
    char str[100] ;
    int  i ,  j , found = 0 ;
    printf("enter string ");
    gets(str);

    int l = strlen(str);
     
    for(i = 0 ; i<l ; i++){
        for(j = i+1 ; j<l ;j++){
            if(str[i]==str[j] && str[i]!= '\n'){
                printf("first repeating character :%c\n", str[i]);
                fflush(stdout);
                found = 1;
                break;
            }
        } 
        if(found==1){
            break;
        }  
    }
     if(found = 0){
            printf("no repeating character found \n");
            fflush(stdout);
     }

   return 0 ;         
}