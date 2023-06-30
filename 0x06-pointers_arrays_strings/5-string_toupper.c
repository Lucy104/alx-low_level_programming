#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * string_toupper - function that changes lowercase of a string to uppercase
  * @l: string
  * Return: l
  */
char *string_toupper(char *l)
{
	int i;

	for (i = 0; l[i] != '\0'; i++)
	{
		if (l[i] > 96 && l[i] < 123)
		{
			l[i] -= 32;
		}
	}
	return (l);
}
