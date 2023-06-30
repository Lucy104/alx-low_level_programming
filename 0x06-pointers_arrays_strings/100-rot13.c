#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * rot13 - function that encodes a string
  * @l: string
  * Return: l
  */
char *rot13(char *l)
{
	int i;
	int len = strlen(l);

	for (i = 0; i < len; i++)
	{
		if (l[i] >= 'a' && l[i] <= 'z')
		{
			l[i] = (((l[i] - 'a') + 13) % 26) + 'a';
		}
		else if (l[i] >= 'A' && l[i] <= 'Z')
		{
			l[i] = (((l[i] - 'A') + 13) % 26) + 'A';
		}
	}
	return (l);
}
