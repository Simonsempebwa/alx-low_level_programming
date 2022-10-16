#include <stdio.h>
#include <stdlib.h>
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
		printf("%d is positive number\n", n);
	else if (n < 0)
		printf("%d is negative number\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
