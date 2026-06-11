#include <stdio.h>

void checkPerfectNumber(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i; 
        }
    }

    if (sum == num) {
        printf("%d is a Perfect Number!\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }
}

int main() {
    int testNumber ;
    printf("enter number :");
    scanf("%d",&testNumber); 

    checkPerfectNumber(testNumber);

    return 0;
}