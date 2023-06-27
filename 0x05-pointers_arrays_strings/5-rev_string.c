#include "main.h"
#include <string.h>

/**
  * rev_string - function that reverses a string.
  * @s: parameter
  * Return: void
  */
void rev_string(char *s)
{
	int l, n, k;
	char z;

	l = strlen(s);
	k = l;
	for (l--, n = 0; n < k / 2; l--, n++)
	{
		z = s[n];
		s[n] = s[l];
		s[l] = z;
	}
}
