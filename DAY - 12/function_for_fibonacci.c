#include <stdio.h>
void printFibonacci(int terms) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= terms; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2; 
        t1 = t2;            
        t2 = nextTerm;      
    }
    printf("\n");
}

int main() {
    int n ;
    printf("enter number n :");
    scanf("%d",&n);

    printFibonacci(n);

    return 0;
}
