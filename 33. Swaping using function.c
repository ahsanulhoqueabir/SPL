#include<stdio.h>
int main()
{
    void swap(int a,int b)
    {
        int temp =a;
        a=b;
        b=temp;
        printf("%d %d",a,b);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);

}
