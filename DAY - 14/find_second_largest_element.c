#include<stdio.h>
int main(){
    int size , i , key ;
    printf("enter size of an array :");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for(i=0;i<size;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    int secondlargest = -1;
    for(i=0;i<size;i++){
        if(secondlargest<arr[i] && largest!=arr[i] ){
            secondlargest=arr[i];
        }
    }
    printf("largest element = %d\n",largest);
    printf("second largest element = %d",secondlargest);
    return 0 ;

}
