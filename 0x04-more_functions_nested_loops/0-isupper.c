#include <stdio.h>
#include "main.h"

/**
  * _isupper - check the code
  * @c: parameter
  * Return: 0 (Success)
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
