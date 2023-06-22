#include <stdio.h>
#include "main.h"

/**
  * print_diagonal - check the code
  * @n: parameter
  * Return: 0 (Success)
  */
void print_diagonal(int n)
{
	int i;
	int k;
	int j;

	for (i = 0; i < n; i++)
	{
		j = i;
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
