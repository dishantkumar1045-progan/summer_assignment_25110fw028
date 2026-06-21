#include<stdio.h>
int main(){
    char str[100] , rev[100];
    int length = 0 , vowels = 0 , consonant =0 ;
    printf("enter a string ");
    gets(str);
    
    while(str[length]!= '\0'){
    length++;
}
for(int i = 0 ; i<length ; i++){
    if(str[i] == 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U'){
        vowels++;
    }
    else{
        consonant++ ;
    }
}
printf("total no of vowels = %d\n",vowels);
printf("total no of consonant = %d",consonant);

return 0 ;

}