// Temperature conversion
// Fahrenheit to Celcius
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter your fahrenheit temperature: ");
    scanf("%f",&f);
    c= (f-32)*5/9;
    printf("The celcius equivalent of %.2f fahrenheit is: %.2f",f,c);
}
