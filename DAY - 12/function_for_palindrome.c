#include<stdio.h>
void findpalindrome(int n , int rev){
    int original = n ;
    int r ;
    while(n>0){
        r = n%10;
        rev = rev*10 + r;
        n = n/10;   
    }
    if(rev==original){
        printf("%d is a palindrome number",original);
    }
    else{
        printf("%d is not a palindrome number",original);
}
}

int main(){
    int n ;
    printf("enter number n :");
    scanf("%d",&n);
    findpalindrome(n,0);
    return 0 ;
}