 #include "main.h"
#include <string.h>

/**
  * puts_half - function that prints half of a string
  *
  * @str: parameter
  * Return: void
  */
void puts_half(char *str)
{
	int z;
	int k;
	int s;

	z = strlen(str);
	s = z / 2;
	k = (z - 1) / 2;
	s++;
	k++;
	z--;
	if (z % 2 == 0)
	{
		while (s <= z)
		{
			_putchar(str[s]);
			s++;
		}
	}
	else
	{
		while (k <= z)
		{
			_putchar(str[k]);
			k++;
		}
	}
	_putchar('\n');
}
