//Write a code to print fibonacci number

#include <stdio.h>
int main() {
    int l,i;
    int f1=0,f2=1,n;

    printf("Enter the number of terms: ");
    scanf("%d", &l);

    printf("Fibonacci Series: ");

    for (i=1;i<=l;i++)
    {
        printf("%d ",f1);
        n=f1 + f2;
        f1 = f2;
        f2 = n;
    }

    return 0;
}
