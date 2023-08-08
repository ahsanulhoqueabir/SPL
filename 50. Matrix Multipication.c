#include<stdio.h>
int main()
{

    int temp,a,b,sum=0,sum1=1,c=0,d,r=0;
    printf("Enter first matrix row and column: ");
    scanf("%d %d",&a,&b);
    printf("Enter Second matrix row and column: ");
    scanf("%d %d",&c,&d);
    int m[a][b],n[c][d],p[a][d];
    if(b!=c) printf("Multiplication is not possible!");
    else
    {
        printf("Enter First Matrix: \n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                printf("Enter m[%d][%d] = ",i,j);
                scanf("%d",&m[i][j]);
            }
        }

        printf("Enter Second Matrix: \n");
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<d;j++)
            {
                printf("Enter n[%d][%d] = ",i,j);
                scanf("%d",&n[i][j]);
            }
        }

        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                p[i][j]=0;
                for (int k = 0; k < c; k++)
                {
                    p[i][j]+= (m[i][k]*n[k][j]);
                }

            }
        }
        printf("The Multipication of those Matrix is: \n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                printf("%d ",p[i][j]);
            }
            printf("\n");
        }

    }


    // printf("\n%d %d",max,min);
    return 0;
}
