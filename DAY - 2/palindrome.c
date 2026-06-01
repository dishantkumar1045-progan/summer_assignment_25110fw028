 #include<stdio.h>
 int main(){
    int n , original , r , reversed  = 0;
    printf("enter n : ");
    scanf("%d",&n);
    original = n ;
    while(n>0){
        r = n%10 ;
        reversed = reversed*10 + r ;
        n = n/10;

    }
    if(original == reversed ){
        printf(" %d is palindrome number ", original );

    }
    else {
        printf(" %d is not palindrome number " , original  );
    }
    return 0 ;