// To calculate the sum and print the series = 1+2-3+4+5-6…….

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Series Length: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        int sign = (i % 3 == 0) ? -i : i;
        printf("%d ", sign);
        sum += sign;
    }

    printf("\nSum: %d\n", sum);

    return 0;
}
