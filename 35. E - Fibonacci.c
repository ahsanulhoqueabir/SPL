#include <stdio.h>
int main() {
    int n, i;
    long long int fib1 = 0, fib2 = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n);
    printf("%lld, %lld, ", fib1, fib2);

    for (i = 2; i < n; i++) {
        next = fib1 + fib2;
        printf("%lld, ", next);
        fib1 = fib2;
        fib2 = next;
    }
    printf("\n");
    return 0;
}
