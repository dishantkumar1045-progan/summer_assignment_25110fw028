#include<stdio.h>
int main(){
    int n , i = 2 ,count = 0;
    printf("enter number : ");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%i==0){
            count=1;
            break;
        }
    }
    if (count==1)
    {
        printf("%d is not a prime number ",n);
    }
    else {
        printf("%d is a prime number ", n);
    }
    return 0 ;
    
}