# SPL-Solve-9th-Batch

## Solution of Question-01

**Q1A: What is switch statement used for? Write the structure of switch statement.**

The ``` switch ``` statement used to execute one code block among many alternatives. It is used to perform different actions based on different conditions(cases).

The structure of switch statement:
```
switch (expression)
{
  case value1:
    // Code block executed when 'expression' matches 'value1'
    break;

  case value2:
    // Code block executed when 'expression' matches 'value2'
    break;

  // Additional cases can be added as needed

  default:
    // Code block executed when none of the above cases match 'expression'
    break;
}
```
 **Q1B: What is the purpose of break and continue? Briefly explain.**

 ``` break ``` statement: The break statement is used within loops (e.g., for, while, do-while) and switch statements. It is used to terminate the loop immediately.
 > An example:
 ```
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    {
        break; // Exit the loop when i equals 5
    }
    printf("%d ", i);
}
// Output: 1 2 3 4
```
```  continue  ``` statement: The continue statement is used only within loop constructs (e.g., for, while, do-while). It is used to skip the current iteration of the loop.
> An example:
```
for (int i = 1; i <= 5; i++)
{
    if (i % 2 == 0)
    {
        continue; // Skip even numbers
    }
    printf("%d ", i);
}
// Output: 1 3 5
```

**Q1C: What is the scope of a variable within a program? Define global and local variable with example.**

The scope of a variable is the block of code in the entire program where the variable is declared, used, and can be modified.

Local Variables are defined within some function and are accessible to that function only which default value is unpredictable (garbage) if you are not initilized it.
> Example:
```
#include<stdio.h>
void main()
{
   int x=23, y=4;
   printf(“x = %d and y=%d”,x,y);
}
// Here x and y are local variables.
```

Global Variables are defined outside of function block and are accessible to entire program which default value is Zero (0).
> Example:
```
#include<conio.h>
int a=10,b;
void main()
{
  printf(“a = %d and b=%d”,a,b);
}
// Here a and b are global variables.
```

**Q1D: Write a program that takes a number n as input from user and generates the following pattern.**
```
 Sample Input  Sample Output 

 4                    ****
                      ***
                      **
                      *
```
```
#include<stdio.h>
int main()
{
    int n;
    printf("Enter line number: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

## Solution of Question-02

**Q2A: What is the difference between: i) A character array and a string ii) Signed and unsigned integer.**

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

**Q2B: What is a function prototype? Give an example.**

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

**Q2D: Write a program, which implements a function that takes a number as parameter. The function calculates and displays the factorial of the number.**

```

#include<stdio.h>

//The function to calculates and displays the factorial.
long long int factorial(int n)
{
    long long int s=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        s*=i;
    }
    return s;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    // Implementation of function
    long long int result = factorial(n);
    printf("\nThe factorial is: %lld",result);
    return 0;
}
```

## Solution of Question-03

**Q3A: Define string with example. What is the difference between 'a' and "a"?**

A string is a sequence of characters and can contain letters, numbers, symbols and even spaces. 
> Example:
```
char c[] = "abcd";

char c[50] = "abcd";

char c[] = {'a', 'b', 'c', 'd', '\0'};

