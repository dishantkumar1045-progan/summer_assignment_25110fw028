 #include<stdio.h>
 int main(){
    int min , max ,count;
    printf("enter min and max values" );
    scanf("%d%d",&min,&max);
    for(int i=min;i<=max;i++)
    { 
        count = 0;
      for(int j=1;j<=i;j++){
        if(i%j==0){
            count++;
        }
    }
         if(count==2){
        printf("\n%d",i);
    
      } 
    }
    return 0 ;

 }