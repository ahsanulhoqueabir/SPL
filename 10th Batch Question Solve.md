# SPL Solve 10th Batch

## Answer To The Question Number-1

**Q1A. Briefly explain the steps of executing a C program.**

![Screenshot 2023-08-05 013644](https://github.com/ahsanulhoqueabir/SPL-Solve-10th-Batch/assets/113261318/22831242-b754-4eca-898d-809b177c9208)

The four major steps to create and run a C program are:
1. Creating the source file
2. Compiling the source file
3. Running the object file
4. Checking the result

_Here we go with some explanations._
1. **Preprocessing**: The C program (source code) is sent to the preprocessor, which converts preprocessor
directives into their respective values. The preprocessor generates an expanded source code.
2. **Compiling**: The expanded source code is sent to the compiler, which compiles the code and converts it
into assembly code. The assembly code is then sent to the assembler, which assembles the code and
converts it into object code. An object file is generated at this stage.
3. **Linking**: The object code is sent to the linker, which links it to the library such as header files. Then it is
converted into executable code. An executable file is generated at this stage.
4. **Loading**: The executable code is sent to the loader, which loads it into memory and then executes it.
After execution, the output is sent to the output device


**Q1B. Name and describe four basic data types of C.**

The four basic data types in C are integer, character, floating-point, and double floating-point.
1. **Integer:** Integers are whole numbers that can be positive, negative, or zero. They are further classified
into short, int, and long, which differ in their range of values. For example, the size of an integer data
type is 4 bytes, and it can store values from -2,147,483,648 to 2,147,483,647.
2. **Character:** Character data type is used to store a single character or a small string of characters. It is
denoted by the keyword 'char' and occupies 1 byte of memory. For example, 'A' is a literal character.
3. **Floating-point:** Floating-point data types are used to store decimal values. They are further classified
into float and double, which differ in their range of values and precision. For example, the size of a float
data type is 4 bytes, and it can store values from 1.2E-38 to 3.4E+38.
4. **Double floating-point:** Double floating-point data types are used to store decimal values with double
precision. It is denoted by the keyword 'double' and occupies 8 bytes of memory. For example, the size
of a double data type is 8 bytes, and it can store values from 2.3E-308 to 1.7E+308.

In summary, the four basic data types in C are integer, character, floating-point, and double floating-point,
which are used to store different types of data in the correct format and with correct types.


**Q1C. What is an identifier? What are the rules to be followed when forming an
identifier?**

In C programming language, an identifier is a name given to entities such as variables, constants, functions,
arrays, and labels. An identifier starts with a letter or underscore, followed by letters, digits, or symbols. The
starting letter of an identifier must be an alphabet or underscore. Identifiers cannot contain whitespace, and
special characters are not allowed. If an identifier is used in external linkage, then it is termed as an external
identifier, and if an identifier is not used in external linkage, then it is termed as an internal identifier. Here are
the rules to be followed when forming an identifier in C:
- The first letter of an identifier should be either an alphabet or underscore.
- Identifiers cannot contain whitespace.
- Special characters are not allowed.
- Identifiers must be unique.
- Keywords cannot be used as identifiers


**Q1D. What is the difference between while and do-while loop? Give an example.**

_Difference between while and do-while loop:_
| While loop | Do-while loop |
| - | - |
| Condition is checked first then statement(s) is executed. | Statement(s) is executed atleast once, thereafter condition is checked. |
| It might occur statement(s) is executed zero times, If condition is false. | At least once the statement(s) is executed. |
| No semicolon at the end of while. ``` while(condition) ``` | Semicolon at the end of while. ``` while(condition); ``` |
| If there is a single statement, brackets are not required. | Brackets are always required. |
| Variable in condition is initialized before the execution of loop. | Variable may be initialized before or within the loop. |
| while loop is entry controlled loop. | do-while loop is exit controlled loop. |
| ``` while(condition) { statement(s); } ``` | ``` do { statement(s); } while(condition); ``` |

> Here is an example of a while loop in C:

```
// While loop example
int i = 1;
while (i <= 5)
{
  printf("%d\n", i);
  i++;
}
```

> Here is an example of a do-while loop in C:
```
// Do-while loop example
int j = 1;
do
{
  printf("%d\n", j);
  j++;
} while (j <= 5);
```
In the above example, the while loop will check the condition first and then execute the statement(s), whereas
the do-while loop will execute the statement(s) at least once, then check the condition. The output of both loops
will be the same, which is the numbers from 1 to 5.


**Q1(E). Body Mass Index (BMI) is a measure of health. It can be calculated by taking your weight in kilograms and dividing by the square of your height in meters. Write a program that prompts the user to enter a weight in pounds and height in inches and displays the BMI. Note that 1 pound is 0.4536 kilogram, and 1 inch is 0.0254 meter.**

```
#include <stdio.h>
int main()
{
float wp, hi, wk, hm, bmi;
// Prompt the user to enter weight in pounds

printf("Enter weight in pounds: ");
scanf("%f", &wp);

// Prompt the user to enter height in inches
printf("Enter height in inches: ");
scanf("%f", &hi);

// Convert weight from pounds to kilograms
wk = wp * 0.4536;

// Convert height from inches to meters
hm = hi * 0.0254:

// Calculate BMI
bmi = wk / (hm * hm);

// Display the BMI
printf("BMI: %.2f\n", bmi);
return 0;
}
```

In this program, the user is prompted to enter the weight in pounds and height in inches. The program then
converts the weight from pounds to kilograms and the height from inches to meters. Finally, it calculates the
BMI using the formula BMI = weight (kg) / (height (m) * height (m)) and displays the result.


## Answer to The Question Number-2

**Q2(a): What is a scope rule? Distinguish between local and global variable.**

_Scope Rule in C Programming:_
The scope of a variable in C is the block or the region in the program where a variable is declared, defined, and used. Outside this region, we cannot access the variable and it is treated as an undeclared identifier.

_Distinguish between local and global variable._
| Global Variable | Local Variable |
| - | - |
| Global variables are declared outside all the function blocks. | Local Variables are declared within a function block. |
| The scope remains throughout the program. | The scope is limited and remains within the function only in which they are declared. |
| Any change in global variable affects the whole program, wherever it is being used. | Any change in the local variable does not affect other functions of the program. |
| A global variable exists in the program for the entire time the program is executed. | A local variable is created when the function is executed, and once the execution is finished, the variable is destroyed. |
| If the global variable is not initialized, it takes zero by default. | If the local variable is not initialized, it takes the garbage value by default. |
| Global variables are stored in the data segment of memory. | Local variables are stored in a stack in memory. |
| We cannot declare many variables with the same name. | We can declare various variables with the same name but in other functions. |

> Here is an example to illustrate the difference between local and global variables:

```
#include <stdio.h>

// Global variable
int global_var = 10;

int main()
{

// Local variable

int local_var = 20;
printf("Global variable: %d\n", global_var);
printf("Local variable: %d\n", local_var);

// Changing the value of global variable

global_var = 30;
printf("Global variable after change: %d\n", global_var);
return 0;
}
```
In this example, global_var is a global variable, and local_var is a local variable. The program first prints the
values of both variables, then changes the value of global_var, and finally prints the new value of global_var.
The output of this program will be:
```
Global variable: 10
Local variable: 20
Global variable after change: 30
```
As we can see, the value of global_var can be changed and accessed from anywhere in the program, whereas
the value of local_var is limited to the block or function in which it is declared.


**Q2(b): What is the output of the following program?**
```
#include<stdio.h>
void main()
{
  int a[]={1,2}, *p=a;
  printf("%d",p[1]);
}
```

The output of this program is 2.


**Q2C: Compare else-if ladder and switch-case structure with examples.**

_Comparison between else-if ladder and switch-case structure:_
| switch statement | if-else-if ladder statement |
| - | - |
| The expression used in switch statement can return an integer or character. | The expression used in if-else-if ladder statement returns true or false value.|
| switch statement has more flexibility. | if-else-if ladder statement have poor flexibility. |
| This statement is easy to handle. | This statement is difficult to handle. |
| There is no need to put the multiple statements of a case into braces. | Multiple statements of if-else-if ladder statement must be within braces. |
| switch statement have clearer format than if-else-if ladder statement. | if-else-if ladder statement have a complex format. |
| In switch statement the keyword switch, case and default are used. | In if-else-if ladder statement the keyword if and else are used. |

> Here is an example to illustrate the difference between an else-if ladder and a switch-case structure:
```
#include <stdio.h>
int main() {
int choice;
printf("Enter a number between 1 and 3: ");
scanf("%d", &choice);

// Else-if ladder
if (choice == 1)
{
  printf("You chose option 1\n");
}
else if (choice == 2)
{
  printf("You chose option 2\n");
}
else if (choice == 3)
{
  printf("You chose option 3\n");
}
else
{
  printf("Invalid choice\n");
}
```
```
// Switch-case structure
switch (choice)
{
  case 1:
  printf("You chose option 1\n");
  break;
  case 2:
  printf("You chose option 2\n");
  break;
  case 3:
  printf("You chose option 3\n");
  break;
  default:
  printf("Invalid choice\n");
  break;
}
  return 0;
}
```
In this example, the user is prompted to enter a number between 1 and 3. The program then uses an else-if
ladder and a switch-case structure to determine the user's choice and display a corresponding message. Both the
else-if ladder and the switch-case structure achieve the same result, but the switch-case structure is more
compact and allows testing of a single expression against a list of discrete values.


**Q2D: Write about while and do-while loop with its syntax and proper example.**

_While Loop:_
- The while loop is used to repeat a block of code as long as a specified condition is true.
- The condition is checked before executing the loop body, and if the condition is true, the loop body is
executed.
- If the condition is false, the loop is terminated, and the program continues with the next statement after
the loop.
- The syntax of the while loop is as follows.
```
while (condition)
{
 // code to be executed
}
```
- The condition is a boolean expression that is evaluated before each iteration of the loop.
- If the condition is true, the loop body is executed. If the condition is false, the loop is exited.
> Example:
```
#include <stdio.h>
int main()
{
int i = 1;
while (i <= 5)
{
  printf("%d\n", i);
  i++;
}
  return 0;
}
```
Output:
```
1
2
3
4
5
```

_Do-While Loop:_
- The do-while loop is similar to the while loop, but the condition is checked after executing the loop
body.
- This means that the loop body is executed at least once, even if the condition is false.
- After executing the loop body, the condition is checked, and if it is true, the loop body is executed again.
- If the condition is false, the loop is terminated, and the program continues with the next statement after
the loop.
- The syntax of the do-while loop is as follows:
```
do
{
// code to be executed
}
while (condition);

```
- The condition is a boolean expression that is evaluated after each iteration of the loop.
> Example:
```
#include <stdio.h>
int main()
{
int i = 1;
do
{
  printf("%d\n", i);
  i++;
}
while (i <= 5);
  return 0;
}

```
Output:
```
1
2
3
4
5
```
In both examples, the loop body is executed as long as the condition (i <= 5) is true. The difference is that the
while loop checks the condition before executing the loop body, while the do-while loop checks the condition
after executing the loop body.


**Q2E: Write down the output of the following code statement.**
```
#include<stdio.h>
int main(void)
{
  int y=100;
  const int x=y;
  printf("%d",x);
  return 0;
}
```

The output of the following code statement is 100.

## Answer To The Question Number-3

**Q3A.1 What is the difference between Character Array and String**

 A character array is a collection of variables of character data type, whereas a string is a sequence of characters represented as a single data type. Here are some differences between a character array and a string:
 | Strings | Character Arrays |
 | - | - |
 | String refers to a sequence of characters represented as a single data type. | Character Array is a sequential collection of data type char. |
 | Strings are immutable. | Character Arrays are mutable. |
 | Built in functions like substring(), charAt() etc can be used on Strings. | No built in functions are provided in Java for operations on Character Arrays. |
 | ‘+’ can be used to appended strings together to form a new string. | ‘+’ cannot be used to append two Character Arrays. |
 | The charAt() method can be used to access characters at a particular index in a String. | The characters in a Character Array can be accessed normally like in any other language by using []. |
 | Strings can be stored in any manner in the memory. | Elements in Character Array are stored contiguously in increasing memory locations. |
 | All Strings are stored in the String Constant Pool. | All Character Arrays are stored in the Heap. |

> Here is an example to illustrate the difference between a character array and a string:
 ```
#include <stdio.h>
#include <string.h>
int main() {
char char_array[] = {'H', 'e', 'l', 'l', 'o', '\0'};
char string[] = "Hello";
printf("Character array: %s\n", char_array);
printf("String: %s\n", string);
return 0;
}
```
In this example, char_array is a character array, and string is a string. The program prints both variables using
the ``` %s ``` format specifier, which is used to print strings. The output of this program will be:
```
Character array: Hello
String: Hello
```
As we can see, both variables contain the same sequence of characters, but the character array is mutable,
whereas the string is immutable.


**Q3A.2: What is the difference between Signed and unsigned integer.**

_Difference between Signed and Unsigned Integer:_
In C programming, integers can be classified into two types: signed and unsigned integers. Here are some
differences between signed and unsigned integers:
| Signed Int | Unsigned Int |
| -  | - |
| A signed int can store negative values. | Unsigned integer values can only store positive values. |
| A signed integer can hold values from -232 /2 – 1 ( -2147483648 ) to  232 /2 – 1 ( 2147483647 ) | A 32-bit unsigned integer can store only positive values from 0 to 232-1 ( 4294967295 ) |
| A signed integer can get an overflow error while used in a program with larger values. | An unsigned integer never gets an overflow error because if the result is greater than the largest value of the unsigned integer type, the value is reduced to the modulo of the largest number plus one which can be represented as an unsigned integer. |
| The syntax of a signed integer is ``` int x; ``` | The syntax of an unsigned integer is ``` unsigned int x; ``` |

> Here is an example to illustrate the difference between signed and unsigned integers:
```
#include <stdio.h>
int main()
{
  int x = -10;
  unsigned int y = 10;
  printf("Signed integer: %d\n", x);
  printf("Unsigned integer: %u\n", y);
return 0;
}
```

The output of this program will be:
```
Signed integer: -10
Unsigned integer: 10
```
As we can see, the signed integer x can represent negative numbers, whereas the unsigned integer y can only
represent non-negative numbers.


**Q3B: What is a function prototype? Give an example.**

_Function Prototype:_
In C programming, a function prototype is a declaration of a function that specifies the function's name, parameters, and return type. It is used to inform the compiler about the function's signature, so that the compiler can perform type checking on function calls and ensure that the function is used correctly. A function prototype does not contain the function body, only the function signature. The syntax of a function prototype is as follows:
```
return_type function_name(parameter1_type parameter1_name, parameter2_type parameter2_name, ...);
```
Here, ``` return_type ``` is the data type of the value returned by the function, ``` function_name ``` is the name of the function, and ``` parameter1_type ``` , ``` parameter2_type ```, etc. are the data types of the function's parameters.
> Here is an example of a function prototype:

```
#include <stdio.h>
int addNumbers(int a, int b); // function prototype

int main()
{
int n1, n2, sum;
printf("Enter two numbers: ");
scanf("%d %d", &n1, &n2);

sum = addNumbers(n1, n2); // function call
printf("Sum = %d", sum);
return 0;
}

int addNumbers(int a, int b) // function definition
{
int result;
result = a + b;
return result;
}
```
> [!NOTE]
> You cannot declare a function after main function. You have to declared the function before the uses scope. But you can define it after the scope.

In this example, ``` addNumbers ``` is a function that takes two integers as parameters and returns their sum. The function prototype is declared at the top of the program, before the ``` main ``` function. The function prototype provides the following information to the compiler:
- The name of the function is ``` addNumbers ```.
- The return type of the function is ``` int ```.
- Two arguments of type ``` int ``` are passed to the function.
The function prototype allows the compiler to perform type checking on the function call in the main function,
ensuring that the function is used correctly.


**Q3C: What does the goto statement do?**

_Goto Statement in C Programming:_
In C programming, the goto statement is used to transfer control of the program to a specified label. It allows altering the normal sequence of program execution by transferring control to some other part of the program.
The syntax of the goto statement is as follows:
```
goto label;
...
...
...
label: statement;
```

Here, ``` label ``` is an identifier, and ``` statement ``` is the code that will be executed when the ``` goto ``` statement is encountered. When the ``` goto ``` statement is executed, the control of the program jumps to the specified label and starts executing the code.
> Here is an example of using the ``` goto ``` statement in C programming:
```
#include <stdio.h>
int main()
{
  int i = 0;
  loop:
  printf("%d\n", i);
  i++;
  if (i < 5)
    {
      goto loop;
    }
return 0;
}
```
In this example, the ``` goto ``` statement is used to create a loop that prints the numbers from 0 to 4. The program first declares an integer variable ``` i ``` and initializes it to 0. The program then defines a label loop and prints the value of i. The program then increments i and checks if i is less than 5. If i is less than 5, the program jumps to the loop label using the goto statement. This process continues until i is no longer less than 5. The use of the goto statement is highly discouraged in modern programming because it can lead to code that is
hard to read and maintain. However, there are some cases where the ``` goto statement ``` can be useful, such as
breaking out of nested loops or handling errors in a program.


**Q3D: Write a program, which implements a function that takes a number a as parampar. The function calculates and displays the n" Fibonacci number.**

Here's the C language program that implements a function to calculate and display the n-th Fibonacci number:
```
#include <stdio.h>
int f(int n)
{
  if(n<0)
  {
    printf("Invalid input. n should be a positive integer.\n");
    return 1;
  }
  else
  {
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<n;i++)
      {
        c=a+b;
        a=b;
        b=c;
      }
  return b;
  }
  }

  int main()
  {
  int n;
  printf("Enter the value of n: ");
    if (scanf("%d",&n)!=1 ||n<1)
    {
      printf("Invalid input. Please enter a valid positive integer for n.\n");
      return 1;
    }
  int result = f(n);
  if (result != -1)
  {
    printf("The %d-th Fibonacci number is: %d\n", n, result);
  }
  return 0;
}
```


## Answer To The Question Number-4

**Q4A: Distinguish between pass by value and pass by reference for function parameters
with example.**

In programming, the terms "pass by value" and "pass by reference" refer to the way function parameters are passed to a function. The difference lies in how changes to the function parameter inside the function affect the original variable outside the function.
_Pass by Value:_
In pass by value, a copy of the actual parameter value is passed to the function. Any changes made to the
parameter inside the function do not affect the original variable outside the function.
> Example of pass by value in C:
```
#include <stdio.h>
void modifyValue(int num)
{
  num = num + 10; // Changes made to the 'num' parameter do not affect the original
  variable.
}
int main()
{
  int value = 5;
  printf("Original value: %d\n", value);
  modifyValue(value);
  printf("Value after function call: %d\n", value); // Output: 5, as the original value is
  unchanged.
  return 0;
}
```
_Pass by Reference:_
In pass by reference, the memory address of the actual parameter is passed to the function. Any changes made to the parameter inside the function will directly affect the original variable outside the function.
> Example of pass by reference in C using pointers:
```
#include <stdio.h>
void modifyValueByReference(int *num)
{
  *num = *num + 10; // Changes made to the 'num' parameter will affect the original
  variable.
}

int main()
{
  int value = 5;
  printf("Original value: %d\n", value);
  modifyValueByReference(&value); // Passing the address of 'value' to the function.
  printf("Value after function call: %d\n", value); // Output: 15, as the original value is modified.
return 0;
}
```


**Q4B: What is a pointer variable? What is '&' and ‘*’ operators used for in case of pointers? Explain with example.**

A pointer variable is a variable that stores the memory address of another variable. Instead of holding the actual value, a pointer contains the address where the value is stored in memory. Pointers are powerful tools in programming as they allow us to indirectly access and manipulate memory locations, which is particularly useful when dealing with dynamic memory allocation and passing parameters by reference to functions.

_In C/C++, the & and * operators are used in relation to pointers:_

& (Address-of Operator):
The & operator is used to get the memory address of a variable. It provides the address where the variable is stored in memory. It is mainly used when declaring and initializing pointer variables.
> Example:
```
#include <stdio.h>
int main()
{
  int num = 42;
  int *ptr; // Declare a pointer variable of type int
  ptr = &num; // Assign the address of 'num' to the pointer 'ptr'
  printf("Value of num: %d\n", num);
  printf("Address of num: %p\n", &num);
  printf("Value of ptr: %p\n", ptr); // This will print the address of 'num'
return 0;
}
```
* (Dereference Operator):
The * operator is used to access the value stored at the memory address pointed to by a pointer. It is also known as the "dereference" operator because it "dereferences" the pointer to access the value it points to.
> Example:
```
#include <stdio.h>
int main()
{
  int num = 42;
  int *ptr; // Declare a pointer variable of type int
  ptr = &num; // Assign the address of 'num' to the pointer 'ptr'
  printf("Value of num: %d\n", num);
  printf("Value of ptr: %p\n", ptr);
  printf("Value pointed by ptr: %d\n", *ptr); // This will print the value of 'num'
return 0;
}
```
In this example, ``` *ptr ``` dereferences the pointer ptr, allowing us to access the value stored in the memory location pointed to by ptr, which is the value of the variable num. Keep in mind that using pointers requires careful handling, as improper usage can lead to memory-related issues like segmentation faults and memory leaks. However, when used correctly, pointers can be very useful in various programming scenarios.


**Q4C: Define multiple indirection.**

Multiple indirection is a programming concept in which a pointer is used to indirectly access another pointer, which in turn indirectly accesses the actual data. This can be used to create a chain of pointers, each of which points to the next one in the chain. For example, let's say we have a variable n that stores the value 10. We can create a pointer to n called pn. We can then create another pointer to pn called ppn. ppn will indirectly point to n through pn.
```
int n = 10;
int* pn = &n;
int** ppn = &pn;
```
To access the value of n through ppn, we would use the following code:
```
int value = **ppn;
```
This code would first dereference ppn to get the address of pn. It would then dereference pn to get the address of n. Finally, it would dereference n to get the value of n. 
Multiple indirection can be used to implement a variety of data structures, such as linked lists and trees. It can also be used to implement security features, such as access control lists. 
The unary indirection operator (*) is used to access the value indirectly through a pointer. In the example above, the expression ``` **ppn ``` is using the indirection operator to access the value of n through the pointers pn and ppn.


**Q4D: Determine the output of the following expressions. Here, a = 2 , b = 6, c = - 6.**

**i) b>15 || c<0 && a>0**

