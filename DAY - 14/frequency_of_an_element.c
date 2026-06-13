#include<stdio.h>
int main(){
    int size , i , key ;
    printf("enter size of an array :");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to find frequency:");
    scanf("%d",&key);
    int freq = 0 ;
    for(i=0;i<size;i++){
        if(arr[i]==key){
            freq++;
        }
    }
    printf("\nfrequency of %d is %d ",key , freq);
    return 0 ;


}