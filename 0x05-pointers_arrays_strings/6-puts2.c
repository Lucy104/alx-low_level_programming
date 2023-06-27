#include "main.h"
#include <string.h>

/**
  * puts2 - function that prints every other character of a string
  * @str: parameter
  * Return: void
  */
void puts2(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
