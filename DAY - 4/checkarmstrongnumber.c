 #include<stdio.h>
 #include<math.h>
 int main (){
    int n , n1 , n2 , arm = 0 ,r , d = 0 ;
    printf(" enter number n :");
    scanf("%d",&n);
    n2 = n1 = n ;
    while(n>0){
        n = n/10;
        d++;
    }
    while(n1>0){
        r = n%10;
        arm = arm + pow(r,d);
        n = n/10;
    }
    if(n2 == arm){
        printf("armstrong number ");
    }else{
        printf("Not a armstrong number");

    }
    return 0 ;
 }
