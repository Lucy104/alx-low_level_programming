#include <stdio.h>
#include "main.h"

/**
  * print_triangle - check the code
  * @size: parameter
  * Return: 0 (Success)
  */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');

		}
	}
}
