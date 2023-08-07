#include<stdio.h>
#include<string.h>
int main() 
{
    char string[100];

    printf("Enter a string: ");
    gets(string);

    FILE *file = fopen("myfile.txt", "w");

    if (file == NULL) 
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    fprintf(file, "%s", string);

    fclose(file);

    printf("String successfully written to 'myfile.txt'.\n");

    return 0;
}
