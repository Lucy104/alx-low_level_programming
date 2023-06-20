#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - check the code
  * @i: parameter
  * Return: 0 (Success)
  */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		i = i * -1;
		last_digit = i % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}

	last_digit = i % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
