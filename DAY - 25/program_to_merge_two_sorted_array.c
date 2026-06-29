#include<stdio.h>
int main(){
    int a[100] , b[100] , c[200] ;
    int n1 , n2 , i , j , k ;

    printf("enter the size of first array ");
    scanf("%d" , &n1);

    printf("enter the elements of first sorted array \n");
    for(i = 0 ; i<n1 ; i++){
        scanf("%d", &a[i]);
    }

    printf("enter the size of second array ");
    scanf("%d", &n2);

    printf("enter the elements of second sorted array \n");
    for(i = 0 ; i<n2 ; i++){
        scanf("%d" , &b[i]);
    }


    i = j = k = 0 ;


    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    while(i<n1){
        c[k++] = a[i++];
    }
    while(j<n2){
        c[k++] = b[j++];
    }

    printf("merge sorted array \n");
    for(i = 0 ; i<k ; i++){
        printf("%d " , c[i]);
    }
    return 0 ;
}