// Sum of Digits
#include<stdio.h>
int main()
{
    int n,s,d;
    scanf("%d",&n);
    while (n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("%d",s);

}
