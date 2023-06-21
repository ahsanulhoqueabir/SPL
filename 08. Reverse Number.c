// Reverse Number
#include <stdio.h>
    int main() {
    int n,rev = 0,rem;

    printf("Enter a number: ");
    scanf("%d", &n);
    int p=n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n=n/10;
    }

    printf("The Reverse number of %d is: %d",p, rev);


}
