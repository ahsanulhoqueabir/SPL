# 12th Batch SPL Lab Problem and Solve

## Problem-1: 1182 – Parity:

Given an integer n, first we represent it in binary. Then we count the number of ones. We say n has odd parity if the number of one's is odd. Otherwise we say n has even parity. 21 = (10101)<sub>2</sub> has odd
parity since the number of one's is 3. 6 = (110)<sub>2</sub> has even parity.
Now you are given n, we have to say whether n has even or odd parity.

Input:
<p> Input starts with an integer T (≤ 1000), denoting the number of test cases. Each case contains an integer n (1 ≤ n < 2<sup>31</sup>). </p>
Output:
For each case, print the case number and 'odd' if n has odd parity, otherwise print 'even'.

```
Sample Input: 
2
21
6

Output for Sample Input:
Case 1: odd
Case 2: even
```

```
// Solution:
#include<stdio.h>
#include<string.h>
int main()
{
    int t; scanf("%d",&t);
    while (t--)
    {
       int n,i=0;
       scanf("%d",&n);
       int a[]={0};
       int c=0;
       while(n!=0)
       {
         int tmp = n%2;
         if(tmp==1) c++;
         n /= 2;
       }
       printf("%d",c);
    }
```

## Problem-2: 1214 – Large Division
Given two integers, a and b, you should check whether a is divisible by b or not. We know that an integer a is divisible by an integer b if and only if there exists an integer c such that a = b * c.

Input:
Input starts with an integer T (≤ 525), denoting the number of test cases.
Each case starts with a line containing two integers a (-10200 ≤ a ≤ 10200) and b (|b| > 0, b fits into
a 32 bit signed integer). Numbers will not contain leading zeroes.

Output:
For each case, print the case number first. Then print 'divisible' if a is divisible by b. Otherwise
print 'not divisible'.

```
Sample Input :
6
101 101
0 67
-101 101
7678123668327637674887634 101
11010000000000000000 256
-202202202202000202202202 -101

Output for Sample Input:
Case 1: divisible
Case 2: divisible
Case 3: divisible
Case 4: not divisible
Case 5: divisible
Case 6: divisible
```
