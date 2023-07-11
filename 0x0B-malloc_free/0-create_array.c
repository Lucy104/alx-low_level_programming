#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: the size of the memory to print
  * @c: parameter
  * Return: Always 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int l;
	char *lArray;

	for (l = 0; l < size; l++)
	{
		if (size == 0)
			return (NULL);
	}

	/* return a pointer to the allocated memory */
	lArray = malloc(size * sizeof(char));

	if (lArray == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
	{
		lArray[l] = c;
	}
	return (lArray);
}
