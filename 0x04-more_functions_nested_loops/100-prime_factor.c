#include <stdio.h>
#include <math.h>
#include "main.h"

/**
  * main - check the code
  * @l: parameter
  * Return: 0 (Success)
  */
int main(void)
{
	int l;
	long num = 612852475143;

	for (l = (int) sqrt(num); l > 2; l++)
	{
		if (num % l == 0)
		{
			printf("%d\n", l);
			break;
		}
	}

	return (0);

}
