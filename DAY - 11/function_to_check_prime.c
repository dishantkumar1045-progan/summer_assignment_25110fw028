#include<stdio.h>
void findprime(int n , int count){
    for(int i = 2 ; i<n ; i++){
        if(n%2==0){
            count = 1;
        }  
    }
    if(count==1){
        printf("%d is not a prime number",n);
    }
    else{
         printf("%d is a prime number",n);
    }

    }

    int main(){
        int n ;
        printf("enter number n : ");
        scanf("%d",&n);
        findprime(n , 0);
        return 0 ;
    }
