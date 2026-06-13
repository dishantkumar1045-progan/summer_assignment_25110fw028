#include<stdio.h>
int main(){
    int size ,i ;
    printf("enter size of array :");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target ;
    printf("enter the value search for:");
    scanf("%d",&target);
    int found = 0 ;
    for(i=0;i<size;i++){
        if(arr[i]==target){
            printf("Found %d at index%d\n",target , i );
            found = 1 ;
            break ;
        }
    }
    if(found==0){
        printf("%d is not in the list \n",target);
    }
    return 0 ;
}