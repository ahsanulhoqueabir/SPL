// Numbers of days to year,month,days.
#include<stdio.h>
int main()
{
    int n,y,m,d;
    scanf("%d",&n);
    y=n/365;
    m=n%365 /30;
    d= (n%365)%30;
    printf("Year: %d\nMonth: %d\nDays: %d",y,m,d);
}