To evaluate this expression, we follow the operator precedence (AND has higher precedence than OR):

```
b > 15 is False (6 is not greater than 15)
c < 0 is True (-6 is less than 0)
a > 0 is True (2 is greater than 0)
```

Now, the expression becomes:

``` False || (True && True) ```

Since AND (&&) has higher precedence than OR (||), we evaluate (True && True) first:

``` False || True ```

Now, we evaluate the OR operator (||):
> **Result:** True

**ii) a-->b && (b/2!-0):**

In C/C++, the '--' operator is used to decrement the value of a variable. However, the expression 'b / 2!' is not valid as '!' is not a valid operator in C/C++. I assume you meant 'b / 2' instead.
Let's evaluate the modified expression:
To evaluate this expression, we follow the operator precedence (postfix decrement has higher precedence than
AND):
a-- > b is True (a is 2, b is 6, and the result of a-- is 2, which is greater than b = 6)

``` (b / 2 - 0) is 3 (b = 6, 6 / 2 = 3) ```

Now, the expression becomes:

``` True && 3 ```

Now, we evaluate the AND operator (&&):
>**Result:** True


**Q4E: Why conditional operator is called the ternary operator? Give an example to show the use of conditional operator.**

The conditional operator is called the ternary operator because it takes three operands. The first operand is the condition, the second operand is the value to be returned if the condition is true, and the third operand is the value to be returned if the condition is false.
The syntax for the conditional operator is:

