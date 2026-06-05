#include<stdio.h>
#include<math.h>
int main(){
    int num ,dec = 0 , rem = 0 , place = 0 ;
    printf("enter a binary number:");
    scanf("%d",&num);

    printf("Binary equivalent of %d is ",num);
    while(num){
        rem = num%10 ;
        if(rem){
            dec = dec + (pow(2,place));
        }
        num = num/10;
        place++;
    }
    printf("%d\n",dec);
    return 0 ;
}