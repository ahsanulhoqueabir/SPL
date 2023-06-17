//find out the given number is emirp or not
#include <stdio.h>
int isPrime(int n)
{
    if(n<2)
    return 0;

    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}

int r(int n) {
    int rn=0;
    while (n!=0) {
        rn=rn*10+n%10;
        n/=10;
    }
    return rn;
}

int main() {
    int n;
    printf("Enter a number to check if it is an Emirp number: ");
    scanf("%d",&n);
    int prime = isPrime(n);
    int rn = r(n);
    if (prime && rn != n && isPrime(rn))
        printf("%d is an Emirp number.\n", n);
    else
        printf("%d is not an Emirp number.\n", n);

    return 0;
}
