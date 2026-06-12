#include<stdio.h>
int main(){
    int size , i , sum = 0 ;
    float average = 0 ;
    printf("enter size:");
    scanf("%d",&size);
    
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        sum = sum + arr[i];
    }
    average = (float)sum/size;
    printf("sum = %d\n",sum);
    printf("average = %.2f",average);
    return 0 ;
}