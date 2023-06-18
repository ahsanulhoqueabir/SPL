#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[32];
    char id[50];
    int marks[5];
    float total;
    float gpa[5];
    float cgpa;
} Student;

void sort(Student a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].cgpa < a[j].cgpa)
            {
                Student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of Student: ");
    scanf("%d", &n);
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter info for student %d", i + 1);
        printf("\nName: ");
        getchar();
        scanf("%[^\n]", s[i].name);
        printf("ID: ");
        getchar();
        scanf("%[^\n]", s[i].id);
        printf("Enter marks: \n");
        for(int j=0;j<5;j++){
            printf("Subject %d: ",1+j);
            scanf("%d",&s[i].marks[j]);
            float temp=0;
            switch (s[i].marks[j])
            {
            case 80 ... 100:
                temp=4;
                break;
            case 75 ... 79:
                temp=3.75;
                break;
            case 70 ... 74:
                temp=3.50;
                break;
            case 65 ... 69:
                temp=3.25;
                break;
            case 60 ... 64:
                temp=3;
                break;
            case 55 ... 59:
                temp=2.75;
                break;
            case 50 ... 54:
                temp=2.50;
                break;
            case 45 ... 49:
                temp=2.25;
                break;
            case 40 ... 44:
                temp=2;
                break;
            case 0 ... 39:
                temp=0;
                break;
            }
            s[i].total+=temp;
        }
        s[i].cgpa=s[i].total/5;
    }
    sort(s, n);

    printf("\nSorted according merit:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Merit: %02d\n",i+1);
        printf("Name: %s\n", s[i].name);
        printf("ID: %s\n", s[i].id);
        printf("CGPA: %.2f\n\n", s[i].cgpa);
    }
    return 0;
}
