#include <stdio.h>
#include "main.h"

/**
  * jack_bauer - check the code
  * Description:  function that prints every minute of the day
  * Return: 0 (Success)
  */
void jack_bauer(void)
{
	int z = 0;
	int l = 0, n = 0, k = 0, j = 0;

	for (z = 0; z < 1440; z++)
	{
		_putchar(l + '0');
		_putchar(n + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(j + '0');
		_putchar('\n');

		j++;

		if (j > 9)
		{
			j = 0;
			k++;
		}
		if (k > 5)
		{
			k = 0;
			n++;
		}
		if (n > 9)
		{
			n = 0;
			l++;
		}
	}
}
