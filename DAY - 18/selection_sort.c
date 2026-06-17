#include<stdio.h>
int main(){
    int arr[100];
    int n , i , j , min_index , temp ;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter list");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n - 1 ; i++){
        min_index = i ;
     for(int j = i + 1 ; j < n ; j++){
                if(arr[j]<arr[min_index]){
                    min_index = j ;
                }
            }
            temp = arr[min_index];
            arr[min_index] == arr[i];
            arr[i] = temp ;
}
       printf("\nArray after sorting\n");
       for(int i = 0 ; i < n ; i++){
       printf("%d\n",arr[i]);
    }
     return 0 ;
}
 