``` condition ? value_if_true : value_if_false ```

For example, the following code uses the conditional operator to print ``` "Hello" ``` if the variable age is greater than 18, and ``` "Goodbye" ``` if the variable age is less than or equal to 18:
```
int age = 20;
char* message = age > 18 ? "Hello" : "Goodbye";
printf("%s\n", message);
```

The conditional operator is a shorthand for the following if-else statement:
```
if (age > 18)
{
  message = "Hello";
} else
{
  message = "Goodbye";
}
```
The conditional operator is a concise way to write a simple decision-making statement. It can be used to replace
an if-else statement when the condition is simple and the code to be executed for each case is short.


## Answer To The Question Number-5

**Q5A: Define string and length of a string.**

A string in C is a sequence of characters terminated by a null character ``` '\0' ```. The null character is a special
character that is used to indicate the end of a string.
The length of a string in C is the number of characters in the string, including the null character. The length of a string can be determined using the ``` strlen() ``` function.
The ``` strlen() ``` function is a library function that is defined in the ``` <string.h> ``` header file. The ``` strlen() ``` function takes a string as an argument and returns the length of the string as an integer.


**Q5B: What do you mean by the terms of ``` getchar() ``` and ``` putchar() ``` ?**

``` putchar() ``` function is a file handling function in C programming language which is used to write a character on standard output/screen. ``` getchar() ``` function is used to get/read a character from keyboard input.
```
#include <ctype.h>
int main()
{
  char c;
  printf("Enter some character. Enter $ to exit...\n");
  while (c != '$');
    {
      c = getchar();
      printf("\n Entered character is: ");
      putchar(c);
      printf("\n")
    }
return 0;
}
```