char c[5] = {'a', 'b', 'c', 'd', '\0'};
```

There is a significant difference between using single quotes ('a') and double quotes ("a"):
| Single quotes | Double quotes |
| - | - |
| Single quotes represent a character literal. It is used to represent a single character. | Double quotes represent a string literal. It is used to represent a sequence of characters, i.e., a string. |
| Character literals are enclosed in single quotes. | String literals are enclosed in double quotes. |
| Character literals are of type ``` char ``` | String literals are of type ``` char[] ``` which is an array of characters. |
| For example, 'a' represents the character 'a', and '1' represents the character '1'. | For example, "a" represents a string containing the character 'a', and "Hello" represents the string "Hello". |

**Q3B: What will be the output of the following code snippets?**
```
(i)
#include<stdio.h>
int main()
{
    int v1=5,v2=3,v3;
    v3 = v1++ + v2--;
    printf("%d %d %d\n",v1,v2,v3);
    v2 += --v3 + v1++;
    printf("%d %d %d\n",v1,v2,v3);
    return 0;
}
```
The output will be:
```
6 2 8
7 15 7
```

```
(ii)
#include<stdio.h>
int main()
{
    int x=3,y=5,z=8,result =2;
    result+= 5 * z % 3 + y / 2 + x;
    printf("%d\n",result);
    return 0;
}
```
Output of the following code is:
```
8
```

_Read this to clear confusion._

| Category       | Operator                         | Associativity |
|----------------|----------------------------------|---------------|
| Postfix        | () [] -> . ++ - -                | Left to right |
| Unary          | + - ! ~ ++ - - (type)* & sizeof  | Right to left |
| Multiplicative | * / %                            | Left to right |
| Additive       | + -                              | Left to right |
| Shift          | << >>                            | Left to right |
| Relational     | < <= > >=                        | Left to right |
| Equality       | == !=                            | Left to right |
| Bitwise AND    | &                                | Left to right |
| Bitwise XOR    | ^                                | Left to right |
| Bitwise OR     | |                                | Left to right |
| Logical AND    | &&                               | Left to right |
| Logical OR     | ||                               | Left to right |
| Conditional    | ?:                               | Right to left |
| Assignment     | = += -= *= /= %=>>= <<= &= ^= |= | Right to left |
| Comma          | ,                                | Left to right |


**Q3C: What are the differences between i++ and ++i.**

 The ++ in i++ is called post increment operator and ++i is called the pre increment operator. 
 | Operator | Order of operations                   | Example  | Value of i after the statement executes |
|----------|---------------------------------------|----------|-----------------------------------------|
| i++      | Value is used first, then incremented | j = i++; | j = 1, i = 2                            |
| ++i      | Value is incremented first, then used | j = ++i; | j = 2, i = 2                            |


**Q3D: Write a program, which adds all numbers that are multiples of both 5 and 8 up to 500, and displays the result.**

```
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=40;i<=500;i++)
    {
        if(i%5==0 && i%8==0)
        {
        sum+=i;
        }
    }
    printf("The sum of numbers that are multiples of both 5 and 8 up to 500 is: %d",sum);
}
```
or,
```
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=40;i<=500;i++)
    {
        if(i%40==0)
        {
        sum+=i;
        }
    }
    printf("The sum of numbers that are multiples of both 5 and 8 up to 500 is: %d",sum);
}
```

The result is:
```
The sum of numbers that are multiples of both 5 and 8 up to 500 is: 3120
```

## Solution of the Question-04

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


**Q4D:  Determine the output of the following expressions. Here, a = 5 b = 6 c = -6**

(i) b > 15 && c < 0 || a > 0 

Expression: 6 > 15 && -6 < 0 || 5 > 0
- Evaluate 6 > 15. This is false because 6 is not greater than 15.
- Evaluate -6 < 0. This is true because -6 is indeed less than 0.
- Now, we have false && true (the result of step 1 AND the result of step 2).
- Evaluate false && true. Since one of the operands is false, the result of the AND operation is false.
- Finally, we have false || 5 > 0 (the result of step 3 OR the result of 5 > 0).
- Evaluate false || 5 > 0. Since one of the operands is true (5 > 0 is true), the result of the OR operation is true.
So, the final truth value of the expression 6 > 15 && -6 < 0 || 5 > 0 is true.

Answer: True.

(ii) a++ > b && (b/2!=0)

Expression: 5++ > 6 && (6 / 2 != 0)

- Evaluate x > 6. Since x is 5, the result of this comparison is false.
- Evaluate (6 / 2 != 0). The result of 6 / 2 is 3, and 3 is not equal to 0. So, the result of this comparison is true.
- Now, we have false && true (the result of step 2 AND the result of step 3).
- Evaluate false && true. Since one of the operands is false, the result of the AND operation is false.
So, the final truth value of the expression 5++ > 6 && (6 / 2 != 0) is false.

Answer: False.

**Q4E: What is printed when the following code snippet is executed?**
```
#include<stdio.h>
int main()
{
    for(int m=0;m<4;m++)
    printf("%d\n",(m%2)?m: m+2);
}
```
The output will be:
```
2
1
4
3
```

## Solution of the Question-05

**Q5A: What is a structure? Give an example.**

A structure (struct) is a composite data type that allows you to group multiple variables of different data types together under a single name. It is a way to create a user-defined data type that can represent a collection of related information. Structures are useful for organizing and managing complex data in a more organized manner.

```
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
```

**Q5B: What is the advantage of using union? What is the difference between structure and union?**

 A union is a class all of whose data members are mapped to the same address within its object. A union is a special data type available in C that allows to the storage of different data types in the same memory location.
 Here are some of the main advantages of using unions:
- _Memory efficiency:_ Unions allow efficient memory usage since they share the same memory space for all their members. The size of the union is equal to the size of its largest member. This is particularly useful when dealing with different data types, as it ensures memory is used optimally.
-_ Data representation: _Unions are helpful when you want to represent a single memory location that can hold different types of data at different times. It allows you to handle different types in a unified manner, saving you from defining multiple variables for different data types.
- _Flexibility:_ Unions provide flexibility in handling different data formats within a single data structure. This is especially valuable when working with data that can take on different types, such as in networking protocols or file formats.
- _Interoperability:_ Unions are useful when dealing with external data sources that may provide information in different formats. By using unions, you can easily convert the data into appropriate types for processing within your program.
- _Memory interpretation:_ Unions can be used for low-level memory interpretation and manipulation. For example, when working with binary data or performing bitwise operations, unions can be employed to access individual bits or fields within a larger data structure.
- _Performance_: When used properly, unions can improve the performance of certain operations, as they avoid the need for type casting or converting data types explicitly.

| **Feature**       | **Structure**                         | **Union**                                              |
|-------------------|---------------------------------------|--------------------------------------------------------|
| Data Storage      | Each member has its own memory space  | All members share the same memory space                |
| Member Access     | Can access each member independently  | Only one member can hold a value at a time             |
| Usage and Purpose | Group related data of different types | Store different data types in the same memory location |
| Memory Efficiency | Consumes more memory                  | More memory-efficient                                  |


**Q5C: What is the purpose of #define and #include? explain with example.**

``` #define: ```
The ``` #define ``` directive is used to create a macro or define a constant in your code. It acts as a text substitution mechanism, replacing occurrences of a defined identifier with the specified value throughout the code. This makes the code more readable, maintainable, and allows you to use meaningful names for constants or code snippets.

