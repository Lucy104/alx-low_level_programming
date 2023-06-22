#include <stdio.h>
#include "main.h"

/**
  * more_numbers - check the code
  * Return: 0 (Success)
  */
void more_numbers(void)
{
	int z, k;

	for (z = 0; z < 10; z++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar('0' + k % 10);
		}
		_putchar('\n');
	}
}

