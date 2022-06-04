#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*main -> assign a random number to the variable num each time it is executed*/
 /*and print the last digit of the number stored in the variable n*/
 /*Return: Always 0 (Success)*/
int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	if (num > 0)
			printf("%d is positive\n", num);
	if (num == 0)
			printf("%d is zero\n", num);
	if (num < 0)
	{
			printf("%d is negative\n", num);
	}
	return (0);
}

