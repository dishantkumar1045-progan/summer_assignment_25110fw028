#include<stdio.h>
int findsum(int a , int b){
    return a + b ;
}
int main(){
    int a , b ;
    printf("enetr number a and b :");
    scanf("%d%d",&a,&b);
    printf("sum of digit = %d",findsum(a,b));
    return 0 ;
}