#include<stdio.h>
#include<math.h>
float SD(int a[],int n)
{
    int k;
    float avg,add,div,sd,sum=0;
    while(k<n)
    {
       sum=sum+a[k];
        k++;
    }
    avg=sum/n;
    for(k=0;k<n;k++)
    {
        add=add+pow((avg-a[k]),2);
    }
     div=add/n;
    sd=sqrt(div);

    return(sd);
}
int main()
{
    float sd;
    int n,k=0;

    printf("number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("\nelements:");
     while(k<n)
    {
       scanf("%d",&a[k]);
        k++;
    }
    sd=SD(a,n);
    printf("%f",sd);
}

