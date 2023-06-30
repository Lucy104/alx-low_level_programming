#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 *
 * @c: Encoded string
 *
 * Return: Encoded output
 */
char *leet(char *c)
{
	int i, j;
	char d[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0 ; c[i] != '\0'; i++)
	{
		for (j = 0 ; j <= 10 ; j++)
		{
			if (c[i] == d[j])
			{
				c[i] = n[j];
			}
		}
	}
	return (c);
}
