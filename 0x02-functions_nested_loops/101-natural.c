#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int l = 1;
	int total = 0;

	while (l < 1024)
	{
		if (l % 3 == 0)
			total += l;
		else if (l % 5 == 0)
			total += l;

		l++;
	}
	printf("%d\n", total);

	return (0);
}
