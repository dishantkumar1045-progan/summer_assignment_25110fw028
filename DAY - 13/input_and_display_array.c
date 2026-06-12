#include<stdio.h>
int main(){
    int size , i ;

    printf("enter size:");
    scanf("%d",&size);
    
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements in the array are:\n");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0 ;
}