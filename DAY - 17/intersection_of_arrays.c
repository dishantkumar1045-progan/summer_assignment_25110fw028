#include <stdio.h>

int main() {
    int a[100] , n1 , b[100] , n2 ;
    printf("enter size of  first array ");
    scanf("%d",&n1);

     printf("enter list ");
     for(int i = 0 ; i < n1 ; i++){
     scanf("%d",&a[i]);
}
      
     printf("enetr size of second array");
     scanf("%d",&n2);

     printf("enter list ");
     for(int i = 0 ; i < n2 ; i++){
     scanf("%d",&b[i]);
     }
    int intersectionArr[4];
    int k = 0;
    int i, j;

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                intersectionArr[k] = a[i];
                k++;
                break;
            }
        }
    }

    printf("Intersection of arrays: ");
    for (i = 0; i < k; i++) {
        printf("%d ", intersectionArr[i]);
    }

    return 0;
}