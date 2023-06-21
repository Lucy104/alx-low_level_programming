#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int l = 0, k, m;

	if (n > 15 || n < 0)
		return;
	while (l <= n)
	{
		for (k = 0; k <= n; k++)
		{
			m = l * k;
			if (m > 99)
			{
				_putchar(m / 100 + '0');
				_putchar((m / 10 % 10) + '0');
				_putchar(m % 10 + '0');
			}
			else if (m > 9)
			{
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else if (k != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else
				_putchar(m + '0');

			if (k != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		l++;
	}
}
