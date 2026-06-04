 #include <stdio.h>

int main() {
    int num;
    int divisor = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;

    while (num > 1) {
        if (num % divisor == 0) {
            num = num / divisor;
        } else {
            divisor++;
        }
    }

    printf("The largest prime factor of %d is: %d\n", originalNum, divisor);

    return 0;
}