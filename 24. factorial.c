//factorial number print

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("The factorial of %d is: ",n);
    for(int i=1;i<=n;i++)
    {
        if(i<n)
            printf("%d X ",i);
        else
            printf("%d",i);
    }
}
