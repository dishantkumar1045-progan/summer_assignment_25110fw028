 #include<stdio.h>
 int main (){
    int i = 1 , n , s = 1 ;
    printf("enter n : ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++){
        s = i*s;}
     printf("%d\n",s);
    return 0 ;
}