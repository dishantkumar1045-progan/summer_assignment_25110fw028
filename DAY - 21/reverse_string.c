#include<stdio.h>
int main(){
    char str[100] , rev[100];
    int length = 0 ;
    printf("enter a string ");
    gets(str);
    
    while(str[length]!= '\0'){
    length++;
}
int j = 0 ;
for(int i = length - 1 ; i>=0 ; i--){
   rev[j++] = str[i];
}
printf("reverse string\n");
for(int i = 0 ; i<length ;  i++){
printf("%c",rev[i]);
}
return 0 ;
}