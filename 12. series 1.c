// To calculate the sum and series of series = 1-2+3-4+5…….:. write a code in c language


#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Series Size: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        int sign = (i % 2 == 0) ? -1 : 1;
        int term = sign * i;
        
        if (term > 0) 
        {
            if (i > 1) 
            {
                printf(" + ");
            }
        }
        
        printf("%d ", term);
        sum += term;
    }

    printf("\nSum: %d\n", sum);

    return 0;
}

