//is the number is prime?
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("The number is not prime!");
            break;
        }
    }
    if(n==i)
        printf("The number is prime");
}