**Q5C: Explain the initialization of a 2-D array of char type. Give an example.**

To initialize a 2-D array of char type in C, you can use curly braces {} to specify the initial values for the array elements. A 2-D array of char is essentially an array of arrays, where each element is a char (a single character).
_The syntax for initializing a 2-D array of char is as follows:_
```
char array_name[row_size][column_size] = {  {'a', 'b', 'c'},
                                            {'d', 'e', 'f'},
                                            {'g', 'h', 'i'}
                                         };
```
Here, row_size specifies the number of rows in the 2-D array, and column_size specifies the number of columns in each row.
> Example of initializing a 2-D array of char:
```
#include <stdio.h>
int main()
{
  char string[3][3] = { {'X', 'O', 'X'},
                        {'O', 'X', 'O'},
                        {'X', 'O', 'X'} };
  printf("Tic-Tac-Toe Board:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%c ", string[i][j]);
    }
    printf("\n");
  }
return 0;
}
```
In this example, we have initialized a 2-D array tic_tac_toe_board representing a Tic-Tac-Toe board. The tic_tac_toe_board is a 3x3 array, where each element holds a character 'X' or 'O' to represent the player's move.
The output of the program will be:
```
Tic-Tac-Toe Board:
X O X
O X O
X O X
```
The elements of the 2-D array are accessed using two indices, one for the row and the other for the column. In the example, ``` string[0][0] ``` gives 'X', ``` string[1][1] ``` gives 'X', and ``` string[2][1] ``` gives 'O'. Remember that in C, 2-D arrays are stored in row-major order, meaning the elements of the same row are stored together in contiguous memory locations.


