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
    int i, j;

    printf("Common elements: ");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}