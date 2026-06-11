#include<stdio.h>
#include<math.h>

void findarmstrong(int n ){
    int d = 0 , arm = 0 ;
    int n2 , n1 , r ;
    n2 = n1 = n ;
    while(n>0){
        n = n/10;
        d++;
    }
    while(n1>0){
        r = n1%10;
        arm = arm + round(pow(r,d));
        n1 = n1/10;
    }
    if(arm == n2){
        printf("%d is an armstrong number ",n2);
    }
    else{
        printf("%d is not an armstrong number",n2);
 }

}

int main(){
    int n ;
    printf("enter number n :");
    scanf("%d",&n);
    findarmstrong(n);
    return 0 ;
}

