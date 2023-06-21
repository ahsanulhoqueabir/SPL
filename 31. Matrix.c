#include<stdio.h>
#include<conio.h>
void main()

{
int i,j,k,a[3][3],b[3][3],c[3][3];

printf("enter the first  matrix: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("a[%d][%d]=" ,i,j);
        scanf("%d",&a[i][j]);
    }

}
printf("enter the second 3*3 matrix:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("b[%d][%d]=" ,i,j);
        scanf("%d",&b[i][j]);
    }

}
printf("\nthe entered matrix are:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t" ,a[i][j]);
    }
printf("\t\t");
for(j=0;j<3;++j)
{
    printf("%d\t",b[i][j]);

}
printf("\n");
}

for(i=0;i<3;i++)
    for(j=0;j<3;j++)
{
    c[i][j]=0;
    for(k=0;k<3;k++)
        c[i][j]= a[i][k]*b[k][j];

}
printf("\n\n the product of the three matrix is shown below\n\n");
for(i=0;i<3;i++)
{

    printf("\n\t\t   ");
    for(j=0;j<3;j++)
    {
        printf("%d\t",c[i][j]);
    }
}

return 0;










}