**Q5D: Write a program to compute the number of occurrences of a character in a string.**

_A C program to compute the number of occurrences of a character in a given string:_
```
#include <stdio.h>
int main()
{
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
```


**Q5E: Write a program to concatenate two strings.**

There have two way to write this.
>One is using typical method:
```
#include <stdio.h>
#include <string.h>
int main()
{
  char s1[1000],s2[1000];
  int i,j;
  printf("Enter String 1: ");
  scanf("%s",s1);
  printf("Enter String 2: ");
  scanf("%s",s2);
  j=strlen(s1);
  for(i=0;s2[i]!='\0';i++)
    {
      s1[i+j]=s2[i];
    }
  s1[i+j]='\0';
  printf("Combined two strings ='%s'\n",s1);
return 0;
}
```

_Another one is using library function:_
```
#include <stdio.h>
#include <string.h>
int main()
{
  char s1[1000];
  char s2[1000];
  printf("Enter the first string: ");
  scanf("%s",s1);
  printf("Enter the second string: ");
  scanf("%s",s2);
  strcat(s1, s2);
  printf("Concatenated string: %s\n", s1);
return 0;
}
```
## Answer To The Question Number-6

**Q6A: What is an array? Why array is important than variable?**

An array is a collection of elements of the same data type, stored in contiguous memory locations. Each element in an array is identified by its index or position, starting from 0 for the first element and increasing by 1 for each subsequent element. Arrays provide a way to store multiple values of the same data type under a single variable name.
Arrays are essential in programming for several reasons:
1. _Organizing and Accessing Data_: Arrays allow you to organize related data items under a single variable, making it easier to manage and access the data elements. Instead of creating separate variables for each value, you can use an array to represent a group of related values.
2. _Efficiency_: Arrays enable efficient access to elements using their index. Since the elements are stored in contiguous memory locations, accessing an element takes constant time (O(1)), making array access very fast compared to searching for a specific variable among a large set of
variables.
3._ Loops and Iteration_: Arrays work well with loops, enabling you to perform repetitive operations on all elements in the array easily. You can use loops to iterate through the array and perform actions on each element.
4. _Space Efficiency_: Arrays consume less memory compared to using individual variables for each value. By using an array, you can save memory and reduce code duplication.
5. _Grouping Related Data_: Arrays are helpful when dealing with related data, such as a list of student scores, employee IDs, or pixel values in an image. The array helps maintain the relationship between data elements.
6. _Simplifying Code_: When you need to handle a large number of similar data elements, using arrays can simplify your code by reducing the number of individual variables needed.
7. _Passing Data to Functions_: Arrays are frequently used for passing a collection of data to functions, which is particularly useful when you want to perform operations on a set of values within a function.

