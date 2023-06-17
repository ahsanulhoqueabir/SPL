// Find out the distance using programming
#include<stdio.h>
int main()
{
    float s,u,t,a;
    printf("Primary Velocity: ");
    scanf("%f",&u);
    printf("Time: ");
    scanf("%f",&t);
    printf("Accelaratiom: ");
    scanf("%f",&a);
    s= u*t + 0.5*a*t*t;
    printf("The distance is: %.2f",s);

}
