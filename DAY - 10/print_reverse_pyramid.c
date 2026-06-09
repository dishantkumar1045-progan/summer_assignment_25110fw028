#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        // 1. Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // 2. Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}