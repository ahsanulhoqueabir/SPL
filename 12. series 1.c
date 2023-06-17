// To calculate the sum and series of series = 1-2+3-4+5…….:. write a code in c language


#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Series Size: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        int sign = (i % 2 == 0) ? -i : +i;
        printf("%d ", sign);
        sum += sign;
    }

    printf("\nSum: %d\n", sum);

    return 0;
}

