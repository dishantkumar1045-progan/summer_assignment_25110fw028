#include<stdio.h>
int main(){
    int size , i ;

    printf("enter size:");
    scanf("%d",&size);
    
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int  lar = arr[0];
    int small = arr[0];
    for(i=1;i<size;i++){
        if(lar<arr[i]){
            lar = arr[i];
        }
        if(small>arr[i]){
            small = i ;
        }
    }
     printf("largest elemnet = %d\n",lar);
     printf("largest elemnet = %d\n",small);
    
    return 0 ;
}