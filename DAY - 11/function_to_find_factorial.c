#include<stdio.h>
 int findfactorial(int n , int fact){
        for(int i=1 ; i<=n ; i++){
            fact = fact*i;
        }
        return fact ;
     }

int main(){
    int n ;
    printf("enter number n :");
    scanf("%d",&n);
    printf("factorial of number = %d",findfactorial(n , 1));
    return 0 ;
}     