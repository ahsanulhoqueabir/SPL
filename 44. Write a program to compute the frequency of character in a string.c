// Write a program to compute the frequency of character in a string.

#include <stdio.h>
int main() {
char s[100];
int f[256] = {0};
printf("Enter a string: ");
gets(s);
// Calculate Frequency of each character in the input string
for (int i=0;s[i]!='\0';i++)
{
f[(int)s[i]]++;
}
// Display frequency of characters
printf("Frequency of characters in the string:\n");
for (int i=0;i<256;i++)
{
if(f[i]>0 && (i>='A'&&i<='Z' || i>='a' && i<='z'))
{
printf("%c: %d\n",i,f[i]);
}
}
return 0;
}
