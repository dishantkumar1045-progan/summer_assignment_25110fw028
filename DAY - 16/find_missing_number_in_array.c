#include<stdio.h>
int main(){
    int size;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }
    int expectedsum = 0;
    int actualsum = 0;

     for(int i=1; i<=size ; i++){
         expectedsum += i ;
    }
     
    
     for(int i=1; i<size ; i++){
         actualsum += i ;
    }

    int missingNumber = expectedsum -actualsum;
    printf("\nThe missing number is :%d\n",missingNumber);
    return 0 ;
}