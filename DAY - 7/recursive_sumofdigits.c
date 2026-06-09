#include <stdio.h>

int findsum(int num, int sum) {
    if (num == 0) {
        return sum; 
    }
    return findsum(num / 10, sum + (num % 10));
}

int main() {
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    printf("sum of digit = %d\n", findsum(num, 0));
    return 0;
}