#include<stdio.h>
int main()
{
    int a[5],s=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        s=s+a[i];
    }
    printf("%d",s/5);
}
