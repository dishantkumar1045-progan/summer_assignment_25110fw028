#include<stdio.h>
int main(){
    int size , i , counteven = 0 , countodd = 0 ;

    printf("enter size:");
    scanf("%d",&size);

    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
     printf("total number of even elemnts = %d\n",counteven);
     printf("total number of even elemnts = %d",countodd);
    return 0 ;
}