In summary, arrays are essential in programming because they allow efficient storage, retrieval, and manipulation of related data elements. They make the code more organized, efficient, and readable, especially when dealing with multiple data items of the same type.


**Q6B: Define composite data structure. Differ between structures and union.**

Composite data structures are data types that combine multiple elements of different data types into a single unit. These elements can be primitive data types (integers, characters, etc.) or other composite data structures like arrays or other structures. Composite data structures are used to represent complex data entities that consist of various attributes or properties.

_Difference between Structure and Union in C:_
Both a structure and a union combine different information related to a given entity. The main difference between union and structure is how specific information is stored and accessed. The table below highlights the key differences between structure and union in C is as follows:

| Structure | Union |
| - | - |
| We use the struct statement to define a structure. | We use the union keyword to define a union. |
| Every member is assigned a unique memory location.  | All the data members share a memory location. |
| Change in the value of one data member does not affect other data members in the structure. | Change in the value of one data member affects
the value of other data members. | 
| You can initialize multiple members at a time. | You can initialize only the first member at once. | 
| A structure can store multiple values of the different members. | A union stores one value at a time for all of its members | 
| A structure’s total size is the sum of the size of every data member. | A union’s total size is the size of the largest data member. | 
|  Users can access or retrieve any member at a time. | You can access or retrieve only one member at a time. | 


**Q6C: What is file pointer? Write down the modes of file to open or create in C
programming.**

A file pointer stores the current position of a read or write within a file.

Here are many modes for opening a file:

- r - Opens an existing file for reading.
- w - Opens or create a text file in write mode.
- a - Opens a file for writing, but appends data to the end of the file instead of overwriting existing content.
- r+ - Opens an existing file for both reading and writing.
- a+ - Opens a file for both reading and writing.
- w+ - Opens a file in both read and write mode.

The mode parameter is used with the fopen() function to specify the mode in which you want to open or create the file. For example, ``` fopen("example.txt", "r") ``` opens the file ``` "example.txt" ``` in read mode, and ``` fopen("data.txt", "w") ``` opens (or creates) the file ``` "data.txt" ``` in write mode.


**Q6D: What is "#" and "##" operator? Write about break and continue.**

_"#" (Stringizing Operator):_
The "#" operator is used in macro definitions to convert a macro parameter into a string literal. It is called the "stringizing" or "stringification" operator. When used before a macro parameter in a macro definition, it converts the parameter into a string literal.
> Here's an example:
```
#include <stdio.h>
#define STRINGIFY(x) #x
int main()
{
  int num = 42;
  printf("The value of num: %s\n", STRINGIFY(num)); // Converts num to "num" as a string literal
return 0;
}
```

The output of this program will be:
```
The value of num: 42
```

