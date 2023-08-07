#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[50];
    char roll[20];
    int mobile;
    char department[60];
    float cgpa;

}student;
int main()
{
    int n;
    printf("Enter student number: ");
    scanf("%d",&n);
    student students[n];
    for(int i=1;i<=n;i++)
    {
        printf("Enter data of student-%d\n",i);
        printf("Enter Students Name: ");

        scanf(" %[^\n]",students[i].name);

        printf("Enter Students Roll: ");

        scanf(" %[^\n]",students[i].roll);
        getchar();
        printf("Enter Students Mobile Number: ");
        scanf("%d",&students[i].mobile);

        printf("Enter Students CGPA: ");
        scanf("%f",&students[i].cgpa);
    }
    printf("\n\n Showing The data");
    for(int i=1;i<=n;i++)
    {
        printf("Students Name of %d: %s\n",i,students[i].name);
        printf("Students Roll of %d: %s\n",i,students[i].roll);
        printf("Students Mobile Number of %d: %d\n",i,students[i].mobile);
        printf("Students CGPA of %d: %f\n",i,students[i].cgpa);
        printf("\n\n");
    }
}
