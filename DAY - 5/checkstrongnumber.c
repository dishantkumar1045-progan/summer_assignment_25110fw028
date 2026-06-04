#include<stdio.h>
int main(){
    int n , fact = 1,sum = 0,r , original;
    printf("enter number n :");
    scanf("%d",&n);
    original = n;
    if(n==0){
        sum = 1 ;
    }
    while(n>0){
        r=n%10;
        for(int i=1;i<=r;i++){
            fact = fact*i;
        }
        sum =  sum + fact;
        fact = 1 ;
        n = n/10;
        }
         if(sum==original){
            printf("%d is a strong number ",original);

         }else{
            printf("%d is not a strong number",original);
         
         }
         return 0 ; 
        }