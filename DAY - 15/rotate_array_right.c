#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;

    d = d % n;

    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}