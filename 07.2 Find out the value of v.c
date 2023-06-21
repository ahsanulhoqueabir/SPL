// Find out the velocity square using programming
#include<stdio.h>
int main()
{
    float s,u,v,a;
    printf("Primary Velocity: ");
    scanf("%f",&u);
    printf("Time: ");
    scanf("%f",&s);
    printf("Accelaratiom: ");
    scanf("%f",&a);
    v= u*u + 2*a*s;
    printf("The velocity square is: %.2f",v);

}
