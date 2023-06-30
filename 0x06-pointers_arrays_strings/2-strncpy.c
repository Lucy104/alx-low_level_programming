#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strncpy - function that copies a string.
  * @dest: parameter
  * @src: parameter
  * @n: parameter
  * Return: strncpy
  */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
