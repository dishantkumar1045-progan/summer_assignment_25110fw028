#include<stdio.h>
int main(){
    int size;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }
    int max_element = arr[0];
    int max_count = 0 ;
     for (int i = 0; i<size; i++) {
        int count = 0;
        
        for (int j = 0; j<size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }

    printf("\nMost frequent element: %d\n", max_element);
    printf("It appears %d times\n", max_count);

    return 0;
}
