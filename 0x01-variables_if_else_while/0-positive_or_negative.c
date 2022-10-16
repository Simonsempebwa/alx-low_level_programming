#include <stdio.h>
#include <time.h>
/**
 * main - prints if thr remainder is positive, negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	        printf("%d is a positive number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is a negative\n", n);
	}

       return (0);
}
