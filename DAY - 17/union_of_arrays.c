#include <stdio.h>

int main() {
    int a[100] , n1 , b[100] , n2  ;
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
    int unionArr[8];
    int k = 0;
    int i, j, isDuplicate;

    for(i = 0; i < n1; i++) {
        unionArr[k] = a[i];
        k++;
    }

    for(i = 0; i < n2; i++) {
        isDuplicate = 0;

        for(j = 0; j < k; j++) {
            if(b[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate == 0) {
            unionArr[k] = b[i];
            k++;
        }
    }

    printf("Union of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}