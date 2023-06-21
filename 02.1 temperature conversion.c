// Temperature conversion
// Celcius to Fahrenheit 
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter your Celcius temperature: ");
    scanf("%f",&c);
    f= 9*c / 5 + 32;
    printf("The fahrenheit equivalent of %.2f celcius is: %.2f",c,f);
}
