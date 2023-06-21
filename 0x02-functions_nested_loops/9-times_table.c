#include <stdio.h>
#include "main.h"

/**
  * times_table - check the code
  * Description: function that prints the 9 times table, starting with 0
  * Return: Nothing
  */
void times_table(void)
{
	int j, k, i;

	for (k = 0; k < 10; k++)
	{
		i = 0;
		for (j = 0; j < 10; j++)
		{
			if ((j < 10 && i > 0) || (j > 0 && k == 0))
			{
				_putchar(',');
				_putchar(' ');
				if (i <= 9)
					_putchar(' ');
			}
			if (i > 9)
				_putchar('0' + i / 10);

			_putchar('0' + i % 10);
			i += k;
		}
		_putchar('\n');
	}
}
