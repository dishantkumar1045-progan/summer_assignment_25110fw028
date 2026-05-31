 #include<stdio.h>
 int main (){
    int i = 0 , n , s = 0 ;
    printf("enter n : ");
    scanf("%d",&n);
     
    for(i=0;i<=n;i++){
        s=s+i;
    }
    printf("sum of numbers : %d ",s);
    return 0 ;
 }