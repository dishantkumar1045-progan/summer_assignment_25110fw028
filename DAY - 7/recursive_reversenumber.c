#include<stdio.h>
int reversenumber(int n){
    int rev = 0 ;
    while(n>0){
    int r = n%10;
    rev = rev*10 + r ;
    n = n/10;
    }
    return rev ;

}
int main(){
    int n ;
    printf("enter number n : ");
    scanf("%d",&n);
    printf("reverse of number = %d",reversenumber(n));
    return 0 ;
}