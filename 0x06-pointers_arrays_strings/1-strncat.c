#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strncat -  function that concatenates two strings
  * @dest: parameter
  * @src: parameter
  * @n: parameter
  * Return: strncat
  */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
