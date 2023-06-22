#include <stdio.h>
#include "main.h"

/**
  * print_square - check the code
  * @size: parameter
  * Return: 0 (Success)
  */
void print_square(int size)
{
	int i = 0;
	int j;

	for (i = 0; i < size; i++)
	{
		j = i;
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
