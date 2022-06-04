#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number is the  variable n each time it is executed
 * based a condition
 * Return : always o
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%D is positive\n", n);
if (n == 0)
	printf("%D is positive\n", n);
if (n < 0)
{
	printf("%D is positive\n", n);
}
return (0);
}
