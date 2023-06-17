// Identification of root of a quadratic equation and nature of root
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, x1, x2;

    printf("Enter the value of a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);


    d = b*b - 4*a*c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: x1 = %lf and x2 = %lf\n", x1, x2);
    }
    else if (d == 0) {
        x1 = -b / (2*a);
        printf("Roots are real and equal: x1 = x2 = %lf\n", x1);
    }
    else {
        printf("Roots are complex");
    }
}
