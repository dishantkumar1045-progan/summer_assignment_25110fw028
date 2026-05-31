 #include<stdio.h>
 int main (){
    int i = 0 , n , s = 0 ;
    printf("enter n : ");
    scanf("%d",&n);
     
    for(i=1;i<=10;i++){
        s = i*n;
     printf("%d\n",s);}
    return 0 ;
}