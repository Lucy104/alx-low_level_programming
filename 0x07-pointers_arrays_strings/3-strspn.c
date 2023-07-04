#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strspn -  function that gets the length of a prefix substring.
  * @s: input
  * @accept: input
  * Return: (0) Success
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(s + i) == *(accept + n))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
