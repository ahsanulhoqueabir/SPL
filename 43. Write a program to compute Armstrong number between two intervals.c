// Write a program to compute Armstrong number between two intervals.

#include <stdio.h>
#include <math.h>
int main() {
int l, u;
printf("Enter the lower and upper limits of the interval: ");
scanf("%d %d",&l,&u);
printf("Armstrong numbers between %d and %d are: ",l,u);
for(int i = l; i <= u; ++i) {
int a,r,n=0,result=0;
a=i;
// Count the number of digits in the number
while(a!=0)
{
a/= 10;
++n;
} a
=i;
while(a!=0)
{
r=a%10;
result+=pow(r,n);
a/=10;
}
if (result==i)
{
printf("%d ",i);
}
}
printf("\n");
return 0;
}