_"##" (Token Pasting Operator):_
The "##" operator is used in macro definitions to concatenate two tokens, combining them into a single token. It is called the "token pasting" or "concatenation" operator. When used between two macro parameters or a macro parameter and other text, it merges them into a single token.
> Here's an example:
```
#include <stdio.h>
#define CONCAT(x, y) x##y
int main()
{
  int num1 = 10;
  int num2 = 20;
  int result = CONCAT(num1, num2); // Merges num1 and num2 into a single token (resulting in 1020)
  printf("Result: %d\n", result);
return 0;
}
```

The output of this program will be:
```
Result: 1020
```

_break:_

The "break" statement is used inside loops (such as for, while, or do-while loops) and switch statements. When the "break" statement is encountered, it immediately exits the loop or the switch statement, and the control flow continues to the first statement after the loop or switch.

> Here's an example of using the "break" statement in a while loop:
```
#include <stdio.h>
int main()
{
  int i;
  for (i = 1; i <= 10; i++)
  {
    if (i == 5)
      {
        break; // Exit the loop when i becomes 5
      }
  printf("%d ", i);
  }
return 0;
}

```
The output of this program will be:
```
1 2 3 4
```

_continue:_
The "continue" statement is also used inside loops (such as for, while, or do-while loops). When the "continue" statement is encountered, it immediately skips the rest of the loop body and moves to the next iteration of the loop.

> Here's an example of using the "continue" statement in a for loop:
```
#include <stdio.h>
int main() 
{
  int i;
  for (i = 1; i <= 5; i++) 
    {
      if (i == 3) 
        {
          continue; // Skip the rest of the loop body when i is 3
        }
    printf("%d ", i);
    }
return 0;
}
```

The output of this program will be:
```
1 2 4 5
```

## Answer To The Question Number-7


**Q7A: What is storage class specifier in C programming? Write about static and register with example.**

A storage class specifier is a keyword used to define the storage duration and scope of variables. Storage class specifiers determine how variables are stored in memory and how long they exist during program execution.

_Static:_
The "static" storage class specifier is used for both global variables and local variables within a function. When applied to a global variable, it limits the scope of the variable to the current source file, making it accessible only within that file. For local variables, "static" changes their storage duration, causing them to retain their values across multiple function calls. In the case of global variables, it means that their values persist throughout the program's execution.
> Example of "static" storage class:
```
#include <stdio.h>
void foo()
{
  static int count = 0;
  count++;
  printf("Count: %d\n", count);
}

int main()
{
  foo();
  foo();
  foo();
  return 0;
}
```

Output:
```
Count: 1
Count: 2
Count: 3
```
In this example, the local variable "count" is declared as "static" inside the function foo(). Each time the function is called, the value of "count" persists across function calls, and its value is incremented by one.

_register:_
The "register" storage class specifier is used to suggest that a variable be stored in a CPU register for faster access. However, modern compilers are capable of automatically optimizing the use of registers, and the "register" keyword is mostly considered a hint rather than a strict directive. Using "register" doesn't guarantee that the variable will be stored in a register.
> Example of "register" storage class (with a potential warning):
```
#include <stdio.h>
int main()
{
  register int i;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }
return 0;
}
```
> [!NOTE]
> The use of "register" keyword may not have any visible effect in modern compilers. The compiler will decide whether to store the variable in a register based on its optimization settings and the specific context of its usage.


**Q7B: How do ``` malloc() ``` and ``` free() ``` work? Write with proper example.**

The function ``` malloc() ``` and ``` free() ``` are used for dynamic memory allocation and deallocation, respectively. They allow you to allocate memory on the heap at runtime, which can be useful when you don't know the size of the data you need to store until the program is running.

``` malloc(): ``` 
The ``` malloc() ``` function stands for "memory allocation." It is used to dynamically allocate a specified amount of memory on the heap. It takes the number of bytes to be allocated as an argument and returns a pointer to the beginning of the allocated memory block. If the allocation is successful, malloc() returns a valid pointer; otherwise, it returns NULL.
> The syntax of malloc() is as follows:

``` void* malloc(size_t size); ``` 

> Here's an example of how to use ``` malloc() ``` :
``` 
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  int *arr;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Allocate memory for 'n' integers
  arr = (int*)malloc(n * sizeof(int));
  if (arr == NULL)
  {
    printf("Memory allocation failed.\n");
    return 1;
  }
  printf("Enter %d integers:\n", n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("You entered: ");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Free the allocated memory when done using it
  free(arr);
return 0;
}
``` 
In this example, the program asks the user to enter the number of elements to be stored in an array. It then dynamically allocates memory for 'n' integers using ``` malloc() ```. If the allocation is successful, the user is prompted to input the 'n' integers. After printing the entered values, the dynamically allocated memory is freed using ``` free() ```.


``` free() ```:
The ``` free() ``` function is used to deallocate the memory previously allocated by ``` malloc() ``` or other memory allocation functions. It takes a pointer to the memory block to be freed as its argument and releases the memory back to the system, making it available for future allocation.

> The syntax of free() is as follows:

``` void free(void* ptr); ``` 

>Here's an example of how to use ``` malloc() ``` and ``` free() ``` :
``` 
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  int *arr;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Allocate memory for 'n' integers
  arr = (int*)malloc(n * sizeof(int));
  if (arr == NULL)
  {
    printf("Memory allocation failed.\n");
    return 1;
  }
  printf("Enter %d integers:\n", n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("You entered: ");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Free the allocated memory when done using it
  free(arr);
return 0;
}
```

In this example, the program allocates memory for 'n' integers using ``` malloc() ``` and later frees the memory using ``` free() ``` when the allocated memory is no longer needed. It is essential to free dynamically allocated memory to prevent memory leaks and efficiently manage memory resources in the program.


