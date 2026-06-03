 #include<stdio.h>
 int main (){
    int a = 0 , b = 1 , num ,i = 2 , add ;
    printf("enter number of terms : ");
    scanf("%d",&num);
    printf("%d %d ",a,b);
    while(i<num){
        add = a+b ;
        a = b ;
        b = add;
        printf("%d ",b);
        i++;
    }
    return 0 ;
 }