#include "main.h"
#include <string.h>

/**
  * print_rev - function that prints a string, in reverse
  * @s:p\ parameter
  * Return: void
  */
void print_rev(char *s)
{
	int l;

	l = strlen(s);
	l--;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
