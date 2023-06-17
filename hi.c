#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,s;
        scanf("%lld",&n);
        while(n!=0)
        {
            s=n%10;
            printf("%d ",s);
            n/=10;
        }
        printf("\n");
    }
}
