#include<stdio.h>
int main()
{
    int n; 
    printf("Enter Total Days: ");
    scanf("%d",&n);
    int y=0,m=0,d=0;
    if(n>=365)
    {
        y=n/365;
    }
    n=n%365;
    if(n<365 && n>=30)
    {
        m= n/30;
    }
    n=n%30;
    if(n<30 )
    {
        d=n;
    }

    printf("Number of Year: %d\nNumber of Month: %d\nNumber of Day: %d",y,m,d);
    return 0;
}
