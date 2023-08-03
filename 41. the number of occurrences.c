// Write a program to compute the number of occurrences of a character in a string.

#include <stdio.h>
int main() {
char string[100];
char c;
int count = 0;
printf("Enter a string: ");
scanf("%s",string);
printf("Enter the character to count occurrences: ");
scanf(" %c", &c);
for (int i = 0; string[i] != '\0'; i++)
{
if (string[i] == c)
{
count++;
}
}
printf("Number of occurrences of '%c' in the string: %d\n", c, count);
return 0;
}
