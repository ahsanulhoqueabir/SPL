#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[30];
    char id[12];
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

float CGPA(float total, int n)
{
    return (float)total / n;
}
int main()
{
    int n;
    printf("\n------------------------------------------------------------------------\n");
    printf("Enter number of Student: ");
    scanf("%d", &n);
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        printf(" --- Enter info for student %d --- ", i + 1);
        printf("\nName\t\t: ");
        scanf(" %[^\n]", s[i].name);
        printf("ID\t\t: ");
        scanf(" %[^\n]", s[i].id);
        printf("  ---- Enter marks ----  \n");
        s[i].total = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("Subject %d\t: ", 1 + j);
            scanf("%d", &s[i].marks[j]);
            float gp = 0;
            if (s[i].marks[j] >= 80) gp = 4;
            else if (s[i].marks[j] >= 75) gp = 3.75;
            else if (s[i].marks[j] >= 70) gp = 3.50;
            else if (s[i].marks[j] >= 65) gp = 3.25;
            else if (s[i].marks[j] >= 60) gp = 3;
            else if (s[i].marks[j] >= 55) gp = 2.75;
            else if (s[i].marks[j] >= 50) gp = 2.50;
            else if (s[i].marks[j] >= 45) gp = 2.25;
            else if (s[i].marks[j] >= 40) gp = 2;
            else if (s[i].marks[j] >= 0) gp = 0;
            s[i].total += gp;
        }
        printf("------------------------------------------------------------------------\n\n");
        s[i].cgpa = CGPA(s[i].total, 5);
    }
    sort(s, n);

    printf("\n\n------------------------------ Merit list ------------------------------\n");
    printf("|   Merit    Name                              ID               CGPA   |\n");
    for (int i = 0; i < n; i++)
    {
        printf("------------------------------------------------------------------------\n");
        printf("|    %03d     %-32s  %-12s     %-.2f   |\n", i + 1, s[i].name, s[i].id, s[i].cgpa);
    }
    printf("------------------------------------------------------------------------\n\n\n\n\n");
    return 0;
}