> Example:
 ``` 
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main()
{
    float radius = 5.0;
    float area = PI * SQUARE(radius);
    printf("Area of the circle: %f\n", area);
    return 0;
}
 ``` 
In this example, we define two macros using #define: PI and SQUARE. PI is defined as a constant value, and SQUARE is defined as a macro function to calculate the square of a given number. The preprocessor will replace all occurrences of PI with 3.14159 and SQUARE(radius) with ((radius) * (radius)), making the code more readable.

 ``` #include: ``` 
The  ``` #include ``` directive is used to include external files or libraries into your C/C++ program. It allows you to use functions, constants, and other declarations from these files in your code. Commonly, it is used to include standard library headers or custom header files containing function prototypes, macros, and other declarations.

> Example:
 ``` 
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
 ``` 
In this simple example, we use #include <stdio.h> to include the standard I/O library (stdio.h) that provides the printf function. This allows us to print "Hello, world!" to the console.

**Q5D: Compare between array and structure. When will you choose array or structure as your data type and why?**

| **Feature**        | **Array**                                                         | **Structure**                                                        |
|--------------------|-------------------------------|---------------------------------------------------|
| Purpose            | Represents a collection of similar data elements of the same type | Represents a collection of related data elements of different types  |
| Data Types         | Elements must be of the same data type                            | Elements can be of different data types                              |
| Declaration Syntax | ``` data_type array_name[size];  ```                                     | ``` struct structure_name { data_type member1; data_type member2; ... }; ``` |
| Accessing Elements | Accessed using index (e.g., array_name[index])                    | Accessed using dot notation (e.g., structure_name.member1)           |
| Memory Allocation  | Contiguous memory allocation for elements                         | Non-contiguous memory allocation for members                         |
| Size Determination | Size determined by the number of elements                         | Size determined by the sum of member sizes                           |
| Usage              | Used when dealing with homogeneous data                           | Used when dealing with related, heterogeneous data                   |
| Example            | int numbers[5];                                                   | ```   struct Person { char name[50]; int age; float salary; };```     |



| **Situation**     | **Choose Array**                           | **Choose Structure**                            |
|-------------------|--------------------------------------------|-------------------------------------------------|
| Data Elements     | Homogeneous data elements of the same type | Heterogeneous data elements of different types  |
| Access Method     | Sequential access                          | Named identifiers for individual members        |
| Size              | Fixed size (determined at compile-time)    | Variable size or dynamic changes during runtime |
| Data Organization | Simple and efficient                       | Improved code readability and data grouping     |


