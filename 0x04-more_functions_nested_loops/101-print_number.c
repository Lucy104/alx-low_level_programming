#include <stdio.h>
#include "main.h"

/**
  * print_number - check the code
  * @n: parameter
  * Return: 0 (Success)
  */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
