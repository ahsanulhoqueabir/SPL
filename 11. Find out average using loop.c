// Find out the average using loop

#include<stdio.h>
int main ()
{
	int n, i;
	float sum=0, num, avg;
	printf ("Enter the set of numbers:");
	scanf ("%d", &n);


	for (i=1; i<=n; i++) {
		printf ("Enter the number %d:", i);
		scanf ("%f", &num);
		sum= sum + num;

	}
	avg= sum / n;
	printf ("Average= %.2f", avg);
	return 0;
	}