## Solution of Question-06

**Q6A: What is a recursive function? State the fundamental rules of recursion.**

A recursive function is a function that calls itself to solve a smaller version of the same problem.

The fundamental rules of recursion are as follows:

- Base Case: A recursive function must have a base case, also known as the termination condition. The base case is a condition under which the function stops calling itself and returns a result directly without making further recursive calls. It prevents the function from entering an infinite loop and ensures that the recursion eventually terminates.

- Recursive Call: Inside the body of a recursive function, there should be a call to the same function, typically with modified arguments or parameters. This is the essential step that breaks the problem into smaller subproblems. Each recursive call should move the problem closer to the base case.

Convergence to Base Case: For each recursive call, the input size or problem complexity should reduce until it reaches the base case, where the problem can be solved directly.

> Example:
```
 int factorial(int n) {
    // Base case: If n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive call: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}
```

**Q6B: What do you understand by sorting? Given the numbers {5, 4, 3, 1, 2}, show the steps of the bubble sort for the case of ascending order of sorting.**

Sorting is the process of arranging data into meaningful order so that you can analyze it more effectively. 

Let's walk through the steps of Bubble Sort for the given numbers (5, 4, 3, 1, 2) in ascending order:

Initial array: (5, 4, 3, 1, 2)

Step 1:
Compare 5 and 4: (4, 5, 3, 1, 2)
Compare 5 and 3: (4, 3, 5, 1, 2)
Compare 5 and 1: (4, 3, 1, 5, 2)
Compare 5 and 2: (4, 3, 1, 2, 5)

Step 2:
Compare 4 and 3: (3, 4, 1, 2, 5)
Compare 4 and 1: (3, 1, 4, 2, 5)
Compare 4 and 2: (3, 1, 2, 4, 5)

Step 3:
Compare 3 and 1: (1, 3, 2, 4, 5)
Compare 3 and 2: (1, 2, 3, 4, 5)

Step 4:
Compare 2 and 1: (1, 2, 3, 4, 5)

The array is now sorted in ascending order: (1, 2, 3, 4, 5).


**Q6C: Write a program, which implements a recursive function which takes an integer number and displays the number in reverse.**

```
#include<stdio.h>
int recursive(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
    }
    recursive(n/10);
}
int main()
{
    int n;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    printf("Number in reverse: ");
    recursive(n);
    return 0;
}
```

## Solution of the Question-07

**Q7A:  What are the different file modes in C?**

| File Mode | Description                                                                                                                                          |
|-----------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| "r"       | Read mode. Opens the file for reading.                                                                                                               |
| "w"       | Write mode. Opens the file for writing. If the file exists, it is truncated; if not, a new file is created.                                          |
| "a"       | Append mode. Opens the file for writing. Data is appended to the end of the file. If the file doesn't exist, a new file is created.                  |
| "r+"      | Read/write mode. Opens the file for both reading and writing. The file must exist.                                                                   |
| "w+"      | Read/write mode. Opens the file for reading and writing. If the file exists, it is truncated; if not, a new file is created.                         |
| "a+"      | Read/append mode. Opens the file for reading and writing. Data is appended to the end of the file. If the file doesn't exist, a new file is created. |


**Q7B: Write a program which takes a string from user as input Then it writes the string to a file called "myfile.txt".**  
```
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

```

**Q7C: What is a macro? Give an example.**

Macro in c is defined by the #define directive. Macro is a name given to a piece of code, so whenever the compiler encounters a macro in a program, it will replace it with the macro value.

Example:
```
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int num = 5;
    int result = SQUARE(num);
    printf("Square of %d is %d\n", num, result);
    return 0;
}

// Output will be: 25
```

**Q7D: Explain static and register storage class specifier with proper example.**

The static Storage Class:
The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls.

The static modifier may also be applied to global variables. When this is done, it causes that variable's scope to be restricted to the file in which it is declared.

In C programming, when static is used on a global variable, it causes only one copy of that member to be shared by all the objects of its class.

```
#include <stdio.h>
void func(void);
 
static int count = 5; /* global variable */
int main()
{
   while(count--)
  {
      func();
   }
	
   return 0;
}

/* function definition */
void func( void )
{
   static int i = 5; /* local static variable */
   i++;
   printf("i is %d and count is %d\n", i, count);
}
```
When the above code is compiled and executed, it produces the following result −
```
i is 6 and count is 4
i is 7 and count is 3
i is 8 and count is 2
i is 9 and count is 1
i is 10 and count is 0
```

