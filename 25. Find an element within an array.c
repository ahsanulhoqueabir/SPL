// Find an element within an array

#include<stdio.h>
int main()
{
    int n;
    printf("Number of Elements: ");
    scanf("%d",&n);
    printf("Enter a number  to be searched: ");
    int s;
    scanf("%d",&s);
    int a[n];
    printf("Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,d;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
           c=1;
           d=i+1;
        }

    }
    if(c==1)
        printf("YES,the number %d is available in %d position.\n",s,d);
    else
        printf("NO,the number %d is not available in this array.\n",s);

}
