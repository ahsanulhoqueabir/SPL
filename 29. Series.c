#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the last number of series");
    scanf("%d",&n);
    for(i=1;i<=n;i+=4){
        s=s+i;
    }
    printf("The Sum is: %d",s);
}

