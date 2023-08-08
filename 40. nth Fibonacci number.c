// Write a program, which implements a function that takes a number a as parampar. The function calculates and displays the n" Fibonacci number.

#include <stdio.h>
int f(int n)
{
    if(n<0)
    {
        printf("Invalid input. n should be a positive integer.\n");
        return 1;
    }
    else
    {
        int a=0;
        int b=1;
        int c;
        for(int i=1;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
    return b;
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    
    if (scanf("%d",&n)!=1 ||n<1)
    {
        printf("Invalid input. Please enter a valid positive integer for n.\n");
    return 1;
    }
    int result = f(n);
        
    if (result != -1) 
    {
        printf("The %d-th Fibonacci number is: %d\n", n, result);
    }
return 0;
}
