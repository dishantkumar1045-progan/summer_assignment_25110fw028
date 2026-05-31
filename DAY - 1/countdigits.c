 #include<stdio.h>
 int main (){
    int n , count = 0 ;
    printf ("enter number n :");
    scanf("%d",&n);
    if(n<0){
        n= - n ;
    }
   if(n==0){
    count = 1 ;
   }
   else {
    while (n>0){
        count = count + 1 ;
        n = n / 10;
    }
    
   }
    printf("total number of digit : %d ", count);
    return 0 ; 
 }