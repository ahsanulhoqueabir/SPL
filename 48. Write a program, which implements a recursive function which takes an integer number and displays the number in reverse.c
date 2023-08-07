#include<stdio.h>
int recursive(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
    }
    recursive(n/10);
}
int main()
{
    int n;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    printf("Number in reverse: ");
    recursive(n);
    return 0;
}
