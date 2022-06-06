#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (n < 0)
		printf("Last digit of %d is -8 and is less than 6\n", n);
	return (0);
}
