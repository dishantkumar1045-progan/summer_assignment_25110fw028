#include<stdio.h>
int main(){
    int a[100] , n1 , b[100] , n2 , c[100] ;
    printf("enter size of  first array ");
    scanf("%d",&n1);

     printf("enter list ");
     for(int i = 0 ; i < n1 ; i++){
     scanf("%d",&a[i]);
}
      
     printf("enetr size of second array");
     scanf("%d",&n2);

     printf("enter list ");
     for(int i = 0 ; i < n2 ; i++){
     scanf("%d",&b[i]);
     }

     for(int i=0 ; i<n1 ; i++){
        c[i] = a[i];
     }

     for(int i=0 ; i<n2 ; i++){
        c[n1 + i] = b[i];
     }

     printf("Merged array ");

     for(int i=0 ; i<n1+n2 ; i++){
        printf("%d\n",c[i]);
     }

return 0 ;

}