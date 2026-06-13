#include <stdio.h>

int main() {
   int size , i , key ;
    printf("enter size of an array :");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Duplicate elements: ");

    for (int i = 0; i < size; i++) {
        
        for (int j = i + 1; j < size; j++) {
            
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0 ;

}