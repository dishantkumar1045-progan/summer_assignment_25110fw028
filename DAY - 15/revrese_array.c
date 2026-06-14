#include<stdio.h>
int main(){
    int size , i;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int j = size - 1;
    int temp ;
    printf("\nReverse array\n");
     for(i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0 ;
}