**Q7C: What is meant by macros in C programming? Write about #define with example.**

Macros are preprocessor directives that allow you to define constant values, code snippets, or function-like constructs that are replaced by their respective definitions before the actual compilation of the code. Macros are defined using the #define preprocessor directive and are primarily used to make the code more readable, maintainable, and reusable.

The general syntax of defining a macro using #define is as follows:

``` #define MACRO_NAME value_or_code_snippet ``` 

After defining a macro, every occurrence of the macro name in the code will be replaced by its value or code snippet during the preprocessing phase.
> Here's an example to illustrate the use of #define:
``` 
#include <stdio.h>

// Define a macro for the value of PI
#define PI 3.14159

// Define a macro for finding the square of a number
#define SQUARE(x) ((x) * (x))

int main()
{
  double radius, area;
  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);
  area = PI * SQUARE(radius);
  printf("Area of the circle: %.2lf\n", area);
return 0;
}
```

In this example, we have defined two macros using #define. The first macro PI represents the value of π, and the second macro ``` SQUARE(x) ``` calculates the square of the given number 'x'. In the main() function, we use these macros to calculate the area of a circle.

During the preprocessing phase, the compiler replaces all occurrences of PI with the value 3.14159 and all occurrences of SQUARE(radius) with the expression ((radius) * (radius)).

After preprocessing, the code looks like this:
``` 
#include <stdio.h>
int main()
{
  double radius, area;
  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);
  area = 3.14159 * ((radius) * (radius));
  printf("Area of the circle: %.2lf\n", area);
return 0;
}
```



**Q7D: Write a program in c to display Fibonacci sequence.**

A C program to display the Fibonacci sequence up to a given number of terms using function:
``` 
#include <stdio.h>
void f(int n)
{
  int a=0,b=1,c;
  printf("Fibonacci Sequence up to %d terms:\n", n);
  printf("%d,%d",a,b);
  for(int i=2;i<n;i++)
    {
      c = a + b;
      printf(", %d", c);
      a = b;
      b = c;
    }
  printf("\n");
}
int main()
{
  int n;
  printf("Enter the number of terms in the Fibonacci sequence: ");
  scanf("%d", &n);
  if (n<=0)
    {
      printf("Number of terms should be greater than 0.\n");
    }
  else
    {
      f(n);
    }
return 0;
}
```

A C program to display the Fibonacci sequence up to a given number of terms without using a separate function:
``` 
#include <stdio.h>
int main()
{
  int n,a=0,b=1,c;
  printf("Enter the number of terms in the Fibonacci sequence: ");
  scanf("%d",&n);
  if(n<=0)
    {
      printf("Number of terms should be greater than 0.\n");
      return 1;
    }
  printf("Fibonacci Sequence up to %d terms:\n", n);
  printf("%d,%d",a,b);
  for (int i=2;i<n;i++)
    {
      c=a+b;
      printf(", %d",c);
      a=b;
      b=c;
    }
  printf("\n");
return 0;
}
```


**Q8A: Write a program to compute Armstrong number between two intervals.**

``` 
#include <stdio.h>
#include <math.h>
int main()
{
  int l, u;
  printf("Enter the lower and upper limits of the interval: ");
  scanf("%d %d",&l,&u);

  printf("Armstrong numbers between %d and %d are: ",l,u);
  for(int i = l; i <= u; ++i)
  {
    int a,r,n=0,result=0;
    a=i;

    // Count the number of digits in the number
    while(a!=0)
    {
      a/= 10;
      ++n;
    }
    a=i;
    while(a!=0)
    {
      r=a%10;
      result+=pow(r,n);
      a/=10;
    }
    if (result==i)
    {
      printf("%d ",i);
    }
  }
  printf("\n");
return 0;
}
```


**Q8B: Write about ``` fgets() ``` and ``` fopen() ``` function.**

``` fgets() ``` Function:
The fgets() function is a C library function used to read a line of text from a file or input stream. It reads characters from the specified source until a newline character ('\n') is encountered, or until the specified maximum number of characters is read (minus one for the null-terminator). The newline character is also included in the output, and the resulting string is null-terminated.

The syntax of fgets() is as follows:

``` char *fgets(char *str, int num, FILE *stream); ``` 

> Here's an example of using fgets() to read a line of text from standard input:
``` 
#include <stdio.h>
int main()
{
  char input[100];
  printf("Enter a line of text: ");
  fgets(input, sizeof(input), stdin);
  printf("You entered: %s", input);
  return 0;
}
```

``` fopen() ``` Function:
The fopen() function is used to open a file and create a file pointer (of type FILE*) that points to the beginning of the file. It returns a pointer to the FILE structure, which is used in subsequent file operations like reading or writing data to the file.

The syntax of fopen() is as follows:

``` FILE *fopen(const char *filename, const char *mode); ``` 

> Here's an example of using fopen() to open a file for writing:
``` 
#include <stdio.h>
int main()
{
  FILE *filePtr;
  char text[] = "Hello, World!";
  filePtr = fopen("output.txt", "w"); // Open file in write mode
  if (filePtr == NULL)
  {
    printf("Error opening the file.\n");
    return 1;
  }
  fprintf(filePtr, "%s\n", text); // Write text to the file
  fclose(filePtr); // Close the file
return 0;
}
``` 


**Q8C: Write a program to compute the frequency of character in a string.**

``` 
#include <stdio.h>
int main()
{
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
```


**Q8D: Write a program to check a string whether it is palindrome or not.**

``` 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
  char s[100];
  printf("Enter a string: ");
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
    }
    i++;
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
```
