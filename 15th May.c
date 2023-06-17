#include <stdio.h>
#include <string.h>
#include <limits.h>
int sum(int a, int b, int c);
int isPalindrome(char *s);
int alternateIsPalindrome(char *s);
long long int factorial(long long int input);
void anotherMain();
/// int sum(float a, float b, float c);
int main(int argc, char *argv[])
{
    int a, b, c;
    // char *input;
    // scanf("%s", input);

    // if (alternateIsPalindrome(input) == 1)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("NO");
    // }
    // return 0;
    anotherMain();
}

int sum(int a, int b, int c)
{
    return (a + b + c);
}
int isPalindrome(char *s)

{ /*
 First, find length of string
 second reverse the string into a new string
 run another loop to check if each character is same in both string
 */
    int lengthOfString = strlen(s);
    int counter = 0;
    char stringToBeCompared[lengthOfString];
    while (lengthOfString--)
    {
        stringToBeCompared[counter] = s[lengthOfString];
        counter++;
    }
    lengthOfString = strlen(s);
    counter = 0;
    while (counter != lengthOfString)
    {
        if (stringToBeCompared[counter] != s[counter])
        {
            break;
        }

        counter++;
    }

    if (counter == lengthOfString)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int alternateIsPalindrome(char *s)
{
    int lengthOfStr = strlen(s);
    lengthOfStr--;
    int counter = 0;
    while (counter != (lengthOfStr / 2))
    {
        if (s[counter] == s[lengthOfStr - counter])
        {
        }
        else
        {
            break;
        }
        counter++;
    }
    if (counter == lengthOfStr / 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long long int factorial(long long input)
{
    int counter = 2;
    long long int output = 1;
    while (counter != input + 1)
    {
        output *= counter;
        counter++;
    }
    return (output);
}
void fibonacci(long long int input)
{
}

// Find an element within an array
//

void anotherMain()
{
    int n, numberToBeSearched;
    printf("Enter Number Of Elements\n");
    scanf("%d", &n);
    printf("Enter Number To Be Searched\n");
    scanf("%d", &numberToBeSearched);
    int a[n];
    int counter = 0;
    printf("Enter The Array\n");
    while (counter != n)
    {
        scanf("%d", &a[counter]);
        counter++;
    }
    counter = 0;
    while (counter != n)
    {
        if (a[counter] == numberToBeSearched)
        {
            break;
        }
        counter++;
    }
    if (counter == n)
    {
        printf("0\n");
    }
    else
    {
        printf("1");
    }
}

// TODO
// Maximum
// Minimum
// Sort ascending
// Sort descending
// Search
// Average
// Swtich For function
//