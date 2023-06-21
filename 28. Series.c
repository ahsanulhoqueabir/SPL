#include<stdio.h>
int main()
{
    int i=2,n,s=0;
    printf("Enter the last digit");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i=i+2;
    }
    printf("The sum is: %d",s);
    return 0;
}
