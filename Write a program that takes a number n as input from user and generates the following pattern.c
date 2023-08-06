<!--
Sample Input  Sample Output 

 4                    ****
                      ***
                      **
                      *
-->

#include<stdio.h>
int main()
{
    int n;
    printf("Enter line number: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
