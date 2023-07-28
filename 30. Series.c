#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the last number of series");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                s=s-i;
            }
            else
            {
                s=s+i;
            }
        }
    printf("The Sum is: %d",s);
}

