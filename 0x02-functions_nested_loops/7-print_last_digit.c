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
		last_digit = -1 * (i % 10);
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = i % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
