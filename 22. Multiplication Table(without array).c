//write a code to print multiplication table without using array

#include <stdio.h>
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Multiplication Table for %d:\n", n);

    for (int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}

