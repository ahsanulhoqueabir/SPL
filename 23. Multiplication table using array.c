//write a code to print multiplication table using array
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter Row number: ");
    scanf("%d",&r);
    printf("Enter the Number: ",&c);
    scanf("%d",&c);
    int a[r][c];
    printf("Multiplication Table:\n");
    printf("----------------------\n");
    for(int i=1;i<=r;i++)
    {
        printf("%d X %d = %d\n",c,i,c*i);
    }
}
