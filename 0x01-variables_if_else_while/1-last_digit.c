#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Description: A program will assign a random number to the variable n
* Return: 0 (Success)
*/
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;

	if (z > 5)
		printf("last Digit of %d is %d and is greater than 5\n", n, z);
	else if (z == 0)
		printf("last Digit of %d is %d and is 0\n", n, z);
	else
		printf("last Digit of %d is %d and is less than 6 and not 0\n", n, z);
	return (0);
}
