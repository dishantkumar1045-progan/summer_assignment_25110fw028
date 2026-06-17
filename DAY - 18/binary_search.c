#include<stdio.h>
int main(){
    int n , arr[100] , i , se ;
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter list");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("enter element to be search:");
    scanf("%d",&se);

    int l , u , m ;
    l = 0 , u = n - 1 , m = (l+u)/2;
    while(l<=u&&arr[m]!=se){
        if(se<arr[m]){
            u = m - 1 ;
        }
        else{
            l = m + 1 ;
            m = (l+u)/2;
        }
    }
    if(se==arr[m]){
        printf("element found at index %d", m+1);
    }
    else{
        printf("element not found ");
    }
    return 0 ;
}