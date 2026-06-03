 #include<stdio.h>
 int main (){
    int  min ,max ,i , num ,  n ; 
    printf("enter range :");
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++){
        num=i;
         int original = num ;
        int  sum = 0;
        while(num>0){
            n=num%10;
            num=num/10;
            sum=sum + n*n*n;
        }
        if(sum == original){
            printf("%d\n",original);
        }
        
        
    }
    return 0 ;
 }