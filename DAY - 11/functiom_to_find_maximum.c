#include<stdio.h>
int findmax(int a , int b){
     if(a>b){
        return a ;
     }
     else{
        return b ;
     }
     }
    
int main(){
    int a , b;
    printf("enter number a and b :");
    scanf("%d%d",&a,&b);
    printf("maximum number = %d",findmax(a,b));
    return 0 ;
}