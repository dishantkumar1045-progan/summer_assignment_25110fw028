#include<stdio.h>
int main(){
    int arr[100];
    int n , i , j , temp ;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter list");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n - 1 ; i++){
     for(int j = i + 1 ; j < n ; j++){
                if(arr[i]<arr[j]){
                  temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp ; 
                }
            }
        }
       printf("\nSorted array in descending order:\n");
       for(int i = 0 ; i < n ; i++){
       printf("%d\n",arr[i]);
    }
     return 0 ;
}
 