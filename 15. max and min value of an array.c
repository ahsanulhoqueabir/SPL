//Find out the maximum and minimum value from an array.

#include<stdio.h>
int main()
{
    int n;
    //array size
    scanf("%d",&n);
    int a[n];
    //taking input from user
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //let maximum and minimum value of this array is 1st element of this array.
    int max=a[0];
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }

    printf("The array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe max value is: %d",max);
    printf("\nThe min value is: %d",min);

}
