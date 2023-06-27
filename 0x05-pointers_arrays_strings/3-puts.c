#include <stdio.h>
#include "main.h"

/**
  * _puts - function that prints a string
  * @str: parameter
  * Return: void
  */
void _puts(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
