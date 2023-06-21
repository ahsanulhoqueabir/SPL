#include<stdio.h>
    int debi(int a)
    {
        int r;
        while(a!=0)
        {
            if(a%2==0)
                printf("0");
            else if(a%2!=0)
                printf("1");
            a=a/2;
        }
    }
int main()
{
    int a;
    scanf("%d",&a);
    debi(a);
}
