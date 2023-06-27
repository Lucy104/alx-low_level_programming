#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int l;
	int n, k;

	n = 0;
	k = -1;
	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == '-')
			k *= -1;

		if (s[l] > 47 && s[l] < 58)
		{
			if (n < 0)
				n = (n * 10) - (s[l] - '0');
			else
				n = (s[l] - '0') * -1;

			if (s[l + 1] < 48 || s[l + 1] > 57)
				break;
		}
	}
	if (k < 0)
		n *= -1;

	return (n);
}