The register Storage Class:

The register storage class is used to define local variables that should be stored in a register instead of RAM. This means that the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied to it (as it does not have a memory location).
```
{
   register int  miles;
}
```
The register should only be used for variables that require quick access such as counters. It should also be noted that defining 'register' does not mean that the variable will be stored in a register. It means that it MIGHT be stored in a register depending on hardware and implementation restrictions.

## Solution of Question-08

Q8A: Predict the output of following C programs.
```
(i).
#include<stdio.h>
int main()
{
    static int i=5;
    if(--i)
    {
        printf("%d ",i);
        main(10);
    }
}
```
Output:
```
4 3 2 1
```

```
(ii)
#include<stdio.h>
int main(void)
{
    static int i=5;
    if(--i)
    {
        printf("%d ",i);
        main(10);
    }
}
```

> [!WARNING]
> Compilation Error!

**Q8B: How can we return multiple values from a function? What is the difference between variable declaration and variable definition?**

There are several ways to simulate returning multiple values from a function. Here are some common techniques to achieve this.You have to write one of this:

1. Using Pointers:
You can pass pointers to the function as arguments, and the function can modify the values pointed to by these pointers to effectively return multiple values.

```
#include <stdio.h>

void multipleValues(int x, int y, int* sum, int* product) {
    *sum = x + y;
    *product = x * y;
}

int main() {
    int num1 = 5, num2 = 10;
    int sum, product;

    multipleValues(num1, num2, &sum, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
```

2. Using Structures:
You can define a structure that contains multiple fields to hold the values you want to return. The function can then return an instance of the structure containing the desired values.

```
#include <stdio.h>

struct Result
{
    int sum;
    int product;
};

struct Result multipleValues(int x, int y)
{
    struct Result result;
    result.sum = x + y;
    result.product = x * y;
    return result;
}

int main()
{
    int num1 = 5, num2 = 10;
    struct Result result = multipleValues(num1, num2);

    printf("Sum: %d\n", result.sum);
    printf("Product: %d\n", result.product);

    return 0;
}
```

3. Using Arrays:
You can return multiple values in the form of an array. This method is suitable when you need to return a fixed number of values.

```
#include <stdio.h>

void multipleValues(int x, int y, int result[2])
{
    result[0] = x + y;
    result[1] = x * y;
}

int main()
{
    int num1 = 5, num2 = 10;
    int result[2];

    multipleValues(num1, num2, result);

    printf("Sum: %d\n", result[0]);
    printf("Product: %d\n", result[1]);

    return 0;
}
```

_Variable declaration and variable definition are two distinct concepts:_

1. Variable Declaration:
Variable declaration is a statement that announces the existence of a variable to the compiler. It tells the compiler about the variable's name and its data type, but it does not allocate memory or assign a value to the variable. A declaration is required before using a variable in the program to inform the compiler of the variable's type and name.

> Example of variable declaration:
  ```
   extern int x; // Declaration of the variable 'x'
  ```

In this example, the statement `extern int x;` is a variable declaration. It informs the compiler that the variable `x` of type `int` exists somewhere else in the program, but it doesn't allocate memory or assign a value to it.

2. Variable Definition:
Variable definition is a statement that not only declares the variable but also allocates memory for the variable and optionally initializes it with a value. A variable must be defined before it can be used in the program.

> Example of variable definition:
   ```
   int x; // Definition of the variable 'x'
   ```

  In this example, the statement `int x;` is a variable definition. It declares the variable `x` of type `int` and allocates memory to hold an integer value for the variable. However, it doesn't assign any specific value to `x`.

In summary, variable declaration informs the compiler about the existence and type of a variable, while variable definition allocates memory for the variable and optionally initializes it with a value. Both declaration and definition are necessary to use a variable in a program. In some cases, a variable can be both declared and defined in a single statement. For example, `int x = 10;` both declares and defines the variable `x` with an initial value of 10.

**Q8C: What is function in C? Write a program in C to convert decimal number to binary number using the function.**

A function is a self-contained block of code that performs a specific task or operation. 
```
#include <stdio.h>

void D2B(int n)
{
    int a[32];
    int i = 0;
    if (n==0)
    {
        printf("Binary: 0\n");
        return;
    }

    while(n>0)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    printf("Binary: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    D2B(n);
    return 0;
}
```


