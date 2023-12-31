#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _memcpy -  function that copies memory area.
  * @dest: This is pointer to the destination
  * @src: This is pointer to the source of data to be copied
  * @n: This is the number of bytes to be copied
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);

}
