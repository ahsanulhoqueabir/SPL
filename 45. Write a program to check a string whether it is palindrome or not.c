// Write a program to check a string whether it is palindrome or not.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
char s[100];printf("Enter a string: ");
gets(s);
int i=0;
int j=strlen(s)-1;
int c = 1;
while(i<j)
{
if(s[i]!=s[j])
{
c = 0;
break;
} i
++;
j--;
}
if (c)
{
printf("The string is a palindrome.\n");
}
else
{
printf("The string is not a palindrome.\n");
}
return 0;